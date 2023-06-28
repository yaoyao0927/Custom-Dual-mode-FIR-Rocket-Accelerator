####===NOTE: modify this design rtl filelist according to your design!
######################
# define rtl list
######################

set design_root /home/wuan-home/tempfile/FIR_RTL2DC/FIR_RTL_SIM/hardware_code

set search_path [concat $search_path  \
${design_root}/FIR_SYN_RTL    \
]

#analyze -format vhdl "  \
#${design_root}/pmu_lite/rtl/IR.vhd           \
#"

analyze -format sverilog "  \
${design_root}/FIR_SYN_RTL/chipyard.TestHarness.FIRAccelRocketConfig.harness.v \
${design_root}/FIR_SYN_RTL/chipyard.TestHarness.FIRAccelRocketConfig.top.v \
${design_root}/FIR_SYN_RTL/chipyard.TestHarness.FIRAccelRocketConfig.harness.mems.v \
${design_root}/FIR_SYN_RTL/chipyard.TestHarness.FIRAccelRocketConfig.top.mems.v \
${design_root}/FIR_SYN_RTL/plusarg_reader.v \
${design_root}/FIR_SYN_RTL/EICG_wrapper.v \
${design_root}/FIR_SYN_RTL/IOCell.v \
${design_root}/FIR_SYN_RTL/vsrc/ClockDividerN.sv \
${design_root}/libcell/snps_cglatch.v \
"

#set design_root /home/hbli/NanHu/nanhu/ip/dep/rtl_new/dep_aggc
##set SOC /work/proj/DATA/hanjun/jinggang/flow/..
##set design_root /work/proj/DATA/hanjun/jinggang/flow/..
##set CPU_PATH /work/proj/DATA/hanjun/jinggang/flow/mini_syn/scr/cpu_a5_core_t_syn.fl 
#
#set search_path [concat $search_path  \
#${design_root}/rtl    \
#]
#
#analyze -format sverilog -lib WORK -vcs "-f ${CPU_PATH}"



