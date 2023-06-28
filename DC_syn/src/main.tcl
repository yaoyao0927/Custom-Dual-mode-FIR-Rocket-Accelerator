sh date '+DATE: %m/%d/%y%nTIME: %H:%M'
set_host_option -max_core 4
#set hostnm [sh hostname]

set top TOP_NAME
set lib LIB_7T
set restore 0

source ../../scr/alias.tcl
source ../../scr/fujitsu_naming_rule.tcl


# read lib
if {$lib == "LIB_7T"} {
    source ../../scr/dc_setup_7t.tcl -v -e
} else {
    source ../../scr/dc_setup_9t.tcl -v -e
}
source ../../scr/dont_use.tcl

#read_rtl
if {$restore == "1"} {
    read_ddc ../../ddc/${top}.ddc
    link
    report_timing
    return
} else {
    set_svf ../../svf/$top.svf
    source ../../scr/read_rtl.tcl
    elaborate $top -work WORK -update
}

#set dont_touch
set dont_touch_list [get_cells -h -f "is_hierarchical == false && is_mapped == true && ref_name != **logic_0** && ref_name != **logic_1** && ref_name !~ gf_cmos*"]
##===NOTE begin:if you have some special cells/instances which needn't be compiled by DC, you should add them to the follwing dont_touch_list======
##==for example:
#set dont_touch_list [get_cells -h -f "is_hierarchical == false && is_mapped == true && ref_name != **logic_0** && ref_name != **logic_1** && ref_name !~ gf_cmos*"]
#set dont_touch_list [$dont_touch_list  \
#                     U_CORE/U_PWROFF/amba/ahb/enet/etn_all_inst/etn_top_inst/umac_inst/ethernet_mac_on_inst/misc_top_inst/u_disable_lan_enb/lib_inst \
#                     U_CORE/U_PWROFF/amba/ahb/enet/etn_all_inst/etn_top_inst/umac_inst/clk_rst_inst/gtxclk_pin_buf/lib_inst "]
##===NOTE end======

set_dont_touch $dont_touch_list

check_design		> ../../rpt/$top/${top}_chk_rtl.rpt

set_clock_gating_style  -sequential latch \
                        -positive_edge_logic {integrated} \
                        -minimum_bitwidth 4 \
                        -control_point before \
                        -max_fanout 64 \
                        -control_signal scan_enable

#current_design	$top
#change_names -rules verilog         -hie -verbose
#change_names -rules backend_rules   -hie -verbose
#change_names -rules reducer_rules   -hie -verbose


##===NOTE begin:if other target library is selected, the parameter "tcbn28hpcplusbwp40p140ssg0p81v0p81vm40c_ccs.db" should be modifed!======
if {$lib == "LIB_7T"} {
    set_operating_conditions -library tcbn28hpcplusbwp7t40p140ssg0p81v0p81vm40c_ccs.db
} else {
    set_operating_conditions -library tcbn28hpcplusbwp40p140ssg0p81v0p81vm40c_ccs.db
}
##===NOTE end======
set_wire_load_model -name ZeroWireload
set_wire_load_mode enclosed
set_auto_disable_drc_nets -all
set_fix_multiple_port_nets -all -feedthroughs -buffer_constants
set_auto_disable_drc_nets -constant false

set_max_fanout          64      [get_designs "*"]
set_max_transition      0.5     [get_designs "*"]
set_max_capacitance     0.3     [current_design]
set_input_transition    0.5     [all_inputs]
set_load                0.2     [all_outputs]

##===NOTE begin:the following three .tcl files maybe modified according to your design======
source -v -e  ../../scr/clock.tcl
source -v -e  ../../scr/io.tcl
source -v -e  ../../scr/exception.tcl 
##===NOTE end======

#exception
foreach_in_coll clk_tmp [get_clocks * -f "full_name !~ VCLK*"] {
    if {[string match [get_nets -of_objects [get_attr $clk_tmp sources] -q] ""]} {
        echo "Warning: [get_attr $clk_tmp full_name] have no net to connect"
    } else {
        set_ideal_network [get_nets -of_objects [get_attr $clk_tmp sources] -q] -no_propagate
    }
}
if {[info exist except_in_list] && $except_in_list != ""} {
    foreach_in_coll tmp $except_in_list {
        if {[get_ports $tmp -quiet] == ""} {
           set obj [get_pins  $tmp]
        } else {
           set obj [get_ports $tmp]
        }
        set_ideal_network [get_nets -of_objects $obj] -no_propagate
    }
}

