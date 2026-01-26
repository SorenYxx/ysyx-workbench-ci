import "DPI-C" function void get_reg(input int r);

module GPR #(parameter ADDR_WIDTH = 5,parameter DATA_WIDTH = 32) (
  input  clk,

  input  [ADDR_WIDTH-1:0] waddr,
  input  [DATA_WIDTH-1:0] wdata,
  input  wen,
    
  input  [ADDR_WIDTH-1:0] raddr1,
  input  [ADDR_WIDTH-1:0] raddr2,
  output [DATA_WIDTH-1:0] rdata1,
  output [DATA_WIDTH-1:0] rdata2
);

  reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];

  initial begin
    get_reg(rf[10]);
  end
  
  always @(posedge clk) begin

    if (wen && (waddr != 0)) begin
      rf[waddr] <= wdata;
    end
  end

  assign rdata1 = (raddr1 == 0) ? 0 : rf[raddr1];
  assign rdata2 = (raddr2 == 0) ? 0 : rf[raddr2];

endmodule

