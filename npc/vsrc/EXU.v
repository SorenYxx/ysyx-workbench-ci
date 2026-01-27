module EXU(op_type, src1, src2, imm, result);
  input [2:0] op_type;
  input [31:0] src1, src2, imm;

  output reg [31:0] result;
  
  always @(*) begin
    case(op_type)
      0: result = src1 + imm;
      1: result = src1 + src2;
      2: result = imm;
      3: result = src1 + imm;
      4: result = src1 + imm;
      5: result = src1 + imm;
      6: result = src1 + imm;
      7: result = (src1 + imm) & ~1;
      default: result = 0;
    endcase
  end
  
endmodule
