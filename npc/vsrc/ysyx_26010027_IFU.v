`ifdef TOP_SOC
  `define PC_START 32'h3000_0000;
`else
  `define PC_START 32'h8000_0000;
`endif

module ysyx_26010027_IFU (
    input             clock,
    input             reset,
    output reg        ifu_idu_valid,
    input             idu_ifu_ready,

    output reg [31:0] ifu_idu_pc,
    output     [31:0] ifu_idu_inst,

    input             exu_flush,
    input      [31:0] exu_flush_pc,

    // ----------- AXI4 -----------
    input             cpu_ifu_arready,
    output     [31:0] ifu_cpu_araddr,
    output            ifu_cpu_arvalid,
    output     [ 3:0] ifu_cpu_arid,
    output     [ 7:0] ifu_cpu_arlen,
    output     [ 2:0] ifu_cpu_arsize,
    output     [ 1:0] ifu_cpu_arburst,

    input             cpu_ifu_rvalid,
    output            ifu_cpu_rready,
    input      [31:0] cpu_ifu_rdata,
    input      [ 1:0] cpu_ifu_rresp,
    input      [ 3:0] cpu_ifu_rid,
    input             cpu_ifu_rlast
    // --------------------------------

    // output            ifu_stall,
    // input             lsu_stall

);

    // ----- AXI4 -----
    reg [1:0] state;
    localparam IDLE = 2'b00;
    localparam WAIT = 2'b01;

    wire handshake_ar = ifu_cpu_arvalid && cpu_ifu_arready;
    wire handshake_r  = cpu_ifu_rvalid && ifu_cpu_rready && (cpu_ifu_rresp == 2'b00);

    always @(posedge clock, posedge reset) begin
        if (reset)
            state <= IDLE;
        else
            case (state)
                IDLE: begin
                    if (handshake_ar) begin
                        state <= WAIT;
                    end
                end
                WAIT: begin
                    if (handshake_r) begin
                        state <= IDLE;
                    end
                end
                default: state <= IDLE;
            endcase
    end

    // inst 锁存
    reg [31:0] inst_latch;
    always @(posedge clock, posedge reset) begin
        if (reset)
            inst_latch <= 32'h0;
        else if (handshake_r)
            inst_latch <= cpu_ifu_rdata;
    end

    // 交付当拍（valid && ready）同时预取下一条，故取指地址用 next_pc
    assign ifu_cpu_araddr  = (ifu_idu_valid && idu_ifu_ready) ? next_pc : ifu_idu_pc;
    assign ifu_cpu_arvalid = (state == IDLE) && idu_ifu_ready;
    assign ifu_cpu_rready  = (state == WAIT) && idu_ifu_ready; // 反压防止 IDU 没准备好丢失数据
    assign ifu_cpu_arid    = 4'h0;
    assign ifu_cpu_arlen   = 8'h0;
    assign ifu_cpu_arsize  = 3'b010;
    assign ifu_cpu_arburst = 2'b01;
    assign ifu_idu_inst    = cpu_ifu_rvalid ? cpu_ifu_rdata : inst_latch;
    // ---------------

    wire [ 6:0] opcode = ifu_idu_inst[6:0];
    wire [31:0] imm_B = {{20{ifu_idu_inst[31]}}, ifu_idu_inst[7], ifu_idu_inst[30:25], ifu_idu_inst[11:8], 1'b0};
    wire [31:0] imm_J = {{11{ifu_idu_inst[31]}}, ifu_idu_inst[31], ifu_idu_inst[19:12], ifu_idu_inst[20], ifu_idu_inst[30:21], 1'b0};
    wire branch = (opcode == 7'b1100011);
    wire jump   = (opcode == 7'b1101111 || opcode == 7'b1100111); // ret和jalr一样直接flush

    // 预取下一条指令地址（分支预测：branch/jump 一定跳转）
    wire [31:0] next_pc = exu_flush ? exu_flush_pc :
                          branch ? (ifu_idu_pc + imm_B) :
                          jump   ? (ifu_idu_pc + imm_J) :
                                   (ifu_idu_pc + 4);

    always @(posedge clock or posedge reset) begin
        if (reset) begin
            ifu_idu_pc <= `PC_START;
        end 
        else begin
            if (ifu_idu_valid && idu_ifu_ready)
                ifu_idu_pc <= next_pc;
        end 
        // else if (exu_flush) begin
        //     ifu_idu_pc <= exu_flush_pc;
        // end 
        // else if (ifu_idu_valid && idu_ifu_ready) begin
        //     if (branch)
        //         ifu_idu_pc <= ifu_idu_pc + imm_B; // 一定跳转
        //     else if (jump)
        //         ifu_idu_pc <= ifu_idu_pc + imm_J; // jal
        //     else
        //         ifu_idu_pc <= ifu_idu_pc + 4;
        // end 
        // else begin
        //     ifu_idu_pc <= ifu_idu_pc;
        // end

    end

    always @(posedge clock, posedge reset) begin
        if (reset) begin
            ifu_idu_valid <= 1'b0;
        end 
        else if (exu_flush) begin
            ifu_idu_valid <= 1'b0;
        end 
        else if (ifu_idu_valid && idu_ifu_ready) begin
            ifu_idu_valid <= 1'b0;  // 交付给 IDU
        end 
        else if (handshake_r) begin
            ifu_idu_valid <= 1'b1;  // 取到指令
        end
    end

endmodule
