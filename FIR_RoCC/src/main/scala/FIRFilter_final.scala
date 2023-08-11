class FIRFilter(val w: Int) extends Module {
  val io = IO(new Bundle {
    val in = Flipped(Valid(SInt(w.W)))
    val mode = Input(UInt(5.W))
    val out = Decoupled(SInt(w.W))
  })

  // mode == 0 indicates the setup mode
  // mode == 1 indicates the 8-tap mode
  // mode == 2 indicates the 16-tap mode

  val regfile = RegInit(VecInit(Seq.fill(16)(0.S(12.W))))
  //val coeff_16 = RegInit(VecInit(Seq.fill(16)(0.S(12.W))))
  val products = RegInit(VecInit.fill(8)(0.S(24.W)))
  val coeff_16 = RegInit(VecInit((1 to 16).map(_.S(12.W))))

  // Define a State Machine
  val s_idle ::  s_setup :: s_shift :: s_datain :: s_compute_init :: s_compute_iter :: s_compute_accu :: s_ready :: Nil = Enum(8)
  val state_reg = RegInit(s_idle)

  val sum = RegInit(0.S(32.W))
  val counter = RegInit(0.U(4.W))
  val reuse_counter = RegInit(0.U(2.W))
  val offset = RegInit(0.U(4.W))
  val accu = RegInit(0.S(32.W))
  val coeff = RegInit(VecInit(Seq.fill(16)(0.S(12.W))))

  switch(state_reg) {
    is(s_idle) {
      accu := 0.S
      sum := 0.S
      when(io.in.valid === true.B && io.mode === 0.U) {
        regfile := VecInit(Seq.fill(16)(0.S(w.W)))
        state_reg := s_setup
      }.elsewhen(io.in.valid === true.B && io.mode === 1.U) {
        counter := 0.U
        state_reg := s_shift
      }.elsewhen(io.in.valid === true.B && io.mode === 2.U) {
        counter := 0.U
        state_reg := s_shift
      }.otherwise {
        state_reg := s_idle
      }
    }
    // Initialize the coefficients 
    is(s_setup) {  
      coeff(counter) := io.in.bits(11,0).asSInt()
      counter := counter + 1.U
      // prevent the overflow and reset counter
      when(counter === 15.U) {
        counter := 0.U
      }
      state_reg := s_ready
    
    }
    // Right-shift the register to simulate the time delay line in FIR 
    is(s_shift) {
      for (i <- 15 to 1 by -1) {
        regfile(i) := regfile(i - 1)
      }
      reuse_counter := io.mode(1,0) - 1.U
      state_reg := s_datain
    }
    // Receive the valid input and keep it in the first register
    is(s_datain) {
      regfile(0) := io.in.bits(11,0).asSInt()
      state_reg := s_compute_init
    }
    //
    is(s_compute_init) {
      sum := accu + sum
      when (reuse_counter === 0.U || reuse_counter === 1.U) {
        offset := reuse_counter << 3
        state_reg := s_compute_iter
      } .otherwise {
        state_reg := s_ready
      }
    }
    // Multiply the delayed signal to the corresponding coefficients
    is(s_compute_iter) {
      for (i <- 0 until 8 ) { 
        products(i.U + offset) := regfile(i.U + offset) * coeff_16(i.U + offset)  
        //accu := accu + regfile(i.U + offset) * coeff_16(i.U + offset)     
      }
      reuse_counter := reuse_counter - 1.U
      state_reg := s_compute_accu
    }
    // Accumulate the products
    is(s_compute_accu) {        
      accu := products.reduce(_ + _)
      state_reg := s_compute_init
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

  //coeff_16 := coeff
  io.out.valid := (state_reg === s_ready)
  io.out.bits := sum
   
}

