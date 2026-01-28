import "DPI-C" function void ebreak();

module minirv(
  input clk,
  input rst,
  output [31:0] cur_pc,
  output [31:0] cur_inst
);
  
  wire [31:0] inst;
  reg [31:0] pc, n_pc;
  wire [31:0] imm;
  wire [31:0] rdata1, rdata2;
  wire [31:0] r_result, m_result;
  wire [4:0] rs1, rs2, rd, waddr;
  reg [2:0] op_type;
  wire reg_w, mem_w, mem_r;
  wire [31:0] wdata;
  
  GPR R(clk, waddr, wdata, reg_w, rs1, rs2, rdata1, rdata2);
  
  IFU my_IFU(pc, inst);
  
  IDU my_IDU(inst, imm, rs1, rs2, rd, op_type, reg_w, mem_w, mem_r);
  
  EXU my_EXU(op_type, rdata1, rdata2, imm, r_result);
  
  LSU my_LSU(clk, mem_w, mem_r, op_type, r_result, rdata2, m_result);
  
  WBU my_WBU(pc, rd, op_type, r_result, m_result, reg_w, waddr, wdata, n_pc);
  
  always @(posedge clk ,posedge rst) begin
    if (rst) pc <= 32'h80000000;
    else pc <= n_pc;
    
    if (inst == 32'h00100073) begin
      ebreak();
      $display("ebreak at PC = 0x%h Inst = 0x%h\n", pc, inst);
    end
    
  end
  
  assign cur_pc = pc;
  assign cur_inst = inst;
  
endmodule
  



