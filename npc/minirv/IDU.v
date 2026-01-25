module IDU(inst, imm, rs1, rs2, rd, reg_w, mem_w, mem_r, type);
  input reg [31:0] inst;
  
  output reg [31:0] imm;
  output reg [3:0] rs1, rs2, rd;
  output reg [2:0] type;
  output reg reg_w, mem_w, mem_r;
  
  reg [6:0] opcode;
  reg [2:0] funct3;
  
  always @(*) begin
    opcode = inst[6:0];
    funct3 = inst[14:12];
    rs1 = inst[19:15];
    rs2 = inst[24:20];
    rd = inst[11:7];
    imm = 32'b0;
    type = 3'b0;
    reg_w = 1'b0;
    mem_w = 1'b0;
    mem_r = 1'b0;
    
    case({opcode, funct3})
      //addi
      {7'b0010011, 3'b000}: begin
        imm = {{20{inst[31]}}, inst[31:20]};
        reg_w = 1'b1;
        type = 3'd1;
      end
      
      //add
      {7'b0110011, 3'b000}: begin
        reg_w = 1'b1;
        type = 3'd2;
      end
      
      //lui
      {7'b0110111, 3'bxxx}: begin
        imm = {inst[31:12], 12'b0};
        reg_w = 1'b1;
        type = 3'd3;
      end
      
      //sw, sb
      {7'b0100011, 3'bxxx}: begin
        imm = {{20{inst[31]}}, {instr[31:25], inst[11:7]}};
        mem_w = 1'b1;
        type = (funct3 == 3'010)? 3'd4: 3'd5;
      end
      
      //lbu, lw
      {7'b0000011, 3'bxxx}: begin
        imm = imm = {{20{inst[31]}}, inst[31:20]};
        reg_w = 1'b1;
        mem_r = 1'b1;
        type = (funct3 == 3'100)? 3'd6: 3'd7;
      end
      
      //jalr
      {7'b1100111, 3'b000}: begin
        imm = {{20{inst[31]}}, inst[31:20]};
        reg_w = 1'b1;
        type = 3'd8;
      end
      
      default imm = 32'b0;
    endcase
  end
  
endmodule