#if {[get_cells -hier -q -f "ref_name =~ REGF_2P*"] != ""} {
#    set_disable_timing -from CLKA -to CLKB [get_cells -hier -q -f "ref_name =~ REGF_2P*"]
#    set_disable_timing -from CLKB -to CLKA [get_cells -hier -q -f "ref_name =~ REGF_2P*"]
#}
#if {[get_cells -hier -q -f "ref_name =~ *gf_cmos*ra2*"] != ""} {
#    set_disable_timing -from CLKA -to CLKB [get_cells -hier -q -f "ref_name =~ *gf_cmos*ra2*"]
#    set_disable_timing -from CLKB -to CLKA [get_cells -hier -q -f "ref_name =~ *gf_cmos*ra2*"]
#}
#if {[get_cells -hier -q -f "ref_name =~ *gf_cmos*rf2*"] != ""} {
#    set_disable_timing -from CLKA -to CLKB [get_cells -hier -q -f "ref_name =~ *gf_cmos*rf2*"]
#    set_disable_timing -from CLKB -to CLKA [get_cells -hier -q -f "ref_name =~ *gf_cmos*rf2*"]
#}

group_path -name grp_INPUT  -from [all_inputs]  -weight 0.1
group_path -name grp_OUTPUT -to   [all_outputs] -weight 0.1
group_path -name grp_INOUT  -from [all_inputs] -to [all_outputs] -weight 0.1

#compile
current_design $top
set_max_area 0
#set_max_leakage_power 0
set_critical_range 0.3 $top


##===NOTE begin:Compile strategy should be considered according to your design's condition======
##===NOTE :First, we select the area priority compile method======
#compile -scan -gate_clock

##===NOTE :if the timing is not satisfied, we will select the timing priority compile method======
compile_ultra -scan -gate_clock -no_seq -no_autoungroup
compile_ultra -scan -gate_clock -inc
##===NOTE end======

simplify_constants -boundary_optimization
remove_unconnected_ports [find -hierarchy cell "*"]

current_design	$top
set uniquify_naming_style "${top}_%s_%d"
uniquify -dont_skip_empty_designs -force

#hook up
#current_design $top
#create_port -dir in dft_syn_gt_se
#set test_dont_fix_constraint_violations "true"
#set_dft_insertion_configuration -map_effort low \
#                                -preserve_design_name true \
#                                -synthesis_optimization none
#
#set_dft_signal -type scanenable \
#               -usage clock_gating \
#               -view spec \
#               -active 1 \
#               -port dft_syn_gt_se
#
#set_dft_configuration -scan disable -connect_clock_gating enable
#
#insert_dft

#---------------- Ungroup  --------------------------------#
set empty_list {}
set cell_c [get_cells -h -f "is_hierarchical == true"]
foreach_in_col cell $cell_c {
    set cell_name [get_attr $cell full_name]
    if {([get_cells $cell_name/* -f "is_hierarchical == true" -q] == "" ) && ([get_cells $cell_name/* -f "ref_name !~ *INV* || ref_name !~ *BUF*" -q] == "" )} {
        lappend empty_list $cell_name
    }
}

if {$empty_list != ""} {
  ungroup $empty_list
}

#change_names -hie -rules top_rules      -verbose
change_names -rules verilog         -hie -verbose
change_names -rules backend_rules   -hie -verbose
change_names -rules reducer_rules   -hie -verbose

#write ddc and netlist
write_sdc ../../netlist/${top}.sdc
write -hierarchy -format ddc     -output "../../ddc/${top}.ddc"
write -hierarchy -format verilog -output "../../netlist/${top}.v"

set_svf -off
#rpt
check_timing		                                        > ../../rpt/$top/${top}_chk_syn.rpt
report_area			                                        > ../../rpt/$top/${top}_area.rpt
report_area -hierarchy			                            > ../../rpt/$top/${top}_area_hier.rpt
report_case_analysis -all                                   > ../../rpt/$top/${top}_case.rpt
report_timing_derate                                        > ../../rpt/$top/${top}_time_derate.rpt
report_reference	                                        > ../../rpt/$top/${top}_ref.rpt
report_constraint -all_violators -max_delay -nosplit        > ../../rpt/$top/${top}_violation.rpt
report_timing -path full -delay max -net -max_paths 500     > ../../rpt/$top/${top}_timing.rpt
report_qor                                                  > ../../rpt/$top/${top}_qor.rpt
report_timing -loop                                         > ../../rpt/$top/${top}_loop.rpt
get_cells -hier -filter "@is_unmapped==true"                > ../../rpt/$top/${top}_unmapped.rpt
report_cell [get_cells -hier -filter "@is_black_box==true"] > ../../rpt/$top/${top}_black_box.rpt
report_clock_gating                                         > ../../rpt/$top/${top}_gate.rpt
report_clock_gating -ungated                               >> ../../rpt/$top/${top}_gate.rpt
lsc $dont_touch_list                                        > ../../rpt/$top/${top}_dont_touch.list


sh date '+DATE: %m/%d/%y%nTIME: %H:%M'
#exit
