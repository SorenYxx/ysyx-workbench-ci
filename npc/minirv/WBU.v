module WBU(pc, n_pc, rd, r_result, m_result, type, reg_w, waddr, wdata);
  input [31:0] pc;
  input [3:0] rd;
  input [2:0] type;
  input [31:0] r_result, m_result;
  input reg_w;
  
  output [3:0] waddr;
  output reg [31:0] n_pc;
  
  always @(*) begin
    case(type)
      3'd4:begin
        waddr = r_result;
        wdata = m_result;
      end
      
      3'd5:begin
        waddr = r_result;
        wdata = m_result;
      end
      
      3'd8:begin
        wdata = pc + 32'd4;
        n_pc = r_result;
      end
      
      default:
        begin
          waddr = reg_w ? rd : 0;
          wdata = reg_w ? r_result : 0;
        end
      
    endcase
    
  end
  
endmodule
