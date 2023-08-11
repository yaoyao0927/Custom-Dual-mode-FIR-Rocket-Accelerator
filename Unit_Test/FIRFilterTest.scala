package FIR_RoCC

import chisel3.iotesters.{ChiselFlatSpec, Driver, PeekPokeTester}
import chisel3.iotesters.PeekPokeTester
import chisel3._

class FIRFilterTest(c: FIRRoCCAccel) extends PeekPokeTester(c) {
     // Initial state should be s_idle
     // funct = 0 indicates next state is s_setup
     // rs1 = 2 indicates the moving average filter mode in s_setup
     poke(c.io.cmd.bits.rs1, 2.S)
     poke(c.io.cmd.bits.inst.funct, 0.U)
     poke(c.io.cmd.valid, true.B)
     poke(c.io.cmd.bits.inst.rd, 0.U)
     expect(c.io.resp.valid, false.B)
     step(1)
     // move to s_setup
     expect(c.io.cmd.ready, false.B)
     expect(c.io.resp.valid, false.B)
     step(1)
     // move to s_ready
     expect(c.io.cmd.ready, false.B)
     expect(c.io.resp.valid, true.B)
     step(1)
     // move back to s_idle
     // Complete the assignment of coefficients and register files
     // funct = 2 indicates 16-tap mode
     // rs1 = 16 indicates the current register input
     expect(c.io.cmd.ready, true.B)
     poke(c.io.cmd.bits.rs1, 16.S)
     poke(c.io.cmd.bits.inst.funct, 2.U)
     poke(c.io.cmd.valid, true.B)
     poke(c.io.cmd.bits.inst.rd, 0.U)
     expect(c.io.resp.valid, false.B)
     step(1)
     // move to s_shift
     expect(c.io.cmd.ready, false.B)
     expect(c.io.resp.valid, false.B)
     step(1)
     // move to s_datain
     expect(c.io.cmd.ready, false.B)
     expect(c.io.resp.valid, false.B)
     step(1)
     // move to s_compute
     expect(c.io.cmd.ready, false.B)
     expect(c.io.resp.valid, false.B)
     step(1)
     // move to s_compute_done
     expect(c.io.cmd.ready, false.B)
     expect(c.io.resp.valid, false.B)
     step(1)
     // move to s_ready
     expect(c.io.cmd.ready, false.B)
     expect(c.io.resp.valid, true.B)
     expect(c.io.resp.bits.data,136.U)
     step(1)
     //s_idle
     expect(c.io.cmd.ready,true.B)
     expect(c.io.resp.valid,false.B)
}
