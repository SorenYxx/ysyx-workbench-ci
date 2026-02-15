module WBU(pc, rd, rf_res, r_result, m_result, reg_w, waddr, wdata, n_pc);
  input [31:0] pc;
  input [4:0] rd;
  input [2:0] rf_res;
  input [31:0] r_result, m_result;
  input reg_w;
  
  output reg [4:0] waddr;
  output reg [31:0] wdata;
  output reg [31:0] n_pc;
  
  always @(*)
    case(rf_res)
      2'b00: wdata = ;
      2'b01: wdata = m_result; 
      2'b10: wdata = pc + 4;
    endcase
endmodule
