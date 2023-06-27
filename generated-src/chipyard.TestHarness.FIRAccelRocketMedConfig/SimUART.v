



module SimUART #(UARTNO) (
    input              clock,
    input              reset,

    input                    serial_out_valid,
    output                   serial_out_ready,
    input  [8-1:0] serial_out_bits,

    output                   serial_in_valid,
    input                    serial_in_ready,
    output [8-1:0] serial_in_bits
);

endmodule
