set cache_write ./
set cache_read  ./
define_design_lib WORK -path ./WORK

set search_path " \
  /work/TECH_LIB/DATA/STD/tcbn28hpcplusbwp40p140_180b/Front_End/timing_power_noise/CCS/tcbn28hpcplusbwp40p140_180a \
  /work/TECH_LIB/DATA/STD/tcbn28hpcplusbwp7t40p140_180b/Front_End/timing_power_noise/CCS/tcbn28hpcplusbwp7t40p140_180a \
"

##--- std db ---
#set std_db_wcl "gf40npkhdst_ss0p99vn40c.db gf40npksdst_ss0p99vn40c.db"
##--- ip db ---
#set ip_db_wcl ""
##--- io db ---
#set io_db_wcl "rgo_gf40_25v33_lp_40c_osc_ss_099_297_m40.db \
#               rgo_gf40_25v33_lp_40c_ss_099_297_m40.db \
#               rgo_gf40_25v33_lp_40c_ss_099_297_m40_SR.db "

#--- std db ---
#set std_db_9t_wcl "tcbn28hpcplusbwp40p140ssg0p81vm40c_ccs.db "
set std_db_7t_wcl "tcbn28hpcplusbwp7t40p140ssg0p81vm40c_ccs.db "
#--- memory db ---
set mem_db_wcl ""
#--- ip db ---
set ip_db_wcl ""
#--- io db ---
set io_db_wcl ""

set design_db_wcl "$std_db_7t_wcl $mem_db_wcl $ip_db_wcl $io_db_wcl"

set synthetic_library [list dw_foundation.sldb standard.sldb]
set link_library "* $design_db_wcl $synthetic_library "
set target_library "$std_db_7t_wcl "


#set lp_gating_cell                              "CKLNQD4BWP40P140"
set lp_gating_cell                              "CKLNQD4BWP7T40P140"

#*******************************************************************************
#**  MISC
#*******************************************************************************
set_app_var link_force_case case_insensitive
set_app_var compile_seqmap_propagate_constants true
set         hdl_keep_license "false"
set_app_var hdlin_check_no_latch "true"
set_app_var verilogout_no_tri true
set_app_var enable_recovery_removal_arcs "true"
set_app_var timing_disable_recovery_removal_checks "true"

set_app_var compile_seqmap_identify_shift_registers false
set_app_var compile_seqmap_identify_shift_registers_with_synchronous_logic false

set_app_var verilogout_equation false
set_app_var hdlin_autoread_verilog_extensions       ".v .d"
set_app_var timing_enable_multiple_clocks_per_reg true
#set_app_var compile_disable_hierarchical_inverter_opt "true"
set_app_var timing_separate_clock_gating_group "true"

#set         test_default_scan_style "multiplexed_flip_flop"
set_app_var test_scan_enable_port_naming_style "dft_syn_gt_se%s"
set_app_var compile_clock_gating_through_hierarchy "true"
set_app_var power_preserve_rtl_hier_names "true"

set_app_var report_default_significant_digits "4"
set_app_var power_do_not_size_icg_cells "false"

set_app_var bus_naming_style {%s[%d]}
set_app_var write_name_nets_same_as_ports true
set_app_var hdlout_internal_busses false
set_app_var bus_inference_style {%s[%d]}

set_app_var verilogout_show_unconnected_pins true
set_app_var sh_enable_page_mode false

set_app_var hlo_resource_allocation constraint_driven
set_app_var compile_ultra_ungroup_dw true
#set_app_var compile_ultra_ungroup_dw false

#set_app_var compile_ultra_ungroup_small_hierarchies false
#set_app_var hdlin_translate_off_skip_text true
#set hdlin_vrlg_std 2000
#set hdlin_vrlg_std 1995
set cache_read  ./
set cache_write ./
define_design_lib WORK -path ./work


#*******************************************************************************
#**  Ignore Warning 
#*******************************************************************************

