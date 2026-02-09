import "DPI-C" function void is_illegal_inst();

module IDU(inst, imm, rs1, rs2, rd, reg_w, mem_w, mem_r, rf_res, alu_op, alu_arc1, alu_arc2, j_type, b_type, ebreak_type);
  input [31:0] inst;
  
  output reg [31:0] imm;
  output reg [4:0] rs1, rs2, rd;
  output reg reg_w;
  output [1:0] rf_res;
  output [3:0] alu_op;
  output reg [1:0] mem_w;
  output reg [2:0] mem_r;  
  output alu_arc1;
  output alu_arc2;
  output j_type;
  output [2:0] b_type;
  output ebreak_type;
  
  reg [6:0] opcode = inst[6:0];
  reg [2:0] funct3 = inst[14:12];
  reg [6:0] funct7 = inst[31:25];
  
  //type of inst
  wire inst_I = (opcode == 7'b0010011) || (opcode == 7'b0000011) || (opcode == 7'b1100111);
  wire inst_U = (opcode == 7'b0110111) || (opcode == 7'b0010111);
  wire inst_B = (opcode == 7'b1100011);
  wire inst_S = (opcode == 7'b0100011);
  wire inst_J = (opcode == 7'b0100011);
  wire inst_R = (opcode == 7'b1110011);
  
  //more
  wire I_a = (opcode == 7'b0010011); //addi..
  wire I_b = (opcode == 7'b0000011); //l..
  
  //all of inst
  wire addi = I_a && (funct3 == 3'b000);
  wire slti = I_a && (funct3 == 3'b010);
  wire slli = I_a && (funct3 == 3'b000);
  wire srli = I_a && (funct3 == 3'b010);
  wire srai = I_a && (funct3 == 3'b000);
  wire sltiu = I_a && (funct3 == 3'b010);
  wire xori = I_a && (funct3 == 3'b000);
  wire  ori = I_a && (funct3 == 3'b010);
  wire andi = I_a && (funct3 == 3'b000);
  wire  lbu = I_b && (funct3 == 3'b100);
  wire  lhu = I_b && (funct3 == 3'b101);
  wire   lw = I_b && (funct3 == 3'b010);
  wire   lh = I_b && (funct3 == 3'b001);
  wire   lb = I_b && (funct3 == 3'b000);
  wire jalr = (opcode == 7'b1100111);
  wire ld_type = lbu || lhu || lw || lh || lb;
  
  wire add = inst_R && (funct3 == 3'b000) && (funct7 == 7'b0000000);
  wire sub = inst_R && (funct3 == 3'b000) && (funct7 == 7'b0100000);
  wire sll = inst_R && (funct3 == 3'b001);
  wire slt = inst_R && (funct3 == 3'b010);
  wire sltu = inst_R && (funct3 == 3'b011);
  wire srl = inst_R && (funct3 == 3'b101) && (funct7 == 7'b0000000);
  wire sra = inst_R && (funct3 == 3'b101) && (funct7 == 7'b0100000);
  wire r_xor = inst_R && (funct3 == 3'b100);
  wire r_or = inst_R && (funct3 == 3'b110);
  wire r_and = inst_R && (funct3 == 3'b111);
  
  wire sw = inst_S && (funct3 == 3'b010);
  wire sb = inst_S && (funct3 == 3'b000);
  wire sh = inst_S && (funct3 == 3'b001);
  
  wire lui = (opcode == 7'b0110111);
  wire auipc = (opcode == 7'b0010111);
  
  wire bne = inst_B && (funct3 == 3'b001);
  wire beq = inst_B && (funct3 == 3'b000);
  wire blt = inst_B && (funct3 == 3'b100);
  wire bge = inst_B && (funct3 == 3'b101);
  wire bltu = inst_B && (funct3 == 3'b110);
  wire bgeu = inst_B && (funct3 == 3'b111);
  
  wire jal = inst_J;

  // wire illegal = ;


  assign j_type = jal || jalr;
  assign b_type = bne ? 3'd0 :
  		  beq ? 3'd1 :
  		  blt ? 3'd2 :
  		  bge ? 3'd3 :
  		  bltu ? 3'd4 :
  		  bgeu ? 3'd5 :
  		  3'd6;

  assign rf_res = ld_type ? 2'b01 : //mem
  		  (jal || jalr) ? 2'b10 : 2'b00; //pc + 4; ALU
  assign alu_op = (add || addi || ld_type || j_type) ? 4'd0 : 
  		  (sub || inst_B) ? 4'd1:
  		  (lui) ? 4'd2 :
  		  (sll || slli) ? 4'd3 :
  		  (srl || srli) ? 4'd4 :
  		  (sra || srai) ? 4'd5 :
  		  (slt || slti) ? 4'd6 :
  		  (sltiu) ? 4'd7 :
  		  (sltu) ? 4'd8 :
        (r_xor || xori) ? 4'd9 :
        (r_and || andi) ? 4'd10 :
        (r_or || ori) ? 4'd11 :
        4'd0;

  assign alu_arc1 = (jal);//0: src1; 1: pc
  assign alu_arc2 = (inst_I || inst_S || inst_B || auipc || inst_J); //0: src2; 1: imm

  assign mem_w = (sw) ? 2'b00 :
         (sb) ? 2'b01 :
         (sh) ? 2'b10 :
         2'b11;
  assign mem_r = (lw) ? 3'd0 :
         (lb) ? 3'd1 :
         (lh) ? 3'd2 :
         (lbu) ? 3'd3 :
         (lhu) ? 3'd4 :
         3'd5;

  assign ebreak_type = (opcode == 7'b1110011);


  
  always @(*) begin
    rs1 = inst[19:15];
    rs2 = inst[24:20];
    rd = inst[11:7];
    imm = 32'b0;
    reg_w = inst_I || inst_R || inst_J || inst_U;
    mem_w = 2'b11;
    mem_r = 3'd5;
    
    case(1'b1)
      inst_I: imm = {{20{inst[31]}}, inst[31:20]};
      inst_S: imm = {{20{inst[31]}}, inst[31:25], inst[11:7]}; 
      inst_B: imm = {{19{inst[31]}}, inst[31], inst[7], inst[30:25], inst[11:8], 1'b0}; 
      inst_U: imm = {inst[31:12], 12'b0};
      inst_J: imm = {{11{inst[31]}}, inst[31], inst[19:12], inst[20], inst[30:21], 1'b0};
      default: imm = 32'b0;
    endcase
  end
  
endmodule
