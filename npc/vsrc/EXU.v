module EXU(pc, alu_op, b_type, alu_arc1, alu_arc2, src1, src2, imm, res);
  input [31:0] pc;
  input [3:0] alu_op;
  input [2:0] b_type;
  input alu_arc1, alu_arc2;
  input [31:0] src1, src2, imm;

  output reg [31:0] res;
  
  wire [31:0] rs1, rs2;
  wire [31:0] a = pc + imm;
  wire [31:0] b = pc + 4;

  reg [31:0] result;
  
  always @(*) begin
    rs1 = alu_arc1 ? pc : src1;
    rs2 = alu_arc2 ? imm : src2;
    
    case(alu_op)
	    4'd0: res = rs1 + rs2;
	    4'd1: begin //sub & inst_B
        result = rs1 - rs2;
        case(b_type)
          3'd0: res = (result != 0) ? a : b ;
          3'd1: res = (result == 0) ? a : b ;
          3'd2: res = ($signed(rs1) < $signed(rs2)) ? a : b ;
          3'd3: res = ($signed(rs1) >= $signed(rs2)) ? a : b ;
          3'd4: res = (result < 0) ? a : b ;
          3'd5: res = (result >= 0) ? a : b ;
          default: res = result;
        endcase
      end
      4'd2: res = imm;
	    4'd3: res = rs1 << rs2[4:0];
	    4'd4: res = rs2 >> rs2[4:0];
      4'd5: res = $signed(rs1) >>> rs2[4:0];
      4'd6: res = $signed(rs1) < $signed(rs2);
      4'd7: res = rs1 < $signed(rs2);
      4'd8: res = rs1 < rs2;
      4'd9: res = rs1 ^ rs2;
      4'd10: res = rs1 & rs2;
      4'd11: res = rs1 | rs2;

      default: res = 0;
    endcase
  end
  
endmodule
