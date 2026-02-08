module WBU(pc, rd, rf_res, j_type, alu_result, mem_result, reg_w, waddr, wdata, n_pc);
  input [31:0] pc;
  input [4:0] rd;
  input [1:0] rf_res;
  input j_type;
  input [31:0] alu_result, mem_result;
  input reg_w;
  
  output reg [4:0] waddr = rd;
  output reg [31:0] wdata;
  output reg [31:0] n_pc;
  
  always @(*)
    case(rf_res)
      2'b00: wdata = alu_result;
      2'b01: wdata = mem_result;
      2'b10: wdata = pc + 4;
    endcase

  assign n_pc = j_type ? alu_result : pc + 4;
endmodule
