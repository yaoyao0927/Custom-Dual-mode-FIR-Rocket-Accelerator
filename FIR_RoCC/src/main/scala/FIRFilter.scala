package chipyard/generators/FIR_RoCC

import Chisel._

import freechips.rocketchip.tile._ 
import freechips.rocketchip.config._ 
import freechips.rocketchip.diplomacy._ 

class FIRFilter(val w: Int) extends Module {
  val io = IO(new Bundle {
    val in = Flipped(Valid(SInt(w.W)))
    val mode = Input(UInt(5.W))
    val out = Decoupled(SInt(w.W))
  })

  // mode == 0 indicates the setup mode
  // mode == 1 indicates the 8-tap mode
  // mode == 2 indicates the 16-tap mode

  // Two tap modes will share the same Regfile
  val regfile = RegInit(VecInit(Seq.fill(16)(0.S(12.W))))
  val coeff_8 = RegInit(VecInit(Seq.fill(8)(0.S(12.W))))
  val coeff_16 = RegInit(VecInit(Seq.fill(16)(0.S(12.W))))

  val products = RegInit(VecInit.fill(16)(0.S(24.W)))

  // Define a State Machine
  val s_idle ::  s_setup :: s_shift :: s_datain :: s_compute :: s_compute_done :: s_ready :: Nil = Enum(7)
  val state_reg = RegInit(s_idle)

  //val counter = RegInit(0.U) 
  val sum = RegInit(0.S(32.W))
  //val test = RegInit(0.S(w.W))
  //val coeff_length = RegInit(0.U(5.W))


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
    // Initialize the register and set the coefficient
    is(s_setup) {  
      // lowpass filter mode (coeffcient extracted by MATLAB.fdatool)
      when(io.in.bits === 0.S) {
        // fp:40Hz  fs:60Hz   Fs:360Hz  wp:0.8   ws:1.5
        coeff_8 := VecInit(Seq(2371.S, 10607.S, 19629.S, 25543.S, 
                               25543.S, 19629.S, 10607.S, 2371.S))

        coeff_16 := VecInit(Seq(23.S, -2372.S, -4449.S, -3796.S, 
                                1276.S, 10219.S, 19963.S, 26322.S, 
                                26322.S, 19963.S, 10219.S, 1276.S, 
                                -3796.S, -4449.S, -2372.S, 23.S))
		// clean and initialize the register file 
        regfile := VecInit(Seq.fill(16)(0.S(12.W)))

      // highpass filter mode (coefficient extracted by MATLAB.fdatool)
      }.elsewhen(io.in.bits === 1.S) { 
        // fp:1Hz  fs:0.7Hz   Fs:360Hz  wp:1   ws:1
        //coeff_8 := VecInit(Seq(-90800.S, -127200.S, -212100.S, -636600.S, 
                               //636600.S, 212100.S, 127200.S, 90800.S))
 
        //coeff_16 := VecInit(Seq(-42100.S, -48700.S, -57600.S, -70500.S, 
                               // -90800.S, -127200.S, -212100.S, -636600.S, 
                               // 636600.S, 212100.S, 127200.S, 90800.S, 
                               // 70500.S, 57600.S, 48700.S, 42100.S)) 
        // clean and initialize the register file 
        regfile := VecInit(Seq.fill(16)(0.S(12.W)))

      // moving average filter mode (simple coefficient for functional test)
      }.elsewhen(io.in.bits === 2.S) {
        //coeff_8 := VecInit(Seq(1.S, 1.S, 1.S, 1.S, 1.S, 1.S, 1.S, 1.S))
       // coeff_16 := VecInit(Seq(1.S, 1.S, 1.S, 1.S, 1.S, 1.S, 1.S, 1.S,
                               //1.S, 1.S, 1.S, 1.S, 1.S, 1.S, 1.S, 1.S))
        // fill the register file with 0 to 15
        regfile := VecInit((15 to 0 by -1).map(_.S(12.W)))
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
      //regfile(0) := io.in.bits
      regfile(0) := io.in.bits(11,0).asSInt()
      state_reg := s_compute
    }
    // Multiply the delayed signal to the corresponding coefficients
    is(s_compute) {
      when(io.mode === 1.U) { 
        products(0) := io.in.bits * coeff_8(0)
        for (i <- 1 until 8) { 
          products(i) := regfile(i) * coeff_8(i)
        }
      }.elsewhen(io.mode === 2.U) {
        products(0) := io.in.bits * coeff_16(0)
        for (i <- 1 until 16) {
          products(i) := regfile(i) * coeff_16(i)
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

