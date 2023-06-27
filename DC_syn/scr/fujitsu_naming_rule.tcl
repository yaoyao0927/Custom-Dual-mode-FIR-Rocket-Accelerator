redirect /dev/null {
    set verilog_reserved {always always_comb always_ff always_latch and assert assert_strobe \
    assign automatic begin bit break buf bufif0 bufif1 byte case casex casez cell change char \
    cmos config const continue deassign default defparam design disable do edge else end endcase \
    endconfig endfunction endgenerate endinterface endmodule endprimitive endspecify endtable \
    endtask endtransition enum event export extern for  force forever fork forjoin function  \
    generate genvar highz0 highz1 if iff ifnone import incdir include initial inout input instance \
    int integer interface join large liblist library localparam logic longint longreal macromodule \
    medium modport module nand negedge nmos nor noshowcancelled not notif0 notif1 or output packed \
    parameter pmos posedge primitive process priority pull0 pull1 pullup pulldown pulsestyle_onevent \
    pulsestyle_ondetect rcmos real realtime reg release repeat return rnmos rpmos rtran rtranif0 \
    rtranif1 scalared shortint shortreal shortcancelled signed small specify specparam static strong0 \
    strong1 stuck supply0 supply1 table task time timeprecision timeunit tran tranif0 tranif1 transition \
    tri tri0 tri1 trinand trior trireg type  typedef union unique use unsigned vectored viod wait wand \
    weak0 weak1 while wire wor xor xnor changed triand timescale \
    }

    set dft_reserved {resetl select enable shiftir clockir updateir pauseir shiftde clockdr updatedr \
    capturedr pausedr idle boundary updatedr_bsr capturedr_bsr clockdr_bsr clamp runbist intest idcode \
    highz core_input core_output pin pin_n pin_p din dout oe \
    }

    set typ_reserved_words [concat $verilog_reserved ]
    set frontend_reserved_words [concat $verilog_reserved $dft_reserved]
    set top_reserved_words [concat $verilog_reserved]
    set backend_reserved_words [concat $verilog_reserved]
}

set bus_naming_style "%s\[%d\]"
set bus_inference_style "%s\[%d\]"
set bus_range_separator_style ":"
set bus_multiple_separator_style ","
set gen_cell_pin_name_separator "_"

define_name_rules simple_rules \
    -special verilog \
    -allow "a-z A-Z 0-9 _" \
    -first_restrict "0-9" \
    -target_bus_naming_style {%s[%d]} \
    -check_internal_net_name \
    -equal_ports_nets \
    -inout_ports_equal_nets \
    -dummy_net_prefix "SYN_NC_%d" \
    -case_insensitive

define_name_rules subdesign_rules \
    -special verilog \
    -max_length 256 \
    -allow "a-z A-Z 0-9 _" \
    -first_restrict "0-9" \
    -target_bus_naming_style {%s[%d]} \
    -check_internal_net_name \
    -equal_ports_nets \
    -inout_ports_equal_nets \
    -dummy_net_prefix "SYN_NC_%d" \
    -case_insensitive \
    -reserved_words $typ_reserved_words

define_name_rules frontend_rules \
    -special verilog \
    -max_length 256 \
    -allow "a-z A-Z 0-9 _" \
    -first_restrict "0-9" \
    -target_bus_naming_style {%s[%d]} \
    -check_internal_net_name \
    -equal_ports_nets \
    -inout_ports_equal_nets \
    -dummy_net_prefix "SYN_NC_%d" \
    -case_insensitive \
    -reserved_words $frontend_reserved_words

define_name_rules backend_rules \
    -special verilog \
    -max_length 256 \
    -allow "a-z A-Z 0-9 _" \
    -first_restrict "0-9" \
    -target_bus_naming_style {%s[%d]} \
    -check_internal_net_name \
    -equal_ports_nets \
    -inout_ports_equal_nets \
    -dummy_net_prefix "SYN_NC_%d" \
    -case_insensitive \
    -reserved_words $backend_reserved_words

define_name_rules top_rules \
    -special verilog \
    -type port \
    -max_length 32 \
    -allow "a-z A-Z 0-9 _" \
    -first_restrict "0-9" \
    -check_internal_net_name \
    -remove_port_bus \
    -equal_ports_nets \
    -inout_ports_equal_nets \
    -dummy_net_prefix "SYN_NC_%d" \
    -case_insensitive \
    -reserved_words $top_reserved_words

define_name_rules reducer_rules \
    -special verilog \
    -max_length 256 \
    -allow "a-z A-Z 0-9 _" \
    -first_restrict "_ 0-9" \
    -target_bus_naming_style {%s[%d]} \
    -check_internal_net_name \
    -map {{{"_$" , ""}, {"^_", ""}, {"__", "_"}}} \
    -equal_ports_nets \
    -inout_ports_equal_nets \
    -dummy_net_prefix "SYN_NC_%d" \
    -case_insensitive \
    -reserved_words $typ_reserved_words
 
echo "============================================================"
echo {Please apply naming rules as followed...}
echo {current_design <current top design> ;#change to current top design}
echo {change_names -hie -rules frontend_rules [-verbose]}
echo {change_names -hie -rules backend_rules [-verbose] ;#For DFT Inserted NetList to change name}
echo {change_names -hie -rules reducer_rules [-verbose] ;#Remove fist/last/multi "_"}
echo {change_names -hie -rules top_rules [-verbose] ;#Remove Top Ports bus}
echo {write -f verilog -h -o <top_module_name>.v}
echo "============================================================"

