package FIR_RoCC

import Chisel._
import freechips.rocketchip.tile._ 
import freechips.rocketchip.config._ 
import freechips.rocketchip.diplomacy._ 

class WithFIRRoCCAccel extends Config((site,here,up) => {
    case BuildRoCC => Seq(       
        (p:Parameters) => {
            val regWidth = 64 
            val firAccel = LazyModule(new FIRRoCCAccel(OpcodeSet.custom0, regWidth)(p))
            firAccel
        }
    )
})

object OpcodeSet {
  def custom0 = new OpcodeSet(Seq(Bits("b0000000")))
  def all = custom0
}

class FIRAccelRocketGeneralConfig extends Config(
	new freechips.rocketchip.subsystem.WithFIRRoCCAccel++
	new freechips.rocketchip.subsystem.WithNBigCores(1) ++ // single rocket-core 
	new chipyard.config.AbstractConfig) 

class FIRAccelRocketSymmetricConfig extends Config(
	new freechips.rocketchip.subsystem.WithFIRRoCCAccel++
	new freechips.rocketchip.subsystem.WithNBigCores(1) ++ // single rocket-core 
	new chipyard.config.AbstractConfig) 

class FIRAccelRocketDualModeConfig extends Config(
	new freechips.rocketchip.subsystem.WithFIRRoCCAccel++
	new freechips.rocketchip.subsystem.WithNBigCores(1) ++ // single rocket-core 
	new chipyard.config.AbstractConfig) 

class WithFPGAFreq100MHz extends WithFPGAFrequency(100)

class WithFPGAFrequency(fMHz: Double) extends Config(
  new WithPeripheryBusFrequency(fMHz) ++ // assumes using PBUS as default freq.
  new WithMemoryBusFrequency(fMHz)
)






