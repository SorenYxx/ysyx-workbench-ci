import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);
  
module LSU(mem_w,mem_r, wmask, addr, wdata, out_data);
  input mem_w, mem_r;
  input [3:0] wmask;
  input [31:0] addr;
  input [31:0] wdata;

  output reg [31:0] out_data;
  
  //lbu, lw
  assign out_data = mem_r ? pmem_read(addr): 32'b0;
  
  //sw, sb
  always @(*) begin
    if (mem_w) begin
      pmem_write(addr, wdata, {4'b0,wmask});
    end
  end
  
endmodule
