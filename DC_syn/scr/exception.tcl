####====NOTE:You should specify exception conditions according to your designs!
#set_false_path
set_false_path -from [all_inputs] -to [all_outputs]

#set_multicycle_path
#set_multicycle_path -setup 6 -to [get_cell memd/u_vps_top/U_vps_stage2/U_vps_stage2_sad_div/div_ret*]
#set_multicycle_path -hold  5 -to [get_cell memd/u_vps_top/U_vps_stage2/U_vps_stage2_sad_div/div_ret*]
        
#set_case_analysis
#set_case_analysis 0 [get_pins U_CORE/U_PWROFF/rct/cgu/scaler_core_post/ckmux_clkout/ckmux1/mux2/I0/S]
