

module SimSerial (
    input         clock,
    input         reset,
    input         serial_out_valid,
    output        serial_out_ready,
    input  [31:0] serial_out_bits,

    output        serial_in_valid,
    input         serial_in_ready,
    output [31:0] serial_in_bits,

    output        exit
);

   
    reg __in_valid_reg;
    reg __out_ready_reg;
    reg [31:0] __in_bits_reg;
    reg __exit_reg;



endmodule
