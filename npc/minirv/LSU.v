module LSU(mem_w,mem_r, wmask, wdata, addr, out_data);
  import "DPI-C" function int pmem_read(input int raddr);
  import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);

  input mem_w, mem_r;
  input [2:0] type;
  input [3:0] wmask;
  input [31:0] addr;
  input [31:0] src2;

  output reg [31:0] out_data;
  
  
  always @(*) begin
    //lbu, lw
    if (mem_r) begin
      case(type)
        6:begin
            out_data = pmem_read(addr);
          end
        
        7:begin
            out_data = pmem_read(addr);
          end
        
        default 
      endcase
      
    end
    
    //sw, sb
    if (mem_w) begin
      case(type)
        4:begin
            pmem_write(addr, src2, 4);
          end
        
        5:begin
            
            peme_write(addr, src2, {4'b0,wmask});
          end
        
        default
      endcase
      
    end
  
    else out_data = data;
    
  end
  
endmodule
