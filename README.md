# FIR-RoCC-Accelerator  
This is the repository for a FIR compute-oriented accelerator that implemented in chipyard. All work will be included inside.
## 1 Usage
### 1.1 Initial Chipyard Repository Setup
You can refer to the [Chipyard Docs 1.7.0](https://chipyard.readthedocs.io/en/1.7.0/Chipyard-Basics/Initial-Repo-Setup.html)
#### 1.1.1 Dependencies Requirements
Chipyard is developed and tested on Linux-based systems, and working under Windows is not recommended.  
The following dependencies were written based on Ubuntu 16.04 LTS and 18.04 LTS, make sure your platform already has these dependencies.  
```bash
#!/bin/bash
set -ex
sudo apt-get install -y build-essential bison flex software-properties-common curl
sudo apt-get install -y libgmp-dev libmpfr-dev libmpc-dev zlib1g-dev vim default-jdk default-jre
# install sbt: https://www.scala-sbt.org/release/docs/Installing-sbt-on-Linux.html#Ubuntu+and+other+Debian-based+distributions
echo "deb https://repo.scala-sbt.org/scalasbt/debian /" | sudo tee -a /etc/apt/sources.list.d/sbt.list
curl -sL "https://keyserver.ubuntu.com/pks/lookup?op=get&search=0x2EE0EA64E40A89B84B2DF73499E82A75642AC823" | sudo apt-key add
sudo apt-get update
sudo apt-get install -y sbt
sudo apt-get install -y texinfo gengetopt
sudo apt-get install -y libexpat1-dev libusb-dev libncurses5-dev cmake
# deps for poky
sudo apt-get install -y python3.8 patch diffstat texi2html texinfo subversion chrpath wget
# deps for qemu
sudo apt-get install -y libgtk-3-dev gettext
# deps for firemarshal
sudo apt-get install -y python3-pip python3.8-dev rsync libguestfs-tools expat ctags
# install DTC
sudo apt-get install -y device-tree-compiler
sudo apt-get install -y python
# install git >= 2.17
sudo add-apt-repository ppa:git-core/ppa -y
sudo apt-get update
sudo apt-get install git -y

# install verilator
sudo apt-get install -y autoconf
git clone http://git.veripool.org/git/verilator
cd verilator
git checkout v4.034
autoconf && ./configure && make -j$(nproc) && sudo make install
```
#### 1.1.2 Setting up the Chipyard 1.7.0
This will initialize and checkout all of the necessary git submodules, and will also validate that you are on the 1.7.0 branch, 
or you can change to the other version.
```bash
git clone https://github.com/ucb-bar/chipyard.git
cd chipyard
# checkout latest official chipyard release
# note: this may not be the latest release if the documentation version != "stable"
git checkout 1.7.0
./scripts/init-submodules-no-riscv-tools.sh
```
#### 1.1.3 Building a Toolchain
This will initialize and checkout all of the necessary git submodules, and will also validate that you are on the 1.7.0 branch, 
or you can change to the other version.
```bash
./scripts/build-toolchains.sh riscv-tools # for a normal risc-v toolchain
```
The `env.sh` file is emitted that sets the PATH, RISCV, and LD_LIBRARY_PATH environment variables, you should run this command everytime you enter the chipyard
```bash
source ./env.sh
```
To make sure everything is properly set, you can test your toolchain environment by generating a Rocket configuration by `Verilator`
```bash
# Enter Verilator directory
cd sims/verilator
make CONFIG=SmallRocketConfig
```
### 1.2 Create the Accelerator Repo
Suppose you want to make an accelerator called FIRAccel. First create a directory for your scala files inside the chipyard/generators/accelerators folder.
```bash
mkdir FIRAccel
cd FIRAccel
```
This is where you should put the chisel code for your accelerators. Create an file called `FIRFilter.scala`, using the following template.
It emulates the inner computation logic of a dual-mode FIR flter and the setup of the coeffcients, it has a built-in state machine to manage
its operations.
```scala
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
```
Then put the following code into `FIRRoCCAccel.scala`, it serves as an interface between the Rocket-cores RoCC and the FIRFilter. It sends the required data to the FIR filter, retrieves the results, and communicates them back to the processor.
```scala
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
```
Put the following configuration parameters into `chipyard/generators/rocket-chip/src/main/scala/subsystem`
```scala
class WithFIRRoCCAccel extends Config((site,here,up) => {
    case BuildRoCC => Seq(       
        (p:Parameters) => {
            val regWidth = 64 
            val firAccel = LazyModule(new FIRRoCCAccel(OpcodeSet.custom0, regWidth)(p))
            firAccel
        }
    )
})
```
Put the following configuration parameters into `chipyard/generators/chipyard/src/main/scala/config`, the configs provides the highly configurable characteristics for the SoC generation, 
```scala
class FIRAccelRocketDualModeConfig extends Config(
	new freechips.rocketchip.subsystem.WithFIRRoCCAccel++
	new freechips.rocketchip.subsystem.WithNBigCores(1) ++ // single rocket-core 
	new chipyard.config.AbstractConfig) 
```
### 1.3 Simulation
Enter the verilator folder, and generate the RTL code.
```bash
cd sims/verilator
make CONFIG=FIRccelRocketDualModeConfig -j
```
The generated folder can be find in `chipyard/sims/verilator/generated-src`, the `generated-src` folder includes the generated Verilog files and some test files, while the `verilator` folder contains the source code and installation files for the simulation tool Verilator.
### 1.4 Functional test
Put the following testing code, the code performs two major tasks, the first is to compute FIR filter results for a given input sequence using both software implementation and hardware-accelerated implementation, the second is using rdcycle function to record the computation time for both implementations. If all the result matches, then it will print out the `test successed!` and calculates the average cycles that are used in both meth
```C
#include<stdio.h>
#include "rocc.h"
#include "encoding.h"

#define SIZE 10    // The size of sampled signal
#define N 16         // The tap number of filter
#define M (N + 1)   // The length of filter

long long delay[N] = {0}; 

// FIR function
long long fir_filter(unsigned long long input) {
	long long temp = 0;
	// fp:50Hz  fs:80Hz   Fs:360Hz  wp:0.8   ws:1.5
	//long long coeff[N] = {23711, 106071, 196296, 255436, 
							//255436, 196296, 106071, 23711}; 
	long long coeff[N] = {239, -23729, -44490, -37961, 
			     		12762, 102193, 199636, 263220, 
						263220, 199636, 102193, 12762, 
						-37961, -44490, -23729, 239}; 

	// fp:0.7Hz  fs:1Hz   Fs:360Hz  wp:1   ws:1
	//long long coeff[N] = {-90800, -127200, -212100, -636600, 
							// 636600, 212100, 127200, 90800}; 
	//long long coeff[N] = {-42100, -48700, -57600, -70500, 
							// -90800, -127200, -212100, -636600, 
							// 636600, 212100, 127200, 90800, 
							// 70500, 57600, 48700, 42100}; 

	// TDL
    for (int i = N - 1; i > 0; i--) {
        delay[i] = delay[i - 1];
    }
    delay[0] = input;

    // MAC 
    for (int i = 0; i < N; i++) {
        temp += coeff[i] * delay[i];
    }
    return temp;
}


int main(void){
	long long  swFIRRes[SIZE] = {0};
	long long  hwFIRRes[SIZE] = {0};	
	long long sampled_signal[] = {-290257,-354942,-369628,-404315,-409002,-388689,-348377,-303066,-272754,-247443};
	unsigned long long  start, end;

	// Software implementation
	printf("software FIR compute:\n");
	start = rdcycle();
	for (int i = 0; i < SIZE; i++) {
        swFIRRes[i] = fir_filter(sampled_signal[i]);
        //printf("Input: %lld\tOutput: %lld\n", sampled_signal[i], swFIRRes[i]);
    }
	end = rdcycle();
	printf("SW average cycles used:  %llu\n", (end-start)/SIZE);

	// Hardware RoCC acceleration
	printf("hardware FIR compute:\n");
	start = rdcycle();
	ROCC_INSTRUCTION_S(0, 0, 0); //X, rs1, funct
	asm volatile ("fence" ::: "memory");
	for(int i=0; i<SIZE; i++){
		asm volatile ("fence"); // make sure the data will be store back without disorder
		ROCC_INSTRUCTION_DS(0, hwFIRRes[i], sampled_signal[i], 2);
		asm volatile ("fence" ::: "memory");
		//printf("Input: %lld\tOutput: %lld\n", sampled_signal[i], hwFIRRes[i]);
	}	
	end = rdcycle();
	printf("HW average cycles used:  %llu\n", (end-start)/SIZE);

	//Compare the result 
	for(int i=0; i<SIZE; i++){
		if(swFIRRes[i] != hwFIRRes[i]){
			printf("test failed!  %lld FIR: swFIRRes: %lld, hwFIRRes: %lld\n", 
					sampled_signal[i], swFIRRes[i], hwFIRRes[i]);
			return 0;
		}
		//printf("%lld,", hwFIRRes[i]);
	}	
	
	printf("\ntest successed! \n");
	return 0;
	
}
```
Run the following command, it will generate an executable file with the same name as 'riscv'
```bash
riscv64-unknown-elf-gcc lcm.c -o lcm
```
Place the generated 'fir.riscv' executable file into the Verilator working directory. The 'simulator-chipyard-FIRAccelRocketDualModeConfig' located in the same directory level is an executable file and serves as the entry point for the test program.
Execute the command in this working directory.
```bash
./simulator-chipyard-FIRAccelRocketDualModeConfig pk fir.riscv
```
Waiting for the terminal to output the result.
```log
[UART] UART0 is here (stdin/stdout).
software FIR compute:
SW average cycles used:  323
hardware FIR compute:
HW average cycles used:  27

test successed!

```
