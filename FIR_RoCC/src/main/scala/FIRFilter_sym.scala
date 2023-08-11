class FIRFilter(val w: Int) extends Module {
  val io = IO(new Bundle {
    val in = Flipped(Valid(SInt(w.W)))
    val mode = Input(UInt(5.W))
    val out = Decoupled(SInt(w.W))
  })

  // mode == 0 indicates the setup mode
  // mode == 1 indicates the 8-tap mode
  // mode == 2 indicates the 16-tap mode

  //val regfile_test = RegInit(VecInit((10 to 1 by -1).map(_.U(w.W)) ++ Seq.fill(6)(0.U(w.W))))
  //val products8_test = RegInit(VecInit((8 to 1 by -1).map(_.U(w.W))))
  val regfile = RegInit(VecInit(Seq.fill(16)(0.S(w.W))))
  val coeff_8 = RegInit(VecInit(Seq.fill(4)(0.S(w.W))))
  val coeff_16 = RegInit(VecInit(Seq.fill(8)(0.S(w.W))))
  val sum_temp = RegInit(VecInit(Seq.fill(8)(0.S(w.W))))
  val products = RegInit(VecInit.fill(8)(0.S(w.W)))


  // Define a State Machine
  val s_idle ::  s_setup :: s_shift :: s_datain :: s_compute :: s_compute_wait :: s_compute_done :: s_ready :: Nil = Enum(8)
  val state_reg = RegInit(s_idle)

  //val counter = RegInit(0.U) 
  val sum = RegInit(0.S(w.W))
  val test = RegInit(0.S(w.W))
  val coeff_length = RegInit(0.U(5.W))


  switch(state_reg) {
    is(s_idle) {
      when(io.in.valid === true.B && io.mode === 0.U) {
        state_reg := s_setup
      }.elsewhen(io.in.valid === true.B && io.mode === 1.U) {
        state_reg := s_shift
      }.elsewhen(io.in.valid === true.B && io.mode === 2.U) {
        state_reg := s_shift
      }.otherwise {
        state_reg := s_idle
      }
    }
    // Initialize the register and set all the value to zero
    is(s_setup) {
      regfile := VecInit(Seq.fill(16)(0.S(w.W)))
      when(io.in.bits === 0.S) { //lowpass filter
        // fp:40Hz  fs:60Hz   Fs:360Hz  wp:0.8   ws:1.5
        coeff_8 := VecInit(Seq(23711.S, 106071.S, 196296.S, 255436.S))
        coeff_16 := VecInit(Seq(239.S, -23729.S, -44490.S, -37961.S, 12762.S, 102193.S, 199636.S, 263220.S)) 
      }.elsewhen(io.in.bits === 1.S) { //highpass filter
        // fp:1Hz  fs:0.7Hz   Fs:360Hz  wp:1   ws:1
        coeff_8 := VecInit(Seq(-90800.S, -127200.S, -212100.S, -636600.S)) 
        coeff_16 := VecInit(Seq(-42100.S, -48700.S, -57600.S, -70500.S, -90800.S, -127200.S, -212100.S, -636600.S)) 
      }.elsewhen(io.in.bits === 2.S) {
         coeff_8 := VecInit(Seq( 63000.S, 167900.S, 282100.S, 332100.S)) 
      }.otherwise {
        state_reg := s_idle
      }
      state_reg := s_ready
    }
    // Right-shift the register to simulate the time delay line in FIR 
    is(s_shift) {
      when(io.mode === 1.U) { 
        for (i <- 7 to 1 by -1) {
          regfile(i) := regfile(i - 1)
        }
      }.elsewhen(io.mode === 2.U) {
        for (i <- 15 to 1 by -1) {
          regfile(i) := regfile(i - 1)
        }
      }
      state_reg := s_datain
    }
    // Receive the valid input and keep it in the first register
    is(s_datain) {
      regfile(0) := io.in.bits
      state_reg := s_compute
    }
    // couple the symmetric register value
    is(s_compute) {
      when(io.mode === 1.U) {
        sum_temp(0) := io.in.bits + regfile(7) 
        for (i <- 1 until 4) { 
          sum_temp(i) := regfile(i) + regfile(7-i)
        }
      }.elsewhen(io.mode === 2.U) {
        sum_temp(0) := io.in.bits + regfile(15) 
        for (i <- 1 until 8) {
          sum_temp(i) := regfile(i) + regfile(15-i)
        }
      }
      state_reg := s_compute_wait
    }
    // Multiply the delayed signal to the corresponding coefficients
    is(s_compute_wait) {        
      when(io.mode === 1.U) { 
        for (i <- 0 until 4) { 
          products(i) := sum_temp(i) * coeff_8(i)
        }
      }.elsewhen(io.mode === 2.U) {
        for (i <- 0 until 8) {
          products(i) := sum_temp(i) * coeff_16(i)
        }
      }
      state_reg := s_compute_done
    }
    // Accumulate the products
    is(s_compute_done) {        
      sum := products.reduce(_ + _)
      state_reg := s_ready
    }
    // Send the valid result to outside module
    is(s_ready) {
      when(io.out.ready === true.B){
        state_reg := s_idle
      }.otherwise {
        state_reg := s_ready
      }
    }
  }

  io.out.valid := (state_reg === s_ready)
  io.out.bits := sum
   
}
