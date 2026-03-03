import "DPI-C" function void ebreak();
import "DPI-C" function void ftrace_print(int pc, int target, int rd, int rs1);

module minirv(
  input clk,
  input rst,
  output [31:0] cur_pc,
  output [31:0] cur_inst
);
  
  wire [31:0] inst;
  wire [31:0] imm;
  wire [31:0] rdata1, rdata2;
  wire [31:0] alu_result, mem_result, csr_result;
  wire [31:0] out_mepc, out_mtvec;
  wire [4:0] rs1, rs2, rd, waddr;
  wire [1:0] rf_res;
  wire [3:0] alu_op;
  wire [1:0] mem_w;
  wire [2:0] mem_r;
  wire csr_we;
  wire reg_w;
  wire alu_arc1, alu_arc2;
  wire [1:0] j_type;
  wire [2:0] b_type;
  wire [31:0] wdata;
  wire ebreak_type;

  reg [31:0] pc, n_pc;
  
  GPR R(clk, waddr, wdata, reg_w, rs1, rs2, rdata1, rdata2);
  
  IFU my_IFU(pc, inst);
  
  IDU my_IDU(inst, imm, rs1, rs2, rd, reg_w, mem_w, mem_r, rf_res, alu_op, csr_we, alu_arc1, alu_arc2, j_type, b_type, ebreak_type);
  
  EXU my_EXU(pc, alu_op, b_type, alu_arc1, alu_arc2, rdata1, rdata2, imm, csr_result, alu_result);
  
  LSU my_LSU(clk, mem_w, mem_r, alu_result, rdata2, mem_result);
  
  WBU my_WBU(pc, rd, rf_res, j_type, b_type, alu_result, mem_result, csr_result, out_mepc, out_mtvec, reg_w, waddr, wdata, n_pc);
  
  CSR my_CSR(clk, rst, j_type, imm[11:0], alu_result, csr_result, pc, csr_we, out_mepc, out_mtvec);

  always @(posedge clk ,posedge rst) begin
    // rst
    if (rst) pc <= 32'h80000000;
    else pc <= n_pc;
    
    // ftrace
    if (j_type == 2'b01) begin
      ftrace_print(pc, n_pc, {27'b0, rd}, {27'b0, rs1});
    end

    // ebreak
    if (ebreak_type) begin
      ebreak();
      $display("ebreak at PC = 0x%h Inst = 0x%h", pc, inst);
    end
  end
  
  assign cur_pc = pc;
  assign cur_inst = inst;
  
endmodule
  



