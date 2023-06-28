#==NOTE:define clock related ports according to your design
#set clock_in_list   [get_ports "xx_xin xx_xi_rtc"]
set clock_in_list   [get_ports "clk"]

#==NOTE:define reset/mode related ports according to your design
#set except_in_list  [get_ports "xx_test_mode"]  
set except_in_list  [get_ports "reset sw_reset"]  


#define all input ports except clock/reset/mode ports
set general_inputs [remove_from_collection [all_inputs] [list $clock_in_list $except_in_list]]


set clk_coll [get_clocks VCLK*]
foreach_in_coll clk_tmp $clk_coll {
    set clk_per [get_attr $clk_tmp period]
    set clk_nm  [get_attr $clk_tmp full_name]
    set_input_delay   [expr 0.3* $clk_per] -clock $clk_nm -add $general_inputs
    set_output_delay  [expr 0.3* $clk_per] -clock $clk_nm -add [all_outputs]
}

