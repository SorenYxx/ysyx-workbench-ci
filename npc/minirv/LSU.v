module LSU(mem_w,mem_r, wmask, wdata, addr, out_data);
  import "DPI-C" function int pmem_read(input int raddr);
  import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);

  input mem_w, mem_r;
  input [2:0] type;
  input [3:0] wmask;
  input [31:0] addr;
  input [31:0] src2;

  output reg [31:0] out_data;
  
  //lbu, lw
  assign out_data = mem_r ? pmem_read(addr): 32'b0;
  
  //sw, sb
  always @(*) begin
    if (mem_w) begin
      peme_write(addr, src2, {4'b0,wmask});
    end
  end
  
endmodule
