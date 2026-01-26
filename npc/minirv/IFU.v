module IFU(clk, pc, inst);
  import "DPI-C" function int pmem_read(input int raddr);
  input clk;
  input [31:0] pc;
  output [31:0] inst;
  
  always @(posedge clk) begin
    inst <= pmem_read(pc);
  end
endmodule
