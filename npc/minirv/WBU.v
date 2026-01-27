module WBU(pc, rd, op_type, r_result, m_result, reg_w, waddr, wdata, n_pc);
  input [31:0] pc;
  input [4:0] rd;
  input [2:0] op_type;
  input [31:0] r_result, m_result;
  input reg_w;
  
  output reg [4:0] waddr;
  output reg [31:0] wdata;
  output reg [31:0] n_pc;
  
  always @(*) begin
    case(op_type)
    
      //lbu, lw
      3'd5:begin
        waddr = rd;
        wdata = m_result;
        //$display("-----lbu:Addr: %d data: %h\n", waddr, wdata);
      end
      
      3'd6:begin
        waddr = rd;
        wdata = m_result;
        //$display("-----lw:Addr: %d data: %h\n", waddr, wdata);
      end
      
      //jalr
      3'd7:begin
        waddr = rd;
        wdata = (pc - 32'h80000000) + 32'd4;
      end
      
      //add, addi, lui || sw, sb
      default:
        begin
          waddr = reg_w ? rd : 0;
          wdata = reg_w ? r_result : 0;
        end
      
    endcase
  end
  assign n_pc = (op_type == 3'd7) ? (r_result + 32'h80000000): pc + 32'd4;
  
endmodule
