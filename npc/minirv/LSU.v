import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);
  
module LSU(mem_w,mem_r, op_type, addr, wdata, out_data);
  input mem_w, mem_r;
  input [2:0] op_type;
  input [31:0] addr;
  input [31:0] wdata;
  
  output reg [31:0] out_data;
  
  reg [3:0] wmask;
  //lbu, lw
   
  
  //sw, sb
  always @(*) begin
    if (mem_w || mem_r) begin  
      case(op_type)
        3: wmask = 4'b1111;
        4: wmask = 4'b0001 << addr[1:0];
        5: out_data = pmem_read(addr + 32'h80000000) & (32'hFF << addr[1:0] * 8);
        6: out_data = pmem_read(addr + 32'h80000000);
        default: wmask = 0;
      endcase
      
      pmem_write((addr + 32'h80000000), wdata, {4'b0,wmask});
      //$display("-----sw,sb:Addr: %h data: %h\n", (addr + 32'h80000000), wdata);
    end
  end
  
endmodule
