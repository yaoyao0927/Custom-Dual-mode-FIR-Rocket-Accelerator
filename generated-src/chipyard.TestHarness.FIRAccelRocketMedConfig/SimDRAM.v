

module SimDRAM #(
    parameter ADDR_BITS=32, DATA_BITS = 64, ID_BITS = 5,
              MEM_SIZE = 1000 * 1000 * 1000,
              LINE_SIZE = 64,
              WORD_SIZE = DATA_BITS/8,
              CLOCK_HZ = 100000,
              STRB_BITS=DATA_BITS/8)(
  input                  clock,
  input                  reset,
  output                 axi_aw_ready,
  input                  axi_aw_valid,
  input  [ADDR_BITS-1:0] axi_aw_bits_addr,
  input  [7:0]           axi_aw_bits_len,
  input  [2:0]           axi_aw_bits_size,
  input  [1:0]           axi_aw_bits_burst,
  input                  axi_aw_bits_lock,
  input  [3:0]           axi_aw_bits_cache,
  input  [2:0]           axi_aw_bits_prot,
  input  [3:0]           axi_aw_bits_qos,
  input  [ID_BITS-1:0]   axi_aw_bits_id,
  output                 axi_w_ready,
  input                  axi_w_valid,
  input  [DATA_BITS-1:0] axi_w_bits_data,
  input                  axi_w_bits_last,
  input  [STRB_BITS-1:0] axi_w_bits_strb,
  input                  axi_b_ready,
  output                 axi_b_valid,
  output [1:0]           axi_b_bits_resp,
  output [ID_BITS-1:0]   axi_b_bits_id,
  output                 axi_ar_ready,
  input                  axi_ar_valid,
  input  [ADDR_BITS-1:0] axi_ar_bits_addr,
  input  [7:0]           axi_ar_bits_len,
  input  [2:0]           axi_ar_bits_size,
  input  [1:0]           axi_ar_bits_burst,
  input                  axi_ar_bits_lock,
  input  [3:0]           axi_ar_bits_cache,
  input  [2:0]           axi_ar_bits_prot,
  input  [3:0]           axi_ar_bits_qos,
  input  [ID_BITS-1:0]   axi_ar_bits_id,
  input                  axi_r_ready,
  output                 axi_r_valid,
  output [1:0]           axi_r_bits_resp,
  output [DATA_BITS-1:0] axi_r_bits_data,
  output                 axi_r_bits_last,
  output [ID_BITS-1:0]   axi_r_bits_id
);

  reg initialized = 1'b0;

  wire __ar_valid;
  wire [31:0] __ar_addr;
  wire [31:0] __ar_id;
  wire [31:0] __ar_size;
  wire [31:0] __ar_len;

  wire __aw_valid;
  wire [31:0] __aw_addr;
  wire [31:0] __aw_id;
  wire [31:0] __aw_size;
  wire [31:0] __aw_len;

  wire __w_valid;
  wire [31:0] __w_strb;
  wire [63:0] __w_data;
  wire        __w_last;

  wire __r_ready;
  wire __b_ready;


  reg __ar_ready_reg;
  reg __aw_ready_reg;
  reg __w_ready_reg;
  reg __r_valid_reg;
  reg [ID_BITS-1:0] __r_id_reg;
  reg [1:0] __r_resp_reg;
  reg [DATA_BITS-1:0] __r_data_reg;
  reg __r_last_reg;
  reg __b_valid_reg;
  reg [ID_BITS-1:0] __b_id_reg;
  reg [1:0] __b_resp_reg;

 

endmodule
