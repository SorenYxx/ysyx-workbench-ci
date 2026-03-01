module EXU(pc, alu_op, b_type, alu_arc1, alu_arc2, src1, src2, imm, csr_result, res);
  input [31:0] pc;
  input [3:0] alu_op;
  input [2:0] b_type;
  input alu_arc1, alu_arc2;
  input [31:0] src1, src2, imm;
  input [31:0] csr_result;

  output reg [31:0] res;
  
  reg [31:0] rs1, rs2;
  reg [31:0] dnpc = pc + 4;

  reg [31:0] result;
  
  always @(*) begin
    rs1 = alu_arc1 ? pc : src1;
    rs2 = alu_arc2 ? imm : src2;
    result = 0;
    
    case(alu_op)
	    4'd0: res = rs1 + rs2;
	    4'd1: begin //sub & inst_B
        result = rs1 - rs2;
        case(b_type)
          3'd0: res = (result != 0) ? pc + imm : dnpc ;
          3'd1: res = (result == 0) ? pc + imm : dnpc ;
          3'd2: res = ($signed(rs1) < $signed(rs2)) ? pc + imm : dnpc ;
          3'd3: res = ($signed(rs1) >= $signed(rs2)) ? pc + imm : dnpc ;
          3'd4: res = (rs1 < rs2) ? pc + imm : dnpc ;
          3'd5: res = ($unsigned(rs1) >= $unsigned(rs2)) ? pc + imm : dnpc ;
          default: res = result;
        endcase
      end
      4'd2: res  = imm;
	    4'd3: res  = rs1 << rs2[4:0];
	    4'd4: res  = rs1 >> rs2[4:0];
      4'd5: res  = $signed(rs1) >>> rs2[4:0];
      4'd6: res  = {31'b0, ($signed(rs1) < $signed(rs2))};
      4'd7: res  = {31'b0, (rs1 < $signed(rs2))};
      4'd8: res  = {31'b0, (rs1 < rs2)};
      4'd9: res  = rs1 ^ rs2;
      4'd10: res = rs1 & rs2;
      4'd11: res = rs1 | rs2;
      4'd12: begin
        res = rs1; // csrrw
        // $display("csr write: csr_addr = 0x%h, csr_wdata = 0x%h", imm[11:0], rs1);
      end
      4'd13: begin
        res = rs1 | csr_result; // csrrs
        // $display("csr read: csr_addr = 0x%h, csr_wdata = 0x%h", csr_result, res);
      end
      4'd14: begin
        // $display("ecall or mret: csr_result = 0x%h", csr_result);
        res = csr_result; // ecall || mret
      end
      default: res = 0;
    endcase
  end
  
endmodule
