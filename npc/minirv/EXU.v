module EXU(type, src1, src2, imm, result);
  input [2:0] type;
  input reg [31:0] src1, src2, imm;

  output reg [31:0] result;
  
  always @(*) begin
    case(type)
      1: result = src1 + imm;
      2: result = src1 + src2;
      3: result = imm;
      4: result = src1 + imm;
      5: result = src1 + imm;
      6: result = src1 + imm;
      7: result = src1 + imm;
      8: result = (src1 + imm) & ~1;
      default: result = 0;
    endcase
  end
  
endmodule
