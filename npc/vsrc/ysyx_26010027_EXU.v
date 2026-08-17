module ysyx_26010027_EXU (
    input               clock,
    input               reset,

    // IDU - EXU
    input             idu_exu_valid,
    output reg        exu_idu_ready,
    input      [31:0] idu_exu_pc,
    input      [31:0] idu_exu_inst,

    input      [31:0] idu_exu_imm,
    input      [ 3:0] idu_exu_alu_op,
    input      [ 1:0] idu_exu_mem_w,
    input      [ 2:0] idu_exu_mem_r,
    input             idu_exu_alu_arc1, idu_exu_alu_arc2, // 操作数选择
    input             idu_exu_reg_w,
    input      [ 1:0] idu_exu_rf_res, // reg 的 wdata 选择
    input      [ 4:0] idu_exu_waddr,

    input      [ 1:0] idu_exu_jump,
    input      [ 2:0] idu_exu_branch,

    input      [11:0] idu_exu_csr_waddr,
    input             idu_exu_csr_we,
    input             idu_exu_csr_ecall,
    input             idu_exu_csr_mret,

    // EXU - LSU
    input             lsu_exu_ready,
    output reg        exu_lsu_valid,
    output reg [31:0] exu_lsu_pc,
    output reg [31:0] exu_lsu_inst,

    output reg [ 1:0] exu_lsu_mem_w, 
    output reg [ 2:0] exu_lsu_mem_r,
    output reg [31:0] exu_lsu_mem_addr,
    output reg [31:0] exu_lsu_wdata,
    output reg        exu_lsu_reg_w,
    output reg [ 1:0] exu_lsu_rf_res,
    output reg [ 4:0] exu_lsu_waddr,
    output reg [31:0] exu_lsu_alu_result,

    output reg [11:0] exu_lsu_csr_waddr,
    output reg        exu_lsu_csr_we,
    output reg        exu_lsu_csr_ecall,
    output reg        exu_lsu_csr_mret,
    output reg [31:0] exu_lsu_csr_wdata,

    // flush
    // input      [31:0] ifu_idu_pc,
    output reg        exu_flush,
    output reg [31:0] exu_flush_pc,

    // data forwarding 旁路转发
    input             lsu_wbu_valid,
    input             lsu_load_inflight,
    input             lsu_wbu_reg_w,
    input             lsu_wbu_csr_we,
    input      [ 1:0] lsu_wbu_rf_res,
    input      [ 4:0] idu_wbu_raddr1, idu_wbu_raddr2,
    input      [11:0] idu_wbu_csr_raddr,
    input      [ 4:0] lsu_wbu_waddr,
    input      [11:0] lsu_wbu_csr_waddr,
    input      [31:0] lsu_wbu_pc,
    input      [31:0] lsu_wbu_alu_result, // RAW
    input      [31:0] lsu_wbu_mem_result, // Load-Use
    input      [31:0] lsu_wbu_csr_wdata,
    input      [31:0] wbu_exu_rdata1, wbu_exu_rdata2, wbu_exu_csr_rdata,// Normal
    input      [31:0] exu_mtvec, exu_mepc // ecall/mret

);

    wire [31:0] src1, src2;
    wire [31:0] rdata1, rdata2;
    wire [31:0] mid;
    wire [31:0] pc = idu_exu_pc;
    wire [31:0] imm = idu_exu_imm;
    wire [31:0] snpc = pc + 4;
    wire [31:0] csr_rdata;
    reg  [31:0] result;

    // 前递值
    wire [31:0] lsu_fwd = (exu_lsu_rf_res == 2'b11) ? (exu_lsu_pc + 4) : exu_lsu_alu_result; // 一拍
    wire [31:0] wbu_fwd = (lsu_wbu_rf_res == 2'b11) ? (lsu_wbu_pc + 4) : lsu_wbu_alu_result; // 两拍

    assign rdata1 = raw_1[0]   ? lsu_fwd : 
                    raw_1[1]   ? wbu_fwd : 
                    load_use_1 ? lsu_wbu_mem_result : wbu_exu_rdata1;
    assign rdata2 = raw_2[0]   ? lsu_fwd : 
                    raw_2[1]   ? wbu_fwd : 
                    load_use_2 ? lsu_wbu_mem_result : wbu_exu_rdata2;
    assign csr_rdata = csr_fwd[0] ? exu_lsu_csr_wdata : 
                       csr_fwd[1] ? lsu_wbu_csr_wdata : wbu_exu_csr_rdata;

    assign src1 = idu_exu_alu_arc1 ? pc  : rdata1;
    assign src2 = idu_exu_alu_arc2 ? imm : rdata2;
    assign mid = src1 - src2;

    always @(*) begin
        case (idu_exu_alu_op)
            4'd0: result = src1 + src2;
            4'd1: begin  // sub & branch
                case (idu_exu_branch)
                    3'd0:  result = (mid != 0)                           ? pc + imm : snpc; // bne
                    3'd1:  result = (mid == 0)                           ? pc + imm : snpc; // beq
                    3'd2:  result = ($signed(src1) < $signed(src2))      ? pc + imm : snpc; // blt
                    3'd3:  result = ($signed(src1) >= $signed(src2))     ? pc + imm : snpc; // bge
                    3'd4:  result = (src1 < src2)                        ? pc + imm : snpc; // bltu
                    3'd5:  result = ($unsigned(src1) >= $unsigned(src2)) ? pc + imm : snpc; // bgeu
                    default: result = mid;
                endcase
            end
            4'd2:  result = idu_exu_imm; // lui
            4'd3:  result = src1 << src2[4:0]; // sll/slli
            4'd4:  result = src1 >> src2[4:0]; // srl/srli
            4'd5:  result = $signed(src1) >>> src2[4:0]; // sra/srai
            4'd6:  result = {31'b0, ($signed(src1) < $signed(src2))}; // slt/slti
            4'd7:  result = {31'b0, (src1 < src2)}; // sltiu
            4'd8:  result = {31'b0, (src1 < src2)}; // sltu
            4'd9:  result = src1 ^ src2; // xor/xori
            4'd10: result = src1 & src2; // and/andi
            4'd11: result = src1 | src2; // or/ori
            4'd12: result = src1;       // csrrw
            4'd13: result = src1 | csr_rdata; // csrrs
            default: result = 0;
        endcase
    end

    // data forwarding
    wire [1:0] raw_1; // 1拍与2拍 RAW
    wire [1:0] raw_2;
    wire load_use_1;
    wire load_use_2;
    wire load_use_stall;
    wire [1:0] csr_fwd;

    // raw 前递
    wire lsu_fwd_flag = exu_lsu_valid && exu_lsu_reg_w && (exu_lsu_rf_res == 2'b00 || exu_lsu_rf_res == 2'b11);
    wire wbu_fwd_flag = lsu_wbu_valid && lsu_wbu_reg_w && (lsu_wbu_rf_res == 2'b00 || lsu_wbu_rf_res == 2'b11);
    assign raw_1[0] = (|idu_wbu_raddr1 && idu_wbu_raddr1 == exu_lsu_waddr && lsu_fwd_flag); // 读地址等于邻级写地址且不为0、当前rf_res位选为 ALU or PC+4
    assign raw_2[0] = (|idu_wbu_raddr2 && idu_wbu_raddr2 == exu_lsu_waddr && lsu_fwd_flag);
    assign raw_1[1] = (|idu_wbu_raddr1 && idu_wbu_raddr1 == lsu_wbu_waddr && wbu_fwd_flag);
    assign raw_2[1] = (|idu_wbu_raddr2 && idu_wbu_raddr2 == lsu_wbu_waddr && wbu_fwd_flag);

    // load-use 前递
    assign load_use_1 = (|idu_wbu_raddr1 && idu_wbu_raddr1 == lsu_wbu_waddr && lsu_wbu_reg_w && lsu_wbu_valid && lsu_wbu_rf_res == 2'b01);
    assign load_use_2 = (|idu_wbu_raddr2 && idu_wbu_raddr2 == lsu_wbu_waddr && lsu_wbu_reg_w && lsu_wbu_valid && lsu_wbu_rf_res == 2'b01);

    // 等 load 数据: load 尚未进入 LSU(在 EXU->LSU 寄存器), 或已在 LSU 中访存、数据未回
    assign load_use_stall = (|idu_wbu_raddr1 && exu_lsu_valid && exu_lsu_reg_w && exu_lsu_rf_res == 2'b01 && exu_lsu_waddr == idu_wbu_raddr1)
                         || (|idu_wbu_raddr2 && exu_lsu_valid && exu_lsu_reg_w && exu_lsu_rf_res == 2'b01 && exu_lsu_waddr == idu_wbu_raddr2)
                         || (|idu_wbu_raddr1 && lsu_load_inflight && lsu_wbu_waddr == idu_wbu_raddr1)
                         || (|idu_wbu_raddr2 && lsu_load_inflight && lsu_wbu_waddr == idu_wbu_raddr2);

    assign csr_fwd[0] = (|idu_wbu_csr_raddr && idu_wbu_csr_raddr == exu_lsu_csr_waddr && exu_lsu_valid && exu_lsu_csr_we && exu_lsu_rf_res == 2'b10);
    assign csr_fwd[1] = (|idu_wbu_csr_raddr && idu_wbu_csr_raddr == lsu_wbu_csr_waddr && lsu_wbu_valid && lsu_wbu_csr_we && lsu_wbu_rf_res == 2'b10);

    // flush handle (无条件flush)
    wire [31:0] trap_pc = idu_exu_csr_ecall ? exu_mtvec : exu_mepc;
    wire [31:0] dnpc = (idu_exu_csr_ecall || idu_exu_csr_mret) ? trap_pc :
                       (idu_exu_jump != 2'b0 || idu_exu_branch != 3'd6) ? result : snpc;
    always @(*) begin
        if (reset) begin
            exu_flush    = 1'b0;
            exu_flush_pc = 32'b0;
        end 
        else if (idu_exu_valid && exu_idu_ready) begin
            if ((idu_exu_jump != 2'b0 || idu_exu_branch != 3'd6)) begin
                exu_flush    = 1'b1;
                exu_flush_pc = dnpc;
            end
            else if (idu_exu_csr_ecall || idu_exu_csr_mret) begin
                exu_flush    = 1'b1;
                exu_flush_pc = dnpc;
            end
            else begin
                exu_flush    = 1'b0;
                exu_flush_pc = 32'b0;
            end
        end
        else begin
            exu_flush    = 1'b0;
            exu_flush_pc = 32'b0;
        end
    end

    assign exu_idu_ready = (lsu_exu_ready | !exu_lsu_valid) && !load_use_stall;
    always @(posedge clock, posedge reset) begin
        if (reset) begin
            exu_lsu_valid <= 1'b0;
        end
        else if (idu_exu_valid && exu_idu_ready) begin
            exu_lsu_valid <= 1'b1;
        end
        else if (lsu_exu_ready) begin
            exu_lsu_valid <= 1'b0;
        end
    end

    always @(posedge clock, posedge reset) begin
        if (reset) begin
            exu_lsu_pc       <= 0;
            exu_lsu_inst     <= 0;
            exu_lsu_mem_w    <= 0;
            exu_lsu_mem_r    <= 0;
            exu_lsu_mem_addr <= 0;
            
            exu_lsu_reg_w      <= 0;
            exu_lsu_rf_res     <= 0;
            exu_lsu_waddr      <= 0;
            exu_lsu_alu_result <= 0;

            exu_lsu_csr_waddr  <= 0;
            exu_lsu_csr_we     <= 0;
            exu_lsu_csr_ecall  <= 0;
            exu_lsu_csr_mret   <= 0;
            exu_lsu_csr_wdata  <= 0;

        end
        else if (idu_exu_valid && exu_idu_ready) begin
            exu_lsu_pc       <= idu_exu_pc;
            exu_lsu_inst     <= idu_exu_inst;
            exu_lsu_mem_w    <= idu_exu_mem_w;
            exu_lsu_mem_r    <= idu_exu_mem_r;
            exu_lsu_mem_addr <= result;
            exu_lsu_wdata    <= rdata2;

            exu_lsu_reg_w      <= idu_exu_reg_w;
            exu_lsu_rf_res     <= idu_exu_rf_res;
            exu_lsu_waddr      <= idu_exu_waddr;
            exu_lsu_alu_result <= result;

            exu_lsu_csr_waddr  <= idu_exu_csr_waddr;
            exu_lsu_csr_we     <= idu_exu_csr_we;
            exu_lsu_csr_ecall  <= idu_exu_csr_ecall;
            exu_lsu_csr_mret   <= idu_exu_csr_mret;
            exu_lsu_csr_wdata  <= result;
        end
        else begin
            exu_lsu_pc       <= exu_lsu_pc;
            exu_lsu_inst     <= exu_lsu_inst;
            exu_lsu_mem_w    <= exu_lsu_mem_w;
            exu_lsu_mem_r    <= exu_lsu_mem_r;
            exu_lsu_mem_addr <= exu_lsu_mem_addr;

            exu_lsu_reg_w      <= exu_lsu_reg_w;
            exu_lsu_waddr      <= exu_lsu_waddr;
            exu_lsu_rf_res     <= exu_lsu_rf_res;
            exu_lsu_alu_result <= exu_lsu_alu_result;

            exu_lsu_csr_waddr  <= exu_lsu_csr_waddr;
            exu_lsu_csr_we     <= exu_lsu_csr_we;
            exu_lsu_csr_ecall  <= exu_lsu_csr_ecall;
            exu_lsu_csr_mret   <= exu_lsu_csr_mret;
            exu_lsu_csr_wdata  <= exu_lsu_csr_wdata;
        end
    end

endmodule
