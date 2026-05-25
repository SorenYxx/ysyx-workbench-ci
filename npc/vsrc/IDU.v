import "DPI-C" function void is_illegal_inst();

module IDU (
    input  [31:0] inst,

    output reg [31:0] imm,
    output reg [ 4:0] rs1, rs2, rd,
    output            reg_w,
    output     [ 1:0] rf_res,
    output     [ 3:0] alu_op,
    output            csr_we,
    output reg [ 1:0] mem_w,
    output reg [ 2:0] mem_r,
    output            alu_arc1,
    output            alu_arc2,
    output     [ 1:0] j_type,
    output     [ 2:0] b_type,
    output            ebreak_type
);

    wire [6:0] opcode = inst[6:0];
    wire [2:0] funct3 = inst[14:12];
    wire [6:0] funct7 = inst[31:25];

    // Instruction type
    wire inst_I = (opcode == 7'b0010011) || (opcode == 7'b0000011) ||
                  (opcode == 7'b1100111) || (opcode == 7'b1110011);
    wire inst_U = (opcode == 7'b0110111) || (opcode == 7'b0010111);
    wire inst_B = (opcode == 7'b1100011);
    wire inst_S = (opcode == 7'b0100011);
    wire inst_J = (opcode == 7'b1101111);
    wire inst_R = (opcode == 7'b0110011);

    // Sub-type
    wire I_a = (opcode == 7'b0010011);  // arithmetic I-type
    wire I_b = (opcode == 7'b0000011);  // load
    wire I_c = (opcode == 7'b1110011);  // CSR

    // I-type instructions
    wire addi  = I_a && (funct3 == 3'b000);
    wire slti  = I_a && (funct3 == 3'b010);
    wire slli  = I_a && (funct3 == 3'b001);
    wire srli  = I_a && (funct3 == 3'b101) && (funct7 == 7'b0000000);
    wire srai  = I_a && (funct3 == 3'b101) && (funct7 == 7'b0100000);
    wire sltiu = I_a && (funct3 == 3'b011);
    wire xori  = I_a && (funct3 == 3'b100);
    wire ori   = I_a && (funct3 == 3'b110);
    wire andi  = I_a && (funct3 == 3'b111);
    wire lbu   = I_b && (funct3 == 3'b100);
    wire lhu   = I_b && (funct3 == 3'b101);
    wire lw    = I_b && (funct3 == 3'b010);
    wire lh    = I_b && (funct3 == 3'b001);
    wire lb    = I_b && (funct3 == 3'b000);
    wire jalr  = (opcode == 7'b1100111);

    wire i_inst  = addi || slti || slli || srli || srai || sltiu ||
                   xori || ori || andi || lbu || lhu || lw || lh || lb || jalr;
    wire ld_type = lbu || lhu || lw || lh || lb;

    // R-type instructions
    wire add   = inst_R && (funct3 == 3'b000) && (funct7 == 7'b0000000);
    wire sub   = inst_R && (funct3 == 3'b000) && (funct7 == 7'b0100000);
    wire sll   = inst_R && (funct3 == 3'b001);
    wire slt   = inst_R && (funct3 == 3'b010);
    wire sltu  = inst_R && (funct3 == 3'b011);
    wire srl   = inst_R && (funct3 == 3'b101) && (funct7 == 7'b0000000);
    wire sra   = inst_R && (funct3 == 3'b101) && (funct7 == 7'b0100000);
    wire r_xor = inst_R && (funct3 == 3'b100);
    wire r_or  = inst_R && (funct3 == 3'b110);
    wire r_and = inst_R && (funct3 == 3'b111);

    wire r_inst = add || sub || sll || slt || sltu || srl || sra ||
                  r_xor || r_or || r_and;

    // S-type instructions
    wire sw = inst_S && (funct3 == 3'b010);
    wire sb = inst_S && (funct3 == 3'b000);
    wire sh = inst_S && (funct3 == 3'b001);

    wire s_inst = sw || sb || sh;

    // B-type instructions
    wire bne  = inst_B && (funct3 == 3'b001);
    wire beq  = inst_B && (funct3 == 3'b000);
    wire blt  = inst_B && (funct3 == 3'b100);
    wire bge  = inst_B && (funct3 == 3'b101);
    wire bltu = inst_B && (funct3 == 3'b110);
    wire bgeu = inst_B && (funct3 == 3'b111);

    wire b_inst = bne || beq || blt || bge || bltu || bgeu;

    // U-type & J-type
    wire lui   = (opcode == 7'b0110111);
    wire auipc = (opcode == 7'b0010111);
    wire jal   = inst_J;

    // CSR instructions
    wire csrrw    = I_c && (funct3 == 3'b001);
    wire csrrs    = I_c && (funct3 == 3'b010);
    wire csrrc    = I_c && (funct3 == 3'b011);
    wire ecall    = (inst == 32'h00000073);
    wire mret     = (inst == 32'h30200073);
    wire csr_inst = csrrw || csrrs || csrrc || ecall || mret;

    // Illegal instruction detection
    wire illegal = !(i_inst || r_inst || s_inst || b_inst ||
                     lui || auipc || jal || csr_inst || ebreak_type);

    // Control signals
    assign j_type = (jal || jalr) ? 2'b01 :
                    ecall         ? 2'b10 :
                    mret          ? 2'b11 :
                    2'b00;

    assign b_type = bne  ? 3'd0 :
                    beq  ? 3'd1 :
                    blt  ? 3'd2 :
                    bge  ? 3'd3 :
                    bltu ? 3'd4 :
                    bgeu ? 3'd5 :
                    3'd6;

    assign rf_res = ld_type                  ? 2'b01 :  // memory
                    (csrrw || csrrs || csrrc) ? 2'b10 :  // CSR
                    (jal || jalr)             ? 2'b11 :  // PC+4
                    2'b00;                                // ALU

    assign alu_op = (add || addi || ld_type || (j_type == 2'b01)) ? 4'd0  :
                    (sub || inst_B)    ? 4'd1  :
                    lui                ? 4'd2  :
                    (sll || slli)      ? 4'd3  :
                    (srl || srli)      ? 4'd4  :
                    (sra || srai)      ? 4'd5  :
                    (slt || slti)      ? 4'd6  :
                    sltiu              ? 4'd7  :
                    sltu               ? 4'd8  :
                    (r_xor || xori)    ? 4'd9  :
                    (r_and || andi)    ? 4'd10 :
                    (r_or || ori)      ? 4'd11 :
                    csrrw              ? 4'd12 :
                    csrrs              ? 4'd13 :
                    4'd0;

    assign alu_arc1 = (jal || auipc);                        // 0: src1, 1: pc
    assign alu_arc2 = (inst_I || inst_S || auipc || inst_J); // 0: src2, 1: imm

    assign reg_w  = inst_I || inst_R || inst_J || inst_U || csr_we;
    assign csr_we = csrrw || csrrs || csrrc;

    assign mem_w = sw ? 2'b00 :
                   sb ? 2'b01 :
                   sh ? 2'b10 :
                   2'b11;

    assign mem_r = lw  ? 3'd0 :
                   lb  ? 3'd1 :
                   lh  ? 3'd2 :
                   lbu ? 3'd3 :
                   lhu ? 3'd4 :
                   3'd5;

    assign ebreak_type = (inst == 32'h00100073);

    // Immediate generation
    always @(*) begin
        rs1 = inst[19:15];
        rs2 = inst[24:20];
        rd  = inst[11:7];
        imm = 32'b0;

        case (1'b1)
            inst_I: imm = {{20{inst[31]}}, inst[31:20]};
            inst_S: imm = {{20{inst[31]}}, inst[31:25], inst[11:7]};
            inst_B: imm = {{20{inst[31]}}, inst[7], inst[30:25], inst[11:8], 1'b0};
            inst_U: imm = {inst[31:12], 12'b0};
            inst_J: imm = {{11{inst[31]}}, inst[31], inst[19:12], inst[20], inst[30:21], 1'b0};
            default: imm = 32'b0;
        endcase

        if (illegal && (inst != 32'b0)) begin
            is_illegal_inst();
        end
    end

endmodule
