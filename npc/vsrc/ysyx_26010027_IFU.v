`ifdef TOP_SOC
  `define PC_START 32'h3000_0000
`else
  `define PC_START 32'h8000_0000
`endif

module ysyx_26010027_IFU (
    input             clock,
    input             reset,
    output reg        ifu_idu_valid,
    input             idu_ifu_ready,

    output reg [31:0] ifu_idu_pc,
    output reg [31:0] ifu_idu_inst,

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

);

    // ----- AXI4 -----
    reg [1:0] state;
    localparam IDLE = 2'b00;
    localparam WAIT = 2'b01;

    // AR 事务锁存
    reg        arvalid_q;
    reg [31:0] araddr_q;
    reg        flush_ar_sent; // 冲刷后 AR 已发出

    wire ar_flag      = (state == IDLE) && idu_ifu_ready && !arvalid_q;
    wire handshake_ar = arvalid_q && cpu_ifu_arready;
    wire handshake_r  = cpu_ifu_rvalid && ifu_cpu_rready && (cpu_ifu_rresp == 2'b00);

    // State machine
    always @(posedge clock, posedge reset) begin
        if (reset)
            state <= IDLE;
        else
            case (state)
                IDLE: if (handshake_ar) state <= WAIT;
                WAIT: if (handshake_r) state <= IDLE;
                default: state <= IDLE;
            endcase
    end

    // AR 锁存(避免反压造成毛刺)
    always @(posedge clock, posedge reset) begin
        if (reset) begin
            arvalid_q <= 1'b0;
            araddr_q  <= 32'b0;
        end
        else if (handshake_ar) begin
            arvalid_q <= 1'b0;
        end
        else if (ar_flag) begin
            arvalid_q <= 1'b1;
            araddr_q  <= (ifu_idu_valid && !flush_flag) ? next_pc : ifu_idu_pc;
        end
    end

    assign ifu_cpu_araddr  = araddr_q;
    assign ifu_cpu_arvalid = arvalid_q;
    assign ifu_cpu_rready  = (state == WAIT);
    assign ifu_cpu_arid    = 4'h0;
    assign ifu_cpu_arlen   = 8'h0;
    assign ifu_cpu_arsize  = 3'b010;
    assign ifu_cpu_arburst = 2'b01;
    // ---------------

    wire [31:0] inst = ifu_idu_inst;
    wire [ 6:0] opcode = inst[6:0];
    wire [31:0] imm_B = {{20{inst[31]}}, inst[7], inst[30:25], inst[11:8], 1'b0};
    wire [31:0] imm_J = {{11{inst[31]}}, inst[31], inst[19:12], inst[20], inst[30:21], 1'b0};
    wire branch = (opcode == 7'b1100011);
    wire jump   = (opcode == 7'b1101111 || opcode == 7'b1100111); // ret和jalr一样直接flush

    // 预取下一条指令地址（分支预测：branch/jump 一定跳转）
    wire [31:0] next_pc = branch ? (ifu_idu_pc + imm_B) :
                          jump   ? (ifu_idu_pc + imm_J) :
                                   (ifu_idu_pc + 4);

    always @(posedge clock or posedge reset) begin
        if (reset) begin
            ifu_idu_pc <= `PC_START;
        end 
        else begin
            if (exu_flush) begin
                ifu_idu_pc <= exu_flush_pc;
            end 
            else if (ifu_idu_valid && idu_ifu_ready)
                ifu_idu_pc <= next_pc;
        end
    end

    // 捕获到达数据
    always @(posedge clock, posedge reset) begin
        if (reset)
            ifu_idu_inst <= 32'b0;
        else if (exu_flush)
            ifu_idu_inst <= 32'b0;   // 冲刷时清空
        else if (handshake_r)
            ifu_idu_inst <= cpu_ifu_rdata;
    end

    reg flush_flag;
    always @(posedge clock, posedge reset) begin
        if (reset) begin
            flush_flag    <= 1'b0;
            flush_ar_sent <= 1'b0;
        end 
        else if (exu_flush) begin
            flush_flag    <= 1'b1;
            flush_ar_sent <= 1'b0;
        end 
        else if (ar_flag && flush_flag) begin
            flush_ar_sent <= 1'b1;  // 冲刷后的取指 AR 已发出
        end
        else if (handshake_ar) begin
            if (flush_ar_sent) flush_flag <= 1'b0;  // 冲刷取指完成, 清除
            flush_ar_sent <= 1'b0;
        end
    end

    always @(posedge clock, posedge reset) begin
        if (reset) begin
            ifu_idu_valid <= 1'b0;
        end 
        else if (exu_flush || flush_flag) begin
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