#-------------------------------------------------------------------------------
#   Warning: Defining new variable 'DESIGN_MODULE'. (EQN-10) 
#-------------------------------------------------------------------------------
suppress_message EQN-10

#-------------------------------------------------------------------------------
#   Warning: In design 'xxx', cell 'yyy' does not drive any nets. (LINT-1)
#-------------------------------------------------------------------------------
suppress_message LINT-1

#-------------------------------------------------------------------------------
#   Warning: In design 'xxx', net 'yyy' driven by pin 'zzz' has no loads. (LINT-2)
#-------------------------------------------------------------------------------
suppress_message LINT-2

#-------------------------------------------------------------------------------
#   Warning: In design 'xxx', port 'yyy' is not connected to any nets. (LINT-28)
#-------------------------------------------------------------------------------
suppress_message LINT-28

#-------------------------------------------------------------------------------
#   Warning: In design 'xxx', input port 'yyy' is connected directly to output port 'zzz'. (LINT-29)
#-------------------------------------------------------------------------------
suppress_message LINT-29

#-------------------------------------------------------------------------------
#   Warning: In design 'xxx', output port 'yyy' is connected directly to output port 'zzz'. (LINT-31)
#-------------------------------------------------------------------------------
suppress_message LINT-31

#-------------------------------------------------------------------------------
#   Warning: In design 'xxx', a pin on submodule 'yyy' is connected to logic 1 or logic 0. (LINT-32)
#-------------------------------------------------------------------------------
suppress_message LINT-32

#-------------------------------------------------------------------------------
#   Warning: In design 'xxx', the same net is connected to more than one pin on submodule 'yyy'. (LINT-33)
#-------------------------------------------------------------------------------
suppress_message LINT-33

#-------------------------------------------------------------------------------
#   Warning: In design 'xxx', output port 'yyy' is connected directly to 'logic 0'. (LINT-52)
#-------------------------------------------------------------------------------
suppress_message LINT-52

#-------------------------------------------------------------------------------
#   Warning: VHDL-93 generates different concatenation results from VHDL-87 ... (VHDL-2285)
#-------------------------------------------------------------------------------
suppress_message VHDL-2285 

#-------------------------------------------------------------------------------
#Warning: Only simple configurations (specification of architecture for a top
#    level entity) are supported for synthesis. `Nested block specifications and component
#    configurations are ignored  on line 142  (VHDL-2092)
#-------------------------------------------------------------------------------
suppress_message VHDL-2092

#-------------------------------------------------------------------------------
#Warning:  xxx.v:142: Intraassignment delays for blocking assignments
#          are ignored. (VER-129)
#-------------------------------------------------------------------------------
suppress_message VER-129

#-------------------------------------------------------------------------------
#Warning:  xxx.v:142: Intraassignment delays for nonblocking assignments
#          are ignored. (VER-130)
#-------------------------------------------------------------------------------
suppress_message VER-130

#-------------------------------------------------------------------------------
#Warning:  Starting with the 2000.11-1 release, the Presto Verilog reader treats Verilog 'integer' types as signed; synthesized
#result may not match earlier versions of HDL Compiler. (VER-314)
#-------------------------------------------------------------------------------
#suppress_message VER-314

#-------------------------------------------------------------------------------
#Warning:  xxx.v:637: signed to unsigned conversion occurs. (VER-318)
#-------------------------------------------------------------------------------
#suppress_message VER-318

#-------------------------------------------------------------------------------
#Warning:  DEFAULT branch of CASE statement cannot be reached. (ELAB-311)
#-------------------------------------------------------------------------------
#suppress_message ELAB-311

#-------------------------------------------------------------------------------
#Warning:  Potential simulation-synthesis mismatch if index exceeds size of array 'xxx'. (ELAB-349)
#-------------------------------------------------------------------------------
#suppress_message ELAB-349

#-------------------------------------------------------------------------------
#  Warning:  bt_alu_dp.v:115: X and Z bits in parameters of subdesign '' are set to zero. (ELAB-389)
#-------------------------------------------------------------------------------
#suppress_message ELAB-389

