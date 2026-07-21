module ysyx_26010027_EXU (
    input [31:0] pc,
    input [ 3:0] alu_op,
    input [ 2:0] b_type,
    input        alu_arc1, alu_arc2,
    input [31:0] src1, src2, imm,
    input [31:0] csr_result,

    output reg [31:0] res
);

    reg [31:0] rs1, rs2;
    reg [31:0] result;
    wire [31:0] dnpc = pc + 4;

    always @(*) begin
        rs1    = alu_arc1 ? pc : src1;
        rs2    = alu_arc2 ? imm : src2;
        result = 0;

        case (alu_op)
            4'd0:  res = rs1 + rs2;
            4'd1: begin  // sub & branch
                result = rs1 - rs2;
                case (b_type)
                    3'd0:     res = (result != 0)                ? pc + imm : dnpc;
                    3'd1:     res = (result == 0)                ? pc + imm : dnpc;
                    3'd2:     res = ($signed(rs1) < $signed(rs2))  ? pc + imm : dnpc;
                    3'd3:     res = ($signed(rs1) >= $signed(rs2)) ? pc + imm : dnpc;
                    3'd4:     res = (rs1 < rs2)                   ? pc + imm : dnpc;
                    3'd5:     res = ($unsigned(rs1) >= $unsigned(rs2)) ? pc + imm : dnpc;
                    default:  res = result;
                endcase
            end
            4'd2:  res = imm;  // lui
            4'd3:  res = rs1 << rs2[4:0];   // sll/slli
            4'd4:  res = rs1 >> rs2[4:0];   // srl/srli
            4'd5:  res = $signed(rs1) >>> rs2[4:0];  // sra/srai
            4'd6:  res = {31'b0, ($signed(rs1) < $signed(rs2))};   // slt/slti
            4'd7:  res = {31'b0, (rs1 < $signed(rs2))};             // sltiu
            4'd8:  res = {31'b0, (rs1 < rs2)};                      // sltu
            4'd9:  res = rs1 ^ rs2;   // xor/xori
            4'd10: res = rs1 & rs2;   // and/andi
            4'd11: res = rs1 | rs2;   // or/ori
            4'd12: res = rs1;         // csrrw
            4'd13: res = rs1 | csr_result;  // csrrs
            default: res = 0;
        endcase
    end

endmodule
