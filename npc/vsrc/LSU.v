import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);
  
module LSU(clk, mem_w,mem_r, op_type, addr, wdata, out_data);
  input clk;
  input mem_w, mem_r;
  input [2:0] op_type;
  input [31:0] addr;
  input [31:0] wdata;
  
  output reg [31:0] out_data;

  wire [31:0] awdata = (op_type == 3'd4) ? (wdata << (addr[1:0] * 8)) : wdata;
  wire [31:0] full_addr = (addr);
  
  always @(*) begin
    out_data = 32'b0;
    if (mem_r) begin
      case(op_type)
        3'd5: // lbu
          out_data = (pmem_read(full_addr) >> (addr[1:0] * 8)) & 32'hFF;
        3'd6: // lw
          out_data = pmem_read(full_addr);
        default: out_data = 32'b0;
      endcase
    end
  end
      
  always @(posedge clk) begin
    if (mem_w) begin
      case(op_type)
        3'd3: pmem_write(full_addr, awdata, 8'h0F); // sw
        3'd4: pmem_write(full_addr, awdata, (8'h01 << addr[1:0])); // sb
        default: ;
      endcase
    end
  end
      //$display("-----sw,sb:Addr: %h data: %h\n", (addr + 32'h80000000), wdata);
  
endmodule
