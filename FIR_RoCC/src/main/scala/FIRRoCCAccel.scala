package chipyard/generators/FIR_RoCC

import Chisel._
import freechips.rocketchip.tile._ 
import freechips.rocketchip.config._ 
import freechips.rocketchip.diplomacy._ 

class FIRRoCCAccel(opcodes: OpcodeSet, val w: Int)(implicit p: Parameters) extends LazyRoCC(opcodes) {
  override lazy val module = new FIRAcceleratorModule(this, w)
}

class FIRAcceleratorModule(outer: FIRRoCCAccel, val w: Int)(implicit p: Parameters)
    extends LazyRoCCModuleImp(outer) {
  val rd = RegInit(0.U(5.W))
  val rs1Value = RegInit(0.S(w.W))
  val rs1Enable = RegInit(false.B)
  val funct = RegInit(0.U(5.W))

  val busy = RegInit(false.B)
  val canResp = RegInit(false.B)

  // Condition for decoding a command
  val canDecode = io.cmd.fire() &&
    (io.cmd.bits.inst.funct === 0.U ||
      io.cmd.bits.inst.funct === 1.U ||
      io.cmd.bits.inst.funct === 2.U)

  // Module is ready for a new command if not busy
  io.cmd.ready := !busy
  io.busy := busy

  // When a command can be decoded, stop receive cmd
  when(canDecode) {
    busy := true.B
    rs1Value := io.cmd.bits.rs1.asSInt
    rs1Enable := true.B
    rd := io.cmd.bits.inst.rd
    funct := io.cmd.bits.inst.funct
  }

  // Instantiate the FIR filter module
  val FIR = Module(new FIRFilter(w))
  FIR.io.in.bits := rs1Value
  FIR.io.in.valid := rs1Enable
  FIR.io.mode := funct

  val FIRRes = RegInit(0.S(w.W))

  FIR.io.out.ready := Mux(FIR.io.out.valid, true.B, false.B)
  // If FIR has a valid output, ready to fire the response
  when(FIR.io.out.valid) {
    FIRRes := FIR.io.out.bits
    canResp := true.B
    rs1Enable := false.B
  }

  io.resp.valid := canResp
  io.resp.bits.rd := rd
  io.resp.bits.data := FIRRes.asUInt

  // After a response is sent, update canResp
  when(io.resp.fire()) {
    canResp := false.B
    busy := false.B
    rs1Enable := false.B
    rs1Value := 0.S
    FIRRes := 0.S
  }
}



