###===NOTE:You should define your own clocks/gen_clocks according to your design!
####CLOCK_NAME   PERIOD SETUP_UNCER  HOLD_UNCER  CLOCK_PORT/PIN
#set clock_list "
#    CLK_EXT      41.66     0.2        0            xx_xin      
#    CLK_RTC      30.50     0.2        0            xx_xi_rtc
#"

####CLOCK_NAME   PERIOD SETUP_UNCER  HOLD_UNCER  CLOCK_PORT/PIN
set clock_list "
    CLK_MCU       2.00      0.2        0            clock_clock
    CLK_TCK      40.00      2.0        0            jtag_TCK
"

###===NOTE:The virtual clock setting is corresponding to the souce clock settting!              
####CLOCK_NAME   PERIOD SETUP_UNCER  HOLD_UNCER  CLOCK_PORT/PIN
####virtual_CLOCK_NAME   PERIOD    SU         HU
#set vclock_list "
#    VCLK_EXT            41.66     0.2        0    
#    VCLK_RTC            30.50     0.2        0    
#"

####virtual_CLOCK_NAME   PERIOD    SU         HU
set vclock_list "
    VCLK_MCU             2.00      0.2        0   
    VCLK_TCK            40.00      2.0        0   
"

proc_create_clock   $clock_list
proc_create_vclock  $vclock_list

set_clock_group -asynchronous -name clk_group \
                -group {CLK_MCU VCLK_MCU} \
                -group {CLK_TCK VCLK_TCK}
