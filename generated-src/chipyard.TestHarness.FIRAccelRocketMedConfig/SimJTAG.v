// See LICENSE.SiFive for license details.
//VCS coverage exclude_file

module SimJTAG #(
                 parameter TICK_DELAY = 50
                 )(

                   input         clock,
                   input         reset,
                   
                   input         enable,
                   input         init_done,

                   output        jtag_TCK,
                   output        jtag_TMS,
                   output        jtag_TDI,
                   output        jtag_TRSTn,
 
                   input         jtag_TDO_data,
                   input         jtag_TDO_driven,
                          
                   output [31:0] exit
                   );

   reg [31:0]                    tickCounterReg;
   wire [31:0]                   tickCounterNxt;
 

endmodule
