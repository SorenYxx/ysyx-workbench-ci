module RegisterFile(
  input clk,
  input [31:0] wdata,
  input [3:0] waddr,
  input wen
);
  reg [31:0] rf [15:0];
  always @(posedge clk) begin
    if (wen) rf[waddr] <= wdata;
  end
endmodule

