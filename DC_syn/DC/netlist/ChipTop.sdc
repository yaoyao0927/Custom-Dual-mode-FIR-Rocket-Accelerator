###################################################################

# Created by write_sdc on Mon Jun 26 15:29:50 2023

###################################################################
set sdc_version 2.0

set_units -time ns -resistance kOhm -capacitance pF -voltage V -current mA
set_wire_load_mode enclosed
set_wire_load_model -name ZeroWireload -library                                \
tcbn28hpcplusbwp40p140ssg0p81vm40c_ccs
set_max_fanout 64 [current_design]
set_max_transition 0.5 [current_design]
set_max_capacitance 0.3 [current_design]
set_max_area 0
set_load -pin_load 0.2 [get_ports jtag_TDO]
set_load -pin_load 0.2 [get_ports serial_tl_clock]
set_load -pin_load 0.2 [get_ports serial_tl_bits_in_ready]
set_load -pin_load 0.2 [get_ports serial_tl_bits_out_valid]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[31]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[30]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[29]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[28]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[27]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[26]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[25]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[24]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[23]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[22]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[21]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[20]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[19]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[18]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[17]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[16]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[15]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[14]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[13]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[12]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[11]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[10]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[9]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[8]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[7]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[6]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[5]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[4]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[3]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[2]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[1]}]
set_load -pin_load 0.2 [get_ports {serial_tl_bits_out_bits[0]}]
set_load -pin_load 0.2 [get_ports axi4_mem_0_clock]
set_load -pin_load 0.2 [get_ports axi4_mem_0_reset]
set_load -pin_load 0.2 [get_ports axi4_mem_0_bits_aw_valid]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_id[3]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_id[2]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_id[1]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_id[0]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[31]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[30]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[29]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[28]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[27]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[26]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[25]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[24]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[23]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[22]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[21]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[20]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[19]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[18]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[17]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[16]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[15]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[14]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[13]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[12]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[11]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[10]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[9]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[8]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[7]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[6]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[5]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[4]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[3]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[2]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[1]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_addr[0]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_len[7]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_len[6]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_len[5]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_len[4]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_len[3]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_len[2]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_len[1]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_len[0]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_size[2]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_size[1]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_size[0]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_burst[1]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_burst[0]}]
set_load -pin_load 0.2 [get_ports axi4_mem_0_bits_aw_bits_lock]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_cache[3]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_cache[2]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_cache[1]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_cache[0]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_prot[2]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_prot[1]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_prot[0]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_qos[3]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_qos[2]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_qos[1]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_aw_bits_qos[0]}]
set_load -pin_load 0.2 [get_ports axi4_mem_0_bits_w_valid]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[63]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[62]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[61]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[60]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[59]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[58]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[57]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[56]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[55]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[54]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[53]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[52]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[51]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[50]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[49]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[48]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[47]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[46]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[45]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[44]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[43]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[42]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[41]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[40]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[39]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[38]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[37]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[36]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[35]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[34]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[33]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[32]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[31]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[30]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[29]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[28]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[27]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[26]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[25]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[24]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[23]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[22]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[21]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[20]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[19]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[18]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[17]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[16]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[15]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[14]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[13]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[12]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[11]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[10]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[9]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[8]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[7]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[6]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[5]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[4]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[3]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[2]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[1]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_data[0]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_strb[7]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_strb[6]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_strb[5]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_strb[4]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_strb[3]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_strb[2]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_strb[1]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_w_bits_strb[0]}]
set_load -pin_load 0.2 [get_ports axi4_mem_0_bits_w_bits_last]
set_load -pin_load 0.2 [get_ports axi4_mem_0_bits_b_ready]
set_load -pin_load 0.2 [get_ports axi4_mem_0_bits_ar_valid]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_id[3]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_id[2]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_id[1]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_id[0]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[31]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[30]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[29]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[28]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[27]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[26]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[25]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[24]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[23]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[22]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[21]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[20]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[19]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[18]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[17]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[16]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[15]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[14]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[13]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[12]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[11]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[10]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[9]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[8]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[7]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[6]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[5]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[4]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[3]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[2]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[1]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_addr[0]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_len[7]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_len[6]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_len[5]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_len[4]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_len[3]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_len[2]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_len[1]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_len[0]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_size[2]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_size[1]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_size[0]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_burst[1]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_burst[0]}]
set_load -pin_load 0.2 [get_ports axi4_mem_0_bits_ar_bits_lock]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_cache[3]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_cache[2]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_cache[1]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_cache[0]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_prot[2]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_prot[1]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_prot[0]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_qos[3]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_qos[2]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_qos[1]}]
set_load -pin_load 0.2 [get_ports {axi4_mem_0_bits_ar_bits_qos[0]}]
set_load -pin_load 0.2 [get_ports axi4_mem_0_bits_r_ready]
set_load -pin_load 0.2 [get_ports uart_0_txd]
set_ideal_network -no_propagate  [get_ports jtag_TCK]
set_ideal_network -no_propagate  [get_ports clock_clock]
set_ideal_network -no_propagate  [get_ports reset]
create_clock [get_ports clock_clock]  -name CLK_MCU  -period 2  -waveform {0 1}  -add
set_clock_uncertainty -setup 0.2  [get_clocks CLK_MCU]
set_clock_uncertainty -hold 0  [get_clocks CLK_MCU]
create_clock [get_ports jtag_TCK]  -name CLK_TCK  -period 40  -waveform {0 20}  -add
set_clock_uncertainty -setup 2  [get_clocks CLK_TCK]
set_clock_uncertainty -hold 0  [get_clocks CLK_TCK]
create_clock -name VCLK_MCU  -period 2  -waveform {0 1}  -add
set_clock_uncertainty -setup 0.2  [get_clocks VCLK_MCU]
set_clock_uncertainty -hold 0  [get_clocks VCLK_MCU]
create_clock -name VCLK_TCK  -period 40  -waveform {0 20}  -add
set_clock_uncertainty -setup 2  [get_clocks VCLK_TCK]
set_clock_uncertainty -hold 0  [get_clocks VCLK_TCK]
group_path -name **clock_gating_default**
group_path -weight 0.1  -name grp_INOUT  -from [list [get_ports jtag_TCK] [get_ports jtag_TMS] [get_ports jtag_TDI]    \
[get_ports serial_tl_bits_in_valid] [get_ports {serial_tl_bits_in_bits[31]}]   \
[get_ports {serial_tl_bits_in_bits[30]}] [get_ports                            \
{serial_tl_bits_in_bits[29]}] [get_ports {serial_tl_bits_in_bits[28]}]         \
[get_ports {serial_tl_bits_in_bits[27]}] [get_ports                            \
{serial_tl_bits_in_bits[26]}] [get_ports {serial_tl_bits_in_bits[25]}]         \
[get_ports {serial_tl_bits_in_bits[24]}] [get_ports                            \
{serial_tl_bits_in_bits[23]}] [get_ports {serial_tl_bits_in_bits[22]}]         \
[get_ports {serial_tl_bits_in_bits[21]}] [get_ports                            \
{serial_tl_bits_in_bits[20]}] [get_ports {serial_tl_bits_in_bits[19]}]         \
[get_ports {serial_tl_bits_in_bits[18]}] [get_ports                            \
{serial_tl_bits_in_bits[17]}] [get_ports {serial_tl_bits_in_bits[16]}]         \
[get_ports {serial_tl_bits_in_bits[15]}] [get_ports                            \
{serial_tl_bits_in_bits[14]}] [get_ports {serial_tl_bits_in_bits[13]}]         \
[get_ports {serial_tl_bits_in_bits[12]}] [get_ports                            \
{serial_tl_bits_in_bits[11]}] [get_ports {serial_tl_bits_in_bits[10]}]         \
[get_ports {serial_tl_bits_in_bits[9]}] [get_ports                             \
{serial_tl_bits_in_bits[8]}] [get_ports {serial_tl_bits_in_bits[7]}]           \
[get_ports {serial_tl_bits_in_bits[6]}] [get_ports                             \
{serial_tl_bits_in_bits[5]}] [get_ports {serial_tl_bits_in_bits[4]}]           \
[get_ports {serial_tl_bits_in_bits[3]}] [get_ports                             \
{serial_tl_bits_in_bits[2]}] [get_ports {serial_tl_bits_in_bits[1]}]           \
[get_ports {serial_tl_bits_in_bits[0]}] [get_ports serial_tl_bits_out_ready]   \
[get_ports custom_boot] [get_ports clock_clock] [get_ports reset] [get_ports   \
axi4_mem_0_bits_aw_ready] [get_ports axi4_mem_0_bits_w_ready] [get_ports       \
axi4_mem_0_bits_b_valid] [get_ports {axi4_mem_0_bits_b_bits_id[3]}] [get_ports \
{axi4_mem_0_bits_b_bits_id[2]}] [get_ports {axi4_mem_0_bits_b_bits_id[1]}]     \
[get_ports {axi4_mem_0_bits_b_bits_id[0]}] [get_ports                          \
{axi4_mem_0_bits_b_bits_resp[1]}] [get_ports {axi4_mem_0_bits_b_bits_resp[0]}] \
[get_ports axi4_mem_0_bits_ar_ready] [get_ports axi4_mem_0_bits_r_valid]       \
[get_ports {axi4_mem_0_bits_r_bits_id[3]}] [get_ports                          \
{axi4_mem_0_bits_r_bits_id[2]}] [get_ports {axi4_mem_0_bits_r_bits_id[1]}]     \
[get_ports {axi4_mem_0_bits_r_bits_id[0]}] [get_ports                          \
{axi4_mem_0_bits_r_bits_data[63]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[62]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[61]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[60]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[59]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[58]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[57]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[56]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[55]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[54]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[53]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[52]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[51]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[50]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[49]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[48]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[47]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[46]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[45]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[44]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[43]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[42]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[41]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[40]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[39]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[38]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[37]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[36]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[35]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[34]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[33]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[32]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[31]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[30]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[29]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[28]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[27]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[26]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[25]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[24]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[23]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[22]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[21]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[20]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[19]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[18]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[17]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[16]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[15]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[14]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[13]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[12]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[11]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[10]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[9]}] [get_ports {axi4_mem_0_bits_r_bits_data[8]}] \
[get_ports {axi4_mem_0_bits_r_bits_data[7]}] [get_ports                        \
{axi4_mem_0_bits_r_bits_data[6]}] [get_ports {axi4_mem_0_bits_r_bits_data[5]}] \
[get_ports {axi4_mem_0_bits_r_bits_data[4]}] [get_ports                        \
{axi4_mem_0_bits_r_bits_data[3]}] [get_ports {axi4_mem_0_bits_r_bits_data[2]}] \
[get_ports {axi4_mem_0_bits_r_bits_data[1]}] [get_ports                        \
{axi4_mem_0_bits_r_bits_data[0]}] [get_ports {axi4_mem_0_bits_r_bits_resp[1]}] \
[get_ports {axi4_mem_0_bits_r_bits_resp[0]}] [get_ports                        \
axi4_mem_0_bits_r_bits_last] [get_ports uart_0_rxd]]  -to [list [get_ports jtag_TDO] [get_ports serial_tl_clock] [get_ports         \
serial_tl_bits_in_ready] [get_ports serial_tl_bits_out_valid] [get_ports       \
{serial_tl_bits_out_bits[31]}] [get_ports {serial_tl_bits_out_bits[30]}]       \
[get_ports {serial_tl_bits_out_bits[29]}] [get_ports                           \
{serial_tl_bits_out_bits[28]}] [get_ports {serial_tl_bits_out_bits[27]}]       \
[get_ports {serial_tl_bits_out_bits[26]}] [get_ports                           \
{serial_tl_bits_out_bits[25]}] [get_ports {serial_tl_bits_out_bits[24]}]       \
[get_ports {serial_tl_bits_out_bits[23]}] [get_ports                           \
{serial_tl_bits_out_bits[22]}] [get_ports {serial_tl_bits_out_bits[21]}]       \
[get_ports {serial_tl_bits_out_bits[20]}] [get_ports                           \
{serial_tl_bits_out_bits[19]}] [get_ports {serial_tl_bits_out_bits[18]}]       \
[get_ports {serial_tl_bits_out_bits[17]}] [get_ports                           \
{serial_tl_bits_out_bits[16]}] [get_ports {serial_tl_bits_out_bits[15]}]       \
[get_ports {serial_tl_bits_out_bits[14]}] [get_ports                           \
{serial_tl_bits_out_bits[13]}] [get_ports {serial_tl_bits_out_bits[12]}]       \
[get_ports {serial_tl_bits_out_bits[11]}] [get_ports                           \
{serial_tl_bits_out_bits[10]}] [get_ports {serial_tl_bits_out_bits[9]}]        \
[get_ports {serial_tl_bits_out_bits[8]}] [get_ports                            \
{serial_tl_bits_out_bits[7]}] [get_ports {serial_tl_bits_out_bits[6]}]         \
[get_ports {serial_tl_bits_out_bits[5]}] [get_ports                            \
{serial_tl_bits_out_bits[4]}] [get_ports {serial_tl_bits_out_bits[3]}]         \
[get_ports {serial_tl_bits_out_bits[2]}] [get_ports                            \
{serial_tl_bits_out_bits[1]}] [get_ports {serial_tl_bits_out_bits[0]}]         \
[get_ports axi4_mem_0_clock] [get_ports axi4_mem_0_reset] [get_ports           \
axi4_mem_0_bits_aw_valid] [get_ports {axi4_mem_0_bits_aw_bits_id[3]}]          \
[get_ports {axi4_mem_0_bits_aw_bits_id[2]}] [get_ports                         \
{axi4_mem_0_bits_aw_bits_id[1]}] [get_ports {axi4_mem_0_bits_aw_bits_id[0]}]   \
[get_ports {axi4_mem_0_bits_aw_bits_addr[31]}] [get_ports                      \
{axi4_mem_0_bits_aw_bits_addr[30]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[29]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[28]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[27]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[26]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[25]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[24]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[23]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[22]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[21]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[20]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[19]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[18]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[17]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[16]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[15]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[14]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[13]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[12]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[11]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[10]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[9]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_addr[8]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_addr[7]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_addr[6]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_addr[5]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_addr[4]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_addr[3]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_addr[2]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_addr[1]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_addr[0]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_len[7]}] [get_ports {axi4_mem_0_bits_aw_bits_len[6]}] \
[get_ports {axi4_mem_0_bits_aw_bits_len[5]}] [get_ports                        \
{axi4_mem_0_bits_aw_bits_len[4]}] [get_ports {axi4_mem_0_bits_aw_bits_len[3]}] \
[get_ports {axi4_mem_0_bits_aw_bits_len[2]}] [get_ports                        \
{axi4_mem_0_bits_aw_bits_len[1]}] [get_ports {axi4_mem_0_bits_aw_bits_len[0]}] \
[get_ports {axi4_mem_0_bits_aw_bits_size[2]}] [get_ports                       \
{axi4_mem_0_bits_aw_bits_size[1]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_size[0]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_burst[1]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_burst[0]}] [get_ports axi4_mem_0_bits_aw_bits_lock]   \
[get_ports {axi4_mem_0_bits_aw_bits_cache[3]}] [get_ports                      \
{axi4_mem_0_bits_aw_bits_cache[2]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_cache[1]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_cache[0]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_prot[2]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_prot[1]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_prot[0]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_qos[3]}] [get_ports {axi4_mem_0_bits_aw_bits_qos[2]}] \
[get_ports {axi4_mem_0_bits_aw_bits_qos[1]}] [get_ports                        \
{axi4_mem_0_bits_aw_bits_qos[0]}] [get_ports axi4_mem_0_bits_w_valid]          \
[get_ports {axi4_mem_0_bits_w_bits_data[63]}] [get_ports                       \
{axi4_mem_0_bits_w_bits_data[62]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[61]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[60]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[59]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[58]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[57]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[56]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[55]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[54]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[53]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[52]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[51]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[50]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[49]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[48]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[47]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[46]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[45]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[44]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[43]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[42]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[41]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[40]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[39]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[38]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[37]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[36]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[35]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[34]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[33]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[32]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[31]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[30]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[29]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[28]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[27]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[26]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[25]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[24]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[23]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[22]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[21]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[20]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[19]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[18]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[17]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[16]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[15]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[14]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[13]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[12]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[11]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[10]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[9]}] [get_ports {axi4_mem_0_bits_w_bits_data[8]}] \
[get_ports {axi4_mem_0_bits_w_bits_data[7]}] [get_ports                        \
{axi4_mem_0_bits_w_bits_data[6]}] [get_ports {axi4_mem_0_bits_w_bits_data[5]}] \
[get_ports {axi4_mem_0_bits_w_bits_data[4]}] [get_ports                        \
{axi4_mem_0_bits_w_bits_data[3]}] [get_ports {axi4_mem_0_bits_w_bits_data[2]}] \
[get_ports {axi4_mem_0_bits_w_bits_data[1]}] [get_ports                        \
{axi4_mem_0_bits_w_bits_data[0]}] [get_ports {axi4_mem_0_bits_w_bits_strb[7]}] \
[get_ports {axi4_mem_0_bits_w_bits_strb[6]}] [get_ports                        \
{axi4_mem_0_bits_w_bits_strb[5]}] [get_ports {axi4_mem_0_bits_w_bits_strb[4]}] \
[get_ports {axi4_mem_0_bits_w_bits_strb[3]}] [get_ports                        \
{axi4_mem_0_bits_w_bits_strb[2]}] [get_ports {axi4_mem_0_bits_w_bits_strb[1]}] \
[get_ports {axi4_mem_0_bits_w_bits_strb[0]}] [get_ports                        \
axi4_mem_0_bits_w_bits_last] [get_ports axi4_mem_0_bits_b_ready] [get_ports    \
axi4_mem_0_bits_ar_valid] [get_ports {axi4_mem_0_bits_ar_bits_id[3]}]          \
[get_ports {axi4_mem_0_bits_ar_bits_id[2]}] [get_ports                         \
{axi4_mem_0_bits_ar_bits_id[1]}] [get_ports {axi4_mem_0_bits_ar_bits_id[0]}]   \
[get_ports {axi4_mem_0_bits_ar_bits_addr[31]}] [get_ports                      \
{axi4_mem_0_bits_ar_bits_addr[30]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[29]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[28]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[27]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[26]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[25]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[24]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[23]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[22]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[21]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[20]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[19]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[18]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[17]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[16]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[15]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[14]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[13]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[12]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[11]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[10]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[9]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_addr[8]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_addr[7]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_addr[6]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_addr[5]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_addr[4]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_addr[3]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_addr[2]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_addr[1]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_addr[0]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_len[7]}] [get_ports {axi4_mem_0_bits_ar_bits_len[6]}] \
[get_ports {axi4_mem_0_bits_ar_bits_len[5]}] [get_ports                        \
{axi4_mem_0_bits_ar_bits_len[4]}] [get_ports {axi4_mem_0_bits_ar_bits_len[3]}] \
[get_ports {axi4_mem_0_bits_ar_bits_len[2]}] [get_ports                        \
{axi4_mem_0_bits_ar_bits_len[1]}] [get_ports {axi4_mem_0_bits_ar_bits_len[0]}] \
[get_ports {axi4_mem_0_bits_ar_bits_size[2]}] [get_ports                       \
{axi4_mem_0_bits_ar_bits_size[1]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_size[0]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_burst[1]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_burst[0]}] [get_ports axi4_mem_0_bits_ar_bits_lock]   \
[get_ports {axi4_mem_0_bits_ar_bits_cache[3]}] [get_ports                      \
{axi4_mem_0_bits_ar_bits_cache[2]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_cache[1]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_cache[0]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_prot[2]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_prot[1]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_prot[0]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_qos[3]}] [get_ports {axi4_mem_0_bits_ar_bits_qos[2]}] \
[get_ports {axi4_mem_0_bits_ar_bits_qos[1]}] [get_ports                        \
{axi4_mem_0_bits_ar_bits_qos[0]}] [get_ports axi4_mem_0_bits_r_ready]          \
[get_ports uart_0_txd]]
group_path -weight 0.1  -name grp_INPUT  -from [list [get_ports jtag_TCK] [get_ports jtag_TMS] [get_ports jtag_TDI]    \
[get_ports serial_tl_bits_in_valid] [get_ports {serial_tl_bits_in_bits[31]}]   \
[get_ports {serial_tl_bits_in_bits[30]}] [get_ports                            \
{serial_tl_bits_in_bits[29]}] [get_ports {serial_tl_bits_in_bits[28]}]         \
[get_ports {serial_tl_bits_in_bits[27]}] [get_ports                            \
{serial_tl_bits_in_bits[26]}] [get_ports {serial_tl_bits_in_bits[25]}]         \
[get_ports {serial_tl_bits_in_bits[24]}] [get_ports                            \
{serial_tl_bits_in_bits[23]}] [get_ports {serial_tl_bits_in_bits[22]}]         \
[get_ports {serial_tl_bits_in_bits[21]}] [get_ports                            \
{serial_tl_bits_in_bits[20]}] [get_ports {serial_tl_bits_in_bits[19]}]         \
[get_ports {serial_tl_bits_in_bits[18]}] [get_ports                            \
{serial_tl_bits_in_bits[17]}] [get_ports {serial_tl_bits_in_bits[16]}]         \
[get_ports {serial_tl_bits_in_bits[15]}] [get_ports                            \
{serial_tl_bits_in_bits[14]}] [get_ports {serial_tl_bits_in_bits[13]}]         \
[get_ports {serial_tl_bits_in_bits[12]}] [get_ports                            \
{serial_tl_bits_in_bits[11]}] [get_ports {serial_tl_bits_in_bits[10]}]         \
[get_ports {serial_tl_bits_in_bits[9]}] [get_ports                             \
{serial_tl_bits_in_bits[8]}] [get_ports {serial_tl_bits_in_bits[7]}]           \
[get_ports {serial_tl_bits_in_bits[6]}] [get_ports                             \
{serial_tl_bits_in_bits[5]}] [get_ports {serial_tl_bits_in_bits[4]}]           \
[get_ports {serial_tl_bits_in_bits[3]}] [get_ports                             \
{serial_tl_bits_in_bits[2]}] [get_ports {serial_tl_bits_in_bits[1]}]           \
[get_ports {serial_tl_bits_in_bits[0]}] [get_ports serial_tl_bits_out_ready]   \
[get_ports custom_boot] [get_ports clock_clock] [get_ports reset] [get_ports   \
axi4_mem_0_bits_aw_ready] [get_ports axi4_mem_0_bits_w_ready] [get_ports       \
axi4_mem_0_bits_b_valid] [get_ports {axi4_mem_0_bits_b_bits_id[3]}] [get_ports \
{axi4_mem_0_bits_b_bits_id[2]}] [get_ports {axi4_mem_0_bits_b_bits_id[1]}]     \
[get_ports {axi4_mem_0_bits_b_bits_id[0]}] [get_ports                          \
{axi4_mem_0_bits_b_bits_resp[1]}] [get_ports {axi4_mem_0_bits_b_bits_resp[0]}] \
[get_ports axi4_mem_0_bits_ar_ready] [get_ports axi4_mem_0_bits_r_valid]       \
[get_ports {axi4_mem_0_bits_r_bits_id[3]}] [get_ports                          \
{axi4_mem_0_bits_r_bits_id[2]}] [get_ports {axi4_mem_0_bits_r_bits_id[1]}]     \
[get_ports {axi4_mem_0_bits_r_bits_id[0]}] [get_ports                          \
{axi4_mem_0_bits_r_bits_data[63]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[62]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[61]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[60]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[59]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[58]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[57]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[56]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[55]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[54]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[53]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[52]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[51]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[50]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[49]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[48]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[47]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[46]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[45]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[44]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[43]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[42]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[41]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[40]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[39]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[38]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[37]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[36]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[35]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[34]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[33]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[32]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[31]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[30]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[29]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[28]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[27]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[26]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[25]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[24]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[23]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[22]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[21]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[20]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[19]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[18]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[17]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[16]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[15]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[14]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[13]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[12]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[11]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[10]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[9]}] [get_ports {axi4_mem_0_bits_r_bits_data[8]}] \
[get_ports {axi4_mem_0_bits_r_bits_data[7]}] [get_ports                        \
{axi4_mem_0_bits_r_bits_data[6]}] [get_ports {axi4_mem_0_bits_r_bits_data[5]}] \
[get_ports {axi4_mem_0_bits_r_bits_data[4]}] [get_ports                        \
{axi4_mem_0_bits_r_bits_data[3]}] [get_ports {axi4_mem_0_bits_r_bits_data[2]}] \
[get_ports {axi4_mem_0_bits_r_bits_data[1]}] [get_ports                        \
{axi4_mem_0_bits_r_bits_data[0]}] [get_ports {axi4_mem_0_bits_r_bits_resp[1]}] \
[get_ports {axi4_mem_0_bits_r_bits_resp[0]}] [get_ports                        \
axi4_mem_0_bits_r_bits_last] [get_ports uart_0_rxd]]
group_path -weight 0.1  -name grp_OUTPUT  -to [list [get_ports jtag_TDO] [get_ports serial_tl_clock] [get_ports         \
serial_tl_bits_in_ready] [get_ports serial_tl_bits_out_valid] [get_ports       \
{serial_tl_bits_out_bits[31]}] [get_ports {serial_tl_bits_out_bits[30]}]       \
[get_ports {serial_tl_bits_out_bits[29]}] [get_ports                           \
{serial_tl_bits_out_bits[28]}] [get_ports {serial_tl_bits_out_bits[27]}]       \
[get_ports {serial_tl_bits_out_bits[26]}] [get_ports                           \
{serial_tl_bits_out_bits[25]}] [get_ports {serial_tl_bits_out_bits[24]}]       \
[get_ports {serial_tl_bits_out_bits[23]}] [get_ports                           \
{serial_tl_bits_out_bits[22]}] [get_ports {serial_tl_bits_out_bits[21]}]       \
[get_ports {serial_tl_bits_out_bits[20]}] [get_ports                           \
{serial_tl_bits_out_bits[19]}] [get_ports {serial_tl_bits_out_bits[18]}]       \
[get_ports {serial_tl_bits_out_bits[17]}] [get_ports                           \
{serial_tl_bits_out_bits[16]}] [get_ports {serial_tl_bits_out_bits[15]}]       \
[get_ports {serial_tl_bits_out_bits[14]}] [get_ports                           \
{serial_tl_bits_out_bits[13]}] [get_ports {serial_tl_bits_out_bits[12]}]       \
[get_ports {serial_tl_bits_out_bits[11]}] [get_ports                           \
{serial_tl_bits_out_bits[10]}] [get_ports {serial_tl_bits_out_bits[9]}]        \
[get_ports {serial_tl_bits_out_bits[8]}] [get_ports                            \
{serial_tl_bits_out_bits[7]}] [get_ports {serial_tl_bits_out_bits[6]}]         \
[get_ports {serial_tl_bits_out_bits[5]}] [get_ports                            \
{serial_tl_bits_out_bits[4]}] [get_ports {serial_tl_bits_out_bits[3]}]         \
[get_ports {serial_tl_bits_out_bits[2]}] [get_ports                            \
{serial_tl_bits_out_bits[1]}] [get_ports {serial_tl_bits_out_bits[0]}]         \
[get_ports axi4_mem_0_clock] [get_ports axi4_mem_0_reset] [get_ports           \
axi4_mem_0_bits_aw_valid] [get_ports {axi4_mem_0_bits_aw_bits_id[3]}]          \
[get_ports {axi4_mem_0_bits_aw_bits_id[2]}] [get_ports                         \
{axi4_mem_0_bits_aw_bits_id[1]}] [get_ports {axi4_mem_0_bits_aw_bits_id[0]}]   \
[get_ports {axi4_mem_0_bits_aw_bits_addr[31]}] [get_ports                      \
{axi4_mem_0_bits_aw_bits_addr[30]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[29]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[28]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[27]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[26]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[25]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[24]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[23]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[22]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[21]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[20]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[19]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[18]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[17]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[16]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[15]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[14]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[13]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[12]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[11]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[10]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[9]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_addr[8]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_addr[7]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_addr[6]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_addr[5]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_addr[4]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_addr[3]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_addr[2]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_addr[1]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_addr[0]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_len[7]}] [get_ports {axi4_mem_0_bits_aw_bits_len[6]}] \
[get_ports {axi4_mem_0_bits_aw_bits_len[5]}] [get_ports                        \
{axi4_mem_0_bits_aw_bits_len[4]}] [get_ports {axi4_mem_0_bits_aw_bits_len[3]}] \
[get_ports {axi4_mem_0_bits_aw_bits_len[2]}] [get_ports                        \
{axi4_mem_0_bits_aw_bits_len[1]}] [get_ports {axi4_mem_0_bits_aw_bits_len[0]}] \
[get_ports {axi4_mem_0_bits_aw_bits_size[2]}] [get_ports                       \
{axi4_mem_0_bits_aw_bits_size[1]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_size[0]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_burst[1]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_burst[0]}] [get_ports axi4_mem_0_bits_aw_bits_lock]   \
[get_ports {axi4_mem_0_bits_aw_bits_cache[3]}] [get_ports                      \
{axi4_mem_0_bits_aw_bits_cache[2]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_cache[1]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_cache[0]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_prot[2]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_prot[1]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_prot[0]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_qos[3]}] [get_ports {axi4_mem_0_bits_aw_bits_qos[2]}] \
[get_ports {axi4_mem_0_bits_aw_bits_qos[1]}] [get_ports                        \
{axi4_mem_0_bits_aw_bits_qos[0]}] [get_ports axi4_mem_0_bits_w_valid]          \
[get_ports {axi4_mem_0_bits_w_bits_data[63]}] [get_ports                       \
{axi4_mem_0_bits_w_bits_data[62]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[61]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[60]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[59]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[58]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[57]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[56]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[55]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[54]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[53]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[52]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[51]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[50]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[49]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[48]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[47]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[46]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[45]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[44]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[43]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[42]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[41]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[40]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[39]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[38]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[37]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[36]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[35]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[34]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[33]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[32]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[31]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[30]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[29]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[28]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[27]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[26]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[25]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[24]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[23]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[22]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[21]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[20]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[19]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[18]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[17]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[16]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[15]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[14]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[13]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[12]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[11]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[10]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[9]}] [get_ports {axi4_mem_0_bits_w_bits_data[8]}] \
[get_ports {axi4_mem_0_bits_w_bits_data[7]}] [get_ports                        \
{axi4_mem_0_bits_w_bits_data[6]}] [get_ports {axi4_mem_0_bits_w_bits_data[5]}] \
[get_ports {axi4_mem_0_bits_w_bits_data[4]}] [get_ports                        \
{axi4_mem_0_bits_w_bits_data[3]}] [get_ports {axi4_mem_0_bits_w_bits_data[2]}] \
[get_ports {axi4_mem_0_bits_w_bits_data[1]}] [get_ports                        \
{axi4_mem_0_bits_w_bits_data[0]}] [get_ports {axi4_mem_0_bits_w_bits_strb[7]}] \
[get_ports {axi4_mem_0_bits_w_bits_strb[6]}] [get_ports                        \
{axi4_mem_0_bits_w_bits_strb[5]}] [get_ports {axi4_mem_0_bits_w_bits_strb[4]}] \
[get_ports {axi4_mem_0_bits_w_bits_strb[3]}] [get_ports                        \
{axi4_mem_0_bits_w_bits_strb[2]}] [get_ports {axi4_mem_0_bits_w_bits_strb[1]}] \
[get_ports {axi4_mem_0_bits_w_bits_strb[0]}] [get_ports                        \
axi4_mem_0_bits_w_bits_last] [get_ports axi4_mem_0_bits_b_ready] [get_ports    \
axi4_mem_0_bits_ar_valid] [get_ports {axi4_mem_0_bits_ar_bits_id[3]}]          \
[get_ports {axi4_mem_0_bits_ar_bits_id[2]}] [get_ports                         \
{axi4_mem_0_bits_ar_bits_id[1]}] [get_ports {axi4_mem_0_bits_ar_bits_id[0]}]   \
[get_ports {axi4_mem_0_bits_ar_bits_addr[31]}] [get_ports                      \
{axi4_mem_0_bits_ar_bits_addr[30]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[29]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[28]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[27]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[26]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[25]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[24]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[23]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[22]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[21]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[20]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[19]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[18]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[17]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[16]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[15]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[14]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[13]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[12]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[11]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[10]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[9]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_addr[8]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_addr[7]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_addr[6]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_addr[5]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_addr[4]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_addr[3]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_addr[2]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_addr[1]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_addr[0]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_len[7]}] [get_ports {axi4_mem_0_bits_ar_bits_len[6]}] \
[get_ports {axi4_mem_0_bits_ar_bits_len[5]}] [get_ports                        \
{axi4_mem_0_bits_ar_bits_len[4]}] [get_ports {axi4_mem_0_bits_ar_bits_len[3]}] \
[get_ports {axi4_mem_0_bits_ar_bits_len[2]}] [get_ports                        \
{axi4_mem_0_bits_ar_bits_len[1]}] [get_ports {axi4_mem_0_bits_ar_bits_len[0]}] \
[get_ports {axi4_mem_0_bits_ar_bits_size[2]}] [get_ports                       \
{axi4_mem_0_bits_ar_bits_size[1]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_size[0]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_burst[1]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_burst[0]}] [get_ports axi4_mem_0_bits_ar_bits_lock]   \
[get_ports {axi4_mem_0_bits_ar_bits_cache[3]}] [get_ports                      \
{axi4_mem_0_bits_ar_bits_cache[2]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_cache[1]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_cache[0]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_prot[2]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_prot[1]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_prot[0]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_qos[3]}] [get_ports {axi4_mem_0_bits_ar_bits_qos[2]}] \
[get_ports {axi4_mem_0_bits_ar_bits_qos[1]}] [get_ports                        \
{axi4_mem_0_bits_ar_bits_qos[0]}] [get_ports axi4_mem_0_bits_r_ready]          \
[get_ports uart_0_txd]]
set_false_path   -from [list [get_ports jtag_TCK] [get_ports jtag_TMS] [get_ports jtag_TDI]    \
[get_ports serial_tl_bits_in_valid] [get_ports {serial_tl_bits_in_bits[31]}]   \
[get_ports {serial_tl_bits_in_bits[30]}] [get_ports                            \
{serial_tl_bits_in_bits[29]}] [get_ports {serial_tl_bits_in_bits[28]}]         \
[get_ports {serial_tl_bits_in_bits[27]}] [get_ports                            \
{serial_tl_bits_in_bits[26]}] [get_ports {serial_tl_bits_in_bits[25]}]         \
[get_ports {serial_tl_bits_in_bits[24]}] [get_ports                            \
{serial_tl_bits_in_bits[23]}] [get_ports {serial_tl_bits_in_bits[22]}]         \
[get_ports {serial_tl_bits_in_bits[21]}] [get_ports                            \
{serial_tl_bits_in_bits[20]}] [get_ports {serial_tl_bits_in_bits[19]}]         \
[get_ports {serial_tl_bits_in_bits[18]}] [get_ports                            \
{serial_tl_bits_in_bits[17]}] [get_ports {serial_tl_bits_in_bits[16]}]         \
[get_ports {serial_tl_bits_in_bits[15]}] [get_ports                            \
{serial_tl_bits_in_bits[14]}] [get_ports {serial_tl_bits_in_bits[13]}]         \
[get_ports {serial_tl_bits_in_bits[12]}] [get_ports                            \
{serial_tl_bits_in_bits[11]}] [get_ports {serial_tl_bits_in_bits[10]}]         \
[get_ports {serial_tl_bits_in_bits[9]}] [get_ports                             \
{serial_tl_bits_in_bits[8]}] [get_ports {serial_tl_bits_in_bits[7]}]           \
[get_ports {serial_tl_bits_in_bits[6]}] [get_ports                             \
{serial_tl_bits_in_bits[5]}] [get_ports {serial_tl_bits_in_bits[4]}]           \
[get_ports {serial_tl_bits_in_bits[3]}] [get_ports                             \
{serial_tl_bits_in_bits[2]}] [get_ports {serial_tl_bits_in_bits[1]}]           \
[get_ports {serial_tl_bits_in_bits[0]}] [get_ports serial_tl_bits_out_ready]   \
[get_ports custom_boot] [get_ports clock_clock] [get_ports reset] [get_ports   \
axi4_mem_0_bits_aw_ready] [get_ports axi4_mem_0_bits_w_ready] [get_ports       \
axi4_mem_0_bits_b_valid] [get_ports {axi4_mem_0_bits_b_bits_id[3]}] [get_ports \
{axi4_mem_0_bits_b_bits_id[2]}] [get_ports {axi4_mem_0_bits_b_bits_id[1]}]     \
[get_ports {axi4_mem_0_bits_b_bits_id[0]}] [get_ports                          \
{axi4_mem_0_bits_b_bits_resp[1]}] [get_ports {axi4_mem_0_bits_b_bits_resp[0]}] \
[get_ports axi4_mem_0_bits_ar_ready] [get_ports axi4_mem_0_bits_r_valid]       \
[get_ports {axi4_mem_0_bits_r_bits_id[3]}] [get_ports                          \
{axi4_mem_0_bits_r_bits_id[2]}] [get_ports {axi4_mem_0_bits_r_bits_id[1]}]     \
[get_ports {axi4_mem_0_bits_r_bits_id[0]}] [get_ports                          \
{axi4_mem_0_bits_r_bits_data[63]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[62]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[61]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[60]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[59]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[58]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[57]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[56]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[55]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[54]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[53]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[52]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[51]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[50]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[49]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[48]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[47]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[46]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[45]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[44]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[43]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[42]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[41]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[40]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[39]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[38]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[37]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[36]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[35]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[34]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[33]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[32]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[31]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[30]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[29]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[28]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[27]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[26]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[25]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[24]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[23]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[22]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[21]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[20]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[19]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[18]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[17]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[16]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[15]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[14]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[13]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[12]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[11]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[10]}] [get_ports                                  \
{axi4_mem_0_bits_r_bits_data[9]}] [get_ports {axi4_mem_0_bits_r_bits_data[8]}] \
[get_ports {axi4_mem_0_bits_r_bits_data[7]}] [get_ports                        \
{axi4_mem_0_bits_r_bits_data[6]}] [get_ports {axi4_mem_0_bits_r_bits_data[5]}] \
[get_ports {axi4_mem_0_bits_r_bits_data[4]}] [get_ports                        \
{axi4_mem_0_bits_r_bits_data[3]}] [get_ports {axi4_mem_0_bits_r_bits_data[2]}] \
[get_ports {axi4_mem_0_bits_r_bits_data[1]}] [get_ports                        \
{axi4_mem_0_bits_r_bits_data[0]}] [get_ports {axi4_mem_0_bits_r_bits_resp[1]}] \
[get_ports {axi4_mem_0_bits_r_bits_resp[0]}] [get_ports                        \
axi4_mem_0_bits_r_bits_last] [get_ports uart_0_rxd]]  -to [list [get_ports jtag_TDO] [get_ports serial_tl_clock] [get_ports         \
serial_tl_bits_in_ready] [get_ports serial_tl_bits_out_valid] [get_ports       \
{serial_tl_bits_out_bits[31]}] [get_ports {serial_tl_bits_out_bits[30]}]       \
[get_ports {serial_tl_bits_out_bits[29]}] [get_ports                           \
{serial_tl_bits_out_bits[28]}] [get_ports {serial_tl_bits_out_bits[27]}]       \
[get_ports {serial_tl_bits_out_bits[26]}] [get_ports                           \
{serial_tl_bits_out_bits[25]}] [get_ports {serial_tl_bits_out_bits[24]}]       \
[get_ports {serial_tl_bits_out_bits[23]}] [get_ports                           \
{serial_tl_bits_out_bits[22]}] [get_ports {serial_tl_bits_out_bits[21]}]       \
[get_ports {serial_tl_bits_out_bits[20]}] [get_ports                           \
{serial_tl_bits_out_bits[19]}] [get_ports {serial_tl_bits_out_bits[18]}]       \
[get_ports {serial_tl_bits_out_bits[17]}] [get_ports                           \
{serial_tl_bits_out_bits[16]}] [get_ports {serial_tl_bits_out_bits[15]}]       \
[get_ports {serial_tl_bits_out_bits[14]}] [get_ports                           \
{serial_tl_bits_out_bits[13]}] [get_ports {serial_tl_bits_out_bits[12]}]       \
[get_ports {serial_tl_bits_out_bits[11]}] [get_ports                           \
{serial_tl_bits_out_bits[10]}] [get_ports {serial_tl_bits_out_bits[9]}]        \
[get_ports {serial_tl_bits_out_bits[8]}] [get_ports                            \
{serial_tl_bits_out_bits[7]}] [get_ports {serial_tl_bits_out_bits[6]}]         \
[get_ports {serial_tl_bits_out_bits[5]}] [get_ports                            \
{serial_tl_bits_out_bits[4]}] [get_ports {serial_tl_bits_out_bits[3]}]         \
[get_ports {serial_tl_bits_out_bits[2]}] [get_ports                            \
{serial_tl_bits_out_bits[1]}] [get_ports {serial_tl_bits_out_bits[0]}]         \
[get_ports axi4_mem_0_clock] [get_ports axi4_mem_0_reset] [get_ports           \
axi4_mem_0_bits_aw_valid] [get_ports {axi4_mem_0_bits_aw_bits_id[3]}]          \
[get_ports {axi4_mem_0_bits_aw_bits_id[2]}] [get_ports                         \
{axi4_mem_0_bits_aw_bits_id[1]}] [get_ports {axi4_mem_0_bits_aw_bits_id[0]}]   \
[get_ports {axi4_mem_0_bits_aw_bits_addr[31]}] [get_ports                      \
{axi4_mem_0_bits_aw_bits_addr[30]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[29]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[28]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[27]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[26]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[25]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[24]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[23]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[22]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[21]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[20]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[19]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[18]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[17]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[16]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[15]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[14]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[13]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[12]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[11]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[10]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_addr[9]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_addr[8]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_addr[7]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_addr[6]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_addr[5]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_addr[4]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_addr[3]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_addr[2]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_addr[1]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_addr[0]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_len[7]}] [get_ports {axi4_mem_0_bits_aw_bits_len[6]}] \
[get_ports {axi4_mem_0_bits_aw_bits_len[5]}] [get_ports                        \
{axi4_mem_0_bits_aw_bits_len[4]}] [get_ports {axi4_mem_0_bits_aw_bits_len[3]}] \
[get_ports {axi4_mem_0_bits_aw_bits_len[2]}] [get_ports                        \
{axi4_mem_0_bits_aw_bits_len[1]}] [get_ports {axi4_mem_0_bits_aw_bits_len[0]}] \
[get_ports {axi4_mem_0_bits_aw_bits_size[2]}] [get_ports                       \
{axi4_mem_0_bits_aw_bits_size[1]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_size[0]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_burst[1]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_burst[0]}] [get_ports axi4_mem_0_bits_aw_bits_lock]   \
[get_ports {axi4_mem_0_bits_aw_bits_cache[3]}] [get_ports                      \
{axi4_mem_0_bits_aw_bits_cache[2]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_cache[1]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_cache[0]}] [get_ports                                 \
{axi4_mem_0_bits_aw_bits_prot[2]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_prot[1]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_prot[0]}] [get_ports                                  \
{axi4_mem_0_bits_aw_bits_qos[3]}] [get_ports {axi4_mem_0_bits_aw_bits_qos[2]}] \
[get_ports {axi4_mem_0_bits_aw_bits_qos[1]}] [get_ports                        \
{axi4_mem_0_bits_aw_bits_qos[0]}] [get_ports axi4_mem_0_bits_w_valid]          \
[get_ports {axi4_mem_0_bits_w_bits_data[63]}] [get_ports                       \
{axi4_mem_0_bits_w_bits_data[62]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[61]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[60]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[59]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[58]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[57]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[56]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[55]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[54]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[53]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[52]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[51]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[50]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[49]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[48]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[47]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[46]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[45]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[44]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[43]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[42]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[41]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[40]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[39]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[38]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[37]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[36]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[35]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[34]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[33]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[32]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[31]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[30]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[29]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[28]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[27]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[26]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[25]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[24]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[23]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[22]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[21]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[20]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[19]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[18]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[17]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[16]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[15]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[14]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[13]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[12]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[11]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[10]}] [get_ports                                  \
{axi4_mem_0_bits_w_bits_data[9]}] [get_ports {axi4_mem_0_bits_w_bits_data[8]}] \
[get_ports {axi4_mem_0_bits_w_bits_data[7]}] [get_ports                        \
{axi4_mem_0_bits_w_bits_data[6]}] [get_ports {axi4_mem_0_bits_w_bits_data[5]}] \
[get_ports {axi4_mem_0_bits_w_bits_data[4]}] [get_ports                        \
{axi4_mem_0_bits_w_bits_data[3]}] [get_ports {axi4_mem_0_bits_w_bits_data[2]}] \
[get_ports {axi4_mem_0_bits_w_bits_data[1]}] [get_ports                        \
{axi4_mem_0_bits_w_bits_data[0]}] [get_ports {axi4_mem_0_bits_w_bits_strb[7]}] \
[get_ports {axi4_mem_0_bits_w_bits_strb[6]}] [get_ports                        \
{axi4_mem_0_bits_w_bits_strb[5]}] [get_ports {axi4_mem_0_bits_w_bits_strb[4]}] \
[get_ports {axi4_mem_0_bits_w_bits_strb[3]}] [get_ports                        \
{axi4_mem_0_bits_w_bits_strb[2]}] [get_ports {axi4_mem_0_bits_w_bits_strb[1]}] \
[get_ports {axi4_mem_0_bits_w_bits_strb[0]}] [get_ports                        \
axi4_mem_0_bits_w_bits_last] [get_ports axi4_mem_0_bits_b_ready] [get_ports    \
axi4_mem_0_bits_ar_valid] [get_ports {axi4_mem_0_bits_ar_bits_id[3]}]          \
[get_ports {axi4_mem_0_bits_ar_bits_id[2]}] [get_ports                         \
{axi4_mem_0_bits_ar_bits_id[1]}] [get_ports {axi4_mem_0_bits_ar_bits_id[0]}]   \
[get_ports {axi4_mem_0_bits_ar_bits_addr[31]}] [get_ports                      \
{axi4_mem_0_bits_ar_bits_addr[30]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[29]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[28]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[27]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[26]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[25]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[24]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[23]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[22]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[21]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[20]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[19]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[18]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[17]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[16]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[15]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[14]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[13]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[12]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[11]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[10]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_addr[9]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_addr[8]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_addr[7]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_addr[6]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_addr[5]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_addr[4]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_addr[3]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_addr[2]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_addr[1]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_addr[0]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_len[7]}] [get_ports {axi4_mem_0_bits_ar_bits_len[6]}] \
[get_ports {axi4_mem_0_bits_ar_bits_len[5]}] [get_ports                        \
{axi4_mem_0_bits_ar_bits_len[4]}] [get_ports {axi4_mem_0_bits_ar_bits_len[3]}] \
[get_ports {axi4_mem_0_bits_ar_bits_len[2]}] [get_ports                        \
{axi4_mem_0_bits_ar_bits_len[1]}] [get_ports {axi4_mem_0_bits_ar_bits_len[0]}] \
[get_ports {axi4_mem_0_bits_ar_bits_size[2]}] [get_ports                       \
{axi4_mem_0_bits_ar_bits_size[1]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_size[0]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_burst[1]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_burst[0]}] [get_ports axi4_mem_0_bits_ar_bits_lock]   \
[get_ports {axi4_mem_0_bits_ar_bits_cache[3]}] [get_ports                      \
{axi4_mem_0_bits_ar_bits_cache[2]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_cache[1]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_cache[0]}] [get_ports                                 \
{axi4_mem_0_bits_ar_bits_prot[2]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_prot[1]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_prot[0]}] [get_ports                                  \
{axi4_mem_0_bits_ar_bits_qos[3]}] [get_ports {axi4_mem_0_bits_ar_bits_qos[2]}] \
[get_ports {axi4_mem_0_bits_ar_bits_qos[1]}] [get_ports                        \
{axi4_mem_0_bits_ar_bits_qos[0]}] [get_ports axi4_mem_0_bits_r_ready]          \
[get_ports uart_0_txd]]
set_input_delay -clock VCLK_MCU  0.6  [get_ports clock_clock]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports clock_clock]
set_input_delay -clock VCLK_MCU  0.6  [get_ports jtag_TCK]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports jtag_TCK]
set_input_delay -clock VCLK_MCU  0.6  [get_ports jtag_TMS]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports jtag_TMS]
set_input_delay -clock VCLK_MCU  0.6  [get_ports jtag_TDI]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports jtag_TDI]
set_input_delay -clock VCLK_MCU  0.6  [get_ports serial_tl_bits_in_valid]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports serial_tl_bits_in_valid]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[31]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[31]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[30]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[30]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[29]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[29]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[28]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[28]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[27]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[27]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[26]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[26]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[25]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[25]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[24]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[24]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[23]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[23]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[22]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[22]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[21]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[21]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[20]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[20]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[19]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[19]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[18]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[18]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[17]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[17]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[16]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[16]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[15]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[15]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[14]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[14]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[13]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[13]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[12]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[12]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[11]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[11]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[10]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[10]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[9]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[9]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[8]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[8]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[7]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[7]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[6]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[6]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[5]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[5]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[4]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[4]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[3]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[3]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[2]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[2]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[1]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[1]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_in_bits[0]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_in_bits[0]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports serial_tl_bits_out_ready]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports serial_tl_bits_out_ready]
set_input_delay -clock VCLK_MCU  0.6  [get_ports custom_boot]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports custom_boot]
set_input_delay -clock VCLK_MCU  0.6  [get_ports axi4_mem_0_bits_aw_ready]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports axi4_mem_0_bits_aw_ready]
set_input_delay -clock VCLK_MCU  0.6  [get_ports axi4_mem_0_bits_w_ready]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports axi4_mem_0_bits_w_ready]
set_input_delay -clock VCLK_MCU  0.6  [get_ports axi4_mem_0_bits_b_valid]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports axi4_mem_0_bits_b_valid]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_b_bits_id[3]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_b_bits_id[3]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_b_bits_id[2]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_b_bits_id[2]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_b_bits_id[1]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_b_bits_id[1]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_b_bits_id[0]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_b_bits_id[0]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_b_bits_resp[1]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_b_bits_resp[1]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_b_bits_resp[0]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_b_bits_resp[0]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports axi4_mem_0_bits_ar_ready]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports axi4_mem_0_bits_ar_ready]
set_input_delay -clock VCLK_MCU  0.6  [get_ports axi4_mem_0_bits_r_valid]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports axi4_mem_0_bits_r_valid]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_id[3]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_id[3]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_id[2]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_id[2]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_id[1]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_id[1]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_id[0]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_id[0]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[63]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[63]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[62]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[62]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[61]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[61]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[60]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[60]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[59]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[59]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[58]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[58]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[57]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[57]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[56]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[56]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[55]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[55]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[54]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[54]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[53]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[53]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[52]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[52]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[51]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[51]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[50]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[50]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[49]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[49]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[48]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[48]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[47]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[47]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[46]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[46]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[45]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[45]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[44]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[44]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[43]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[43]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[42]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[42]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[41]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[41]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[40]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[40]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[39]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[39]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[38]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[38]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[37]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[37]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[36]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[36]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[35]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[35]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[34]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[34]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[33]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[33]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[32]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[32]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[31]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[31]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[30]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[30]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[29]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[29]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[28]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[28]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[27]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[27]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[26]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[26]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[25]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[25]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[24]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[24]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[23]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[23]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[22]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[22]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[21]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[21]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[20]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[20]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[19]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[19]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[18]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[18]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[17]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[17]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[16]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[16]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[15]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[15]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[14]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[14]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[13]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[13]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[12]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[12]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[11]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[11]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[10]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[10]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[9]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[9]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[8]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[8]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[7]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[7]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[6]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[6]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[5]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[5]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[4]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[4]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[3]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[3]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[2]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[2]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[1]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[1]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_data[0]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_data[0]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_resp[1]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_resp[1]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_r_bits_resp[0]}]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_r_bits_resp[0]}]
set_input_delay -clock VCLK_MCU  0.6  [get_ports axi4_mem_0_bits_r_bits_last]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports axi4_mem_0_bits_r_bits_last]
set_input_delay -clock VCLK_MCU  0.6  [get_ports uart_0_rxd]
set_input_delay -clock VCLK_TCK  12  -add_delay  [get_ports uart_0_rxd]
set_output_delay -clock VCLK_MCU  0.6  [get_ports jtag_TDO]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports jtag_TDO]
set_output_delay -clock VCLK_MCU  0.6  [get_ports serial_tl_clock]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports serial_tl_clock]
set_output_delay -clock VCLK_MCU  0.6  [get_ports serial_tl_bits_in_ready]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports serial_tl_bits_in_ready]
set_output_delay -clock VCLK_MCU  0.6  [get_ports serial_tl_bits_out_valid]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports serial_tl_bits_out_valid]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[31]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[31]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[30]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[30]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[29]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[29]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[28]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[28]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[27]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[27]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[26]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[26]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[25]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[25]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[24]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[24]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[23]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[23]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[22]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[22]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[21]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[21]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[20]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[20]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[19]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[19]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[18]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[18]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[17]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[17]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[16]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[16]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[15]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[15]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[14]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[14]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[13]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[13]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[12]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[12]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[11]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[11]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[10]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[10]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[9]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[9]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[8]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[8]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[7]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[7]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[6]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[6]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[5]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[5]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[4]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[4]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[3]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[3]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[2]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[2]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[1]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[1]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {serial_tl_bits_out_bits[0]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {serial_tl_bits_out_bits[0]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports axi4_mem_0_clock]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports axi4_mem_0_clock]
set_output_delay -clock VCLK_MCU  0.6  [get_ports axi4_mem_0_reset]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports axi4_mem_0_reset]
set_output_delay -clock VCLK_MCU  0.6  [get_ports axi4_mem_0_bits_aw_valid]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports axi4_mem_0_bits_aw_valid]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_id[3]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_id[3]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_id[2]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_id[2]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_id[1]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_id[1]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_id[0]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_id[0]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[31]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[31]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[30]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[30]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[29]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[29]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[28]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[28]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[27]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[27]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[26]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[26]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[25]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[25]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[24]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[24]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[23]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[23]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[22]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[22]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[21]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[21]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[20]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[20]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[19]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[19]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[18]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[18]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[17]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[17]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[16]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[16]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[15]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[15]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[14]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[14]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[13]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[13]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[12]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[12]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[11]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[11]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[10]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[10]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[9]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[9]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[8]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[8]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[7]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[7]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[6]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[6]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[5]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[5]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[4]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[4]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[3]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[3]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[2]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[2]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[1]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[1]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_addr[0]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_addr[0]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_len[7]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_len[7]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_len[6]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_len[6]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_len[5]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_len[5]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_len[4]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_len[4]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_len[3]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_len[3]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_len[2]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_len[2]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_len[1]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_len[1]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_len[0]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_len[0]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_size[2]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_size[2]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_size[1]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_size[1]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_size[0]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_size[0]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_burst[1]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_burst[1]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_burst[0]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_burst[0]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports axi4_mem_0_bits_aw_bits_lock]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports axi4_mem_0_bits_aw_bits_lock]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_cache[3]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_cache[3]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_cache[2]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_cache[2]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_cache[1]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_cache[1]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_cache[0]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_cache[0]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_prot[2]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_prot[2]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_prot[1]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_prot[1]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_prot[0]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_prot[0]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_qos[3]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_qos[3]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_qos[2]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_qos[2]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_qos[1]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_qos[1]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_aw_bits_qos[0]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_aw_bits_qos[0]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports axi4_mem_0_bits_w_valid]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports axi4_mem_0_bits_w_valid]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[63]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[63]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[62]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[62]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[61]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[61]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[60]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[60]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[59]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[59]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[58]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[58]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[57]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[57]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[56]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[56]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[55]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[55]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[54]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[54]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[53]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[53]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[52]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[52]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[51]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[51]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[50]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[50]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[49]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[49]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[48]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[48]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[47]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[47]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[46]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[46]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[45]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[45]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[44]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[44]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[43]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[43]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[42]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[42]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[41]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[41]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[40]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[40]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[39]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[39]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[38]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[38]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[37]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[37]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[36]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[36]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[35]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[35]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[34]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[34]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[33]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[33]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[32]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[32]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[31]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[31]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[30]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[30]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[29]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[29]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[28]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[28]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[27]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[27]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[26]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[26]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[25]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[25]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[24]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[24]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[23]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[23]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[22]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[22]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[21]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[21]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[20]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[20]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[19]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[19]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[18]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[18]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[17]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[17]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[16]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[16]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[15]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[15]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[14]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[14]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[13]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[13]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[12]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[12]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[11]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[11]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[10]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[10]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[9]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[9]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[8]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[8]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[7]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[7]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[6]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[6]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[5]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[5]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[4]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[4]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[3]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[3]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[2]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[2]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[1]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[1]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_data[0]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_data[0]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_strb[7]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_strb[7]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_strb[6]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_strb[6]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_strb[5]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_strb[5]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_strb[4]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_strb[4]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_strb[3]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_strb[3]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_strb[2]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_strb[2]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_strb[1]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_strb[1]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_w_bits_strb[0]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_w_bits_strb[0]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports axi4_mem_0_bits_w_bits_last]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports axi4_mem_0_bits_w_bits_last]
set_output_delay -clock VCLK_MCU  0.6  [get_ports axi4_mem_0_bits_b_ready]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports axi4_mem_0_bits_b_ready]
set_output_delay -clock VCLK_MCU  0.6  [get_ports axi4_mem_0_bits_ar_valid]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports axi4_mem_0_bits_ar_valid]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_id[3]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_id[3]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_id[2]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_id[2]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_id[1]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_id[1]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_id[0]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_id[0]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[31]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[31]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[30]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[30]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[29]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[29]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[28]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[28]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[27]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[27]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[26]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[26]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[25]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[25]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[24]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[24]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[23]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[23]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[22]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[22]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[21]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[21]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[20]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[20]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[19]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[19]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[18]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[18]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[17]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[17]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[16]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[16]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[15]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[15]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[14]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[14]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[13]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[13]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[12]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[12]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[11]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[11]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[10]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[10]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[9]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[9]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[8]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[8]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[7]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[7]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[6]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[6]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[5]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[5]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[4]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[4]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[3]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[3]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[2]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[2]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[1]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[1]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_addr[0]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_addr[0]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_len[7]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_len[7]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_len[6]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_len[6]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_len[5]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_len[5]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_len[4]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_len[4]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_len[3]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_len[3]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_len[2]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_len[2]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_len[1]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_len[1]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_len[0]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_len[0]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_size[2]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_size[2]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_size[1]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_size[1]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_size[0]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_size[0]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_burst[1]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_burst[1]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_burst[0]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_burst[0]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports axi4_mem_0_bits_ar_bits_lock]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports axi4_mem_0_bits_ar_bits_lock]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_cache[3]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_cache[3]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_cache[2]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_cache[2]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_cache[1]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_cache[1]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_cache[0]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_cache[0]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_prot[2]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_prot[2]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_prot[1]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_prot[1]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_prot[0]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_prot[0]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_qos[3]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_qos[3]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_qos[2]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_qos[2]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_qos[1]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_qos[1]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports {axi4_mem_0_bits_ar_bits_qos[0]}]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports {axi4_mem_0_bits_ar_bits_qos[0]}]
set_output_delay -clock VCLK_MCU  0.6  [get_ports axi4_mem_0_bits_r_ready]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports axi4_mem_0_bits_r_ready]
set_output_delay -clock VCLK_MCU  0.6  [get_ports uart_0_txd]
set_output_delay -clock VCLK_TCK  12  -add_delay  [get_ports uart_0_txd]
set_clock_groups  -asynchronous -name clk_group  -group [list [get_clocks      \
CLK_MCU] [get_clocks VCLK_MCU]] -group [list [get_clocks CLK_TCK] [get_clocks  \
VCLK_TCK]]
set_input_transition -max 0.5  [get_ports jtag_TCK]
set_input_transition -min 0.5  [get_ports jtag_TCK]
set_input_transition -max 0.5  [get_ports jtag_TMS]
set_input_transition -min 0.5  [get_ports jtag_TMS]
set_input_transition -max 0.5  [get_ports jtag_TDI]
set_input_transition -min 0.5  [get_ports jtag_TDI]
set_input_transition -max 0.5  [get_ports serial_tl_bits_in_valid]
set_input_transition -min 0.5  [get_ports serial_tl_bits_in_valid]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[31]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[31]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[30]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[30]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[29]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[29]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[28]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[28]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[27]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[27]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[26]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[26]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[25]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[25]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[24]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[24]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[23]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[23]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[22]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[22]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[21]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[21]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[20]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[20]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[19]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[19]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[18]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[18]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[17]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[17]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[16]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[16]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[15]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[15]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[14]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[14]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[13]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[13]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[12]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[12]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[11]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[11]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[10]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[10]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[9]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[9]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[8]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[8]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[7]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[7]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[6]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[6]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[5]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[5]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[4]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[4]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[3]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[3]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[2]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[2]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[1]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[1]}]
set_input_transition -max 0.5  [get_ports {serial_tl_bits_in_bits[0]}]
set_input_transition -min 0.5  [get_ports {serial_tl_bits_in_bits[0]}]
set_input_transition -max 0.5  [get_ports serial_tl_bits_out_ready]
set_input_transition -min 0.5  [get_ports serial_tl_bits_out_ready]
set_input_transition -max 0.5  [get_ports custom_boot]
set_input_transition -min 0.5  [get_ports custom_boot]
set_input_transition -max 0.5  [get_ports clock_clock]
set_input_transition -min 0.5  [get_ports clock_clock]
set_input_transition -max 0.5  [get_ports reset]
set_input_transition -min 0.5  [get_ports reset]
set_input_transition -max 0.5  [get_ports axi4_mem_0_bits_aw_ready]
set_input_transition -min 0.5  [get_ports axi4_mem_0_bits_aw_ready]
set_input_transition -max 0.5  [get_ports axi4_mem_0_bits_w_ready]
set_input_transition -min 0.5  [get_ports axi4_mem_0_bits_w_ready]
set_input_transition -max 0.5  [get_ports axi4_mem_0_bits_b_valid]
set_input_transition -min 0.5  [get_ports axi4_mem_0_bits_b_valid]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_b_bits_id[3]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_b_bits_id[3]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_b_bits_id[2]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_b_bits_id[2]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_b_bits_id[1]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_b_bits_id[1]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_b_bits_id[0]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_b_bits_id[0]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_b_bits_resp[1]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_b_bits_resp[1]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_b_bits_resp[0]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_b_bits_resp[0]}]
set_input_transition -max 0.5  [get_ports axi4_mem_0_bits_ar_ready]
set_input_transition -min 0.5  [get_ports axi4_mem_0_bits_ar_ready]
set_input_transition -max 0.5  [get_ports axi4_mem_0_bits_r_valid]
set_input_transition -min 0.5  [get_ports axi4_mem_0_bits_r_valid]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_id[3]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_id[3]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_id[2]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_id[2]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_id[1]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_id[1]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_id[0]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_id[0]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[63]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[63]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[62]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[62]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[61]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[61]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[60]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[60]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[59]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[59]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[58]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[58]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[57]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[57]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[56]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[56]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[55]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[55]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[54]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[54]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[53]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[53]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[52]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[52]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[51]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[51]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[50]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[50]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[49]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[49]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[48]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[48]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[47]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[47]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[46]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[46]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[45]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[45]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[44]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[44]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[43]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[43]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[42]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[42]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[41]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[41]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[40]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[40]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[39]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[39]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[38]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[38]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[37]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[37]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[36]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[36]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[35]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[35]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[34]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[34]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[33]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[33]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[32]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[32]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[31]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[31]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[30]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[30]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[29]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[29]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[28]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[28]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[27]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[27]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[26]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[26]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[25]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[25]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[24]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[24]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[23]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[23]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[22]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[22]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[21]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[21]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[20]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[20]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[19]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[19]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[18]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[18]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[17]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[17]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[16]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[16]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[15]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[15]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[14]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[14]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[13]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[13]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[12]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[12]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[11]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[11]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[10]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[10]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[9]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[9]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[8]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[8]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[7]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[7]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[6]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[6]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[5]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[5]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[4]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[4]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[3]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[3]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[2]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[2]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[1]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[1]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[0]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_data[0]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_resp[1]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_resp[1]}]
set_input_transition -max 0.5  [get_ports {axi4_mem_0_bits_r_bits_resp[0]}]
set_input_transition -min 0.5  [get_ports {axi4_mem_0_bits_r_bits_resp[0]}]
set_input_transition -max 0.5  [get_ports axi4_mem_0_bits_r_bits_last]
set_input_transition -min 0.5  [get_ports axi4_mem_0_bits_r_bits_last]
set_input_transition -max 0.5  [get_ports uart_0_rxd]
set_input_transition -min 0.5  [get_ports uart_0_rxd]
