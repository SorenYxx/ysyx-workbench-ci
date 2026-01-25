module minirv(
  input clk,
  input rst,
);

  reg [31:0] pc, n_pc;
  reg [31:0] imm;
  reg [3:0] rs1, rs2, rd;
  reg [2:0] type;
  reg reg_w, mem_w, mem_r;
  reg [31:0] result, data, out_data;
  reg [31:0] R [15:0];
  
  RegisterFile R(clk, waddr, wdata, reg_w, rs1, rdata1, rs2, rdata2);
  
  IFU my_IFU(clk, pc, inst);
  
  IDU my_IDU(inst, imm, rs1, rs2, rd, reg_w, mem_w, mem_r, type);
  
  EXU my_EXU(type, rdata1, rdata2, imm, r_result);
  
  LSU my_LSU(mem_w, mem_r, rdata2, r_result, m_result);
  
  WBU my_WBU(pc, n_pc, rd, r_result, m_result, type, reg_w, waddr, wdata);
  
  always @(posedge clk and posedge rst) begin
    if (rst) begin
      pc <= 32'h80000000;
      n_pc <= pc + 4;
      imm <= 32'b0;
      rs1 <= 4'b0;
      rs2 <= 4'b0;
      rd <= 4'b0; 
      reg_w <= 0;
      mem_w <= 0;
      mem_r <= 0;
      data <= 32'b0;
      out_data <= 32'b0;
    end
    
  end
endmodule
  



