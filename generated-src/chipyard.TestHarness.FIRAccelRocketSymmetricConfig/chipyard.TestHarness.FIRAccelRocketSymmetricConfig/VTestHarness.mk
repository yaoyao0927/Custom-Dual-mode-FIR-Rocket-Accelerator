# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VTestHarness.mk

default: /home/hmy/chipyard/sims/verilator/simulator-chipyard-FIRAccelRocketSymmetricConfig

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = VTestHarness
# Module prefix (from --prefix)
VM_MODPREFIX = VTestHarness
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	 -O3 -std=c++11 -I/home/hmy/chipyard/riscv-tools-install/include -I/home/hmy/chipyard/tools/DRAMSim2 -I/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig    -D__STDC_FORMAT_MACROS -DTEST_HARNESS=VTestHarness -DVERILATOR -include /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.plusArgs -include /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/verilator.h \
	-include /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/VTestHarness.h \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	 -L/home/hmy/chipyard/riscv-tools-install/lib -Wl,-rpath,/home/hmy/chipyard/riscv-tools-install/lib -L/home/hmy/chipyard/sims/verilator -L/home/hmy/chipyard/tools/DRAMSim2 -lfesvr -ldramsim  \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	SimDRAM \
	SimDTM \
	SimJTAG \
	SimSerial \
	SimUART \
	emulator \
	mm \
	mm_dramsim2 \
	remote_bitbang \
	testchip_tsi \
	uart \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig \


### Default rules...
# Include list of all generated classes
include VTestHarness_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

SimDRAM.o: /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/SimDRAM.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
SimDTM.o: /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/SimDTM.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
SimJTAG.o: /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/SimJTAG.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
SimSerial.o: /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/SimSerial.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
SimUART.o: /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/SimUART.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
emulator.o: /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/emulator.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mm.o: /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/mm.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mm_dramsim2.o: /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/mm_dramsim2.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
remote_bitbang.o: /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/remote_bitbang.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
testchip_tsi.o: /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/testchip_tsi.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
uart.o: /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/uart.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
/home/hmy/chipyard/sims/verilator/simulator-chipyard-FIRAccelRocketSymmetricConfig: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) -o $@ $(LIBS) $(SC_LIBS)


# Verilated -*- Makefile -*-
