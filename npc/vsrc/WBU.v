module WBU(pc, rd, rf_res, j_type, b_type, alu_result, mem_result, csr_result, reg_w, waddr, wdata, n_pc);
  input [31:0] pc;
  input [4:0] rd;
  input [1:0] rf_res;
  input [1:0] j_type;
  input [2:0] b_type;
  input [31:0] alu_result, mem_result, csr_result;
  input reg_w;
  
  output reg [4:0] waddr;
  output reg [31:0] wdata;
  output reg [31:0] n_pc;
  
  always @(*) begin
    if (reg_w) begin
    waddr = rd;
      case(rf_res)
        2'b00: wdata = alu_result;
        2'b01: wdata = mem_result;
        2'b10: wdata = csr_result;
        2'b11: wdata = pc + 4;
        default: wdata = 0;
      endcase

    end
    else begin 
      waddr = 0;
      wdata = 0;
    end
    
  end

  assign n_pc = ((j_type != 2'b00) || (b_type != 3'd6)) ? alu_result : pc + 4;
endmodule
