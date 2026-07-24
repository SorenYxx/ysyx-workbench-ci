module ysyx_26010027_IFU (
    input             clock,
    input             reset,
    input      [31:0] n_pc,
    output reg [31:0] pc,
    output     [31:0] inst,

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
    input             cpu_ifu_rlast,
    // --------------------------------

    output reg        ifu_stall,
    input             lsu_stall

);

    reg [1:0] state;
    localparam IDLE = 2'b00;
    localparam WAIT = 2'b01;

    // 握手请求
    wire handshake_ifu_ar = ifu_cpu_arvalid && cpu_ifu_arready;
    wire handshake_ifu_r  = cpu_ifu_rvalid && ifu_cpu_rready && (cpu_ifu_rresp == 2'b00);

    reg lsu_pending;

    // IFU 状态机
    always @(posedge clock, posedge reset) begin
        if (reset) begin
            state       <= IDLE;
            pc          <= 32'h2000_0000;
            lsu_pending <= 1'b0;
        end else begin
            case (state)
                IDLE: begin
                    if (handshake_ifu_ar && !lsu_stall) begin
                        pc    <= pc;
                        state <= WAIT;
                    end else begin
                        pc    <= pc;
                        state <= IDLE;
                    end
                end
                WAIT: begin
                    // 等待响应
                    if (lsu_stall) begin
                        pc    <= pc;
                        state <= WAIT; // 保持在 WAIT 状态，等待 LSU 完成
                        lsu_pending <= 1'b1; // 标记 LSU 正在处理
                    end else if (handshake_ifu_r) begin
                        pc    <= n_pc;
                        state <= IDLE;
                        lsu_pending <= 1'b0; // 清除 LSU 处理标记
                    end else if (lsu_pending && !lsu_stall) begin
                        pc    <= n_pc;
                        state <= IDLE; // LSU 完成后返回 IDLE 状态
                        lsu_pending <= 1'b0; // 清除 LSU 处理标记
                    end else begin
                        pc    <= pc;
                        state <= WAIT; // 保持在 WAIT 状态，等待响应
                    end
                end
                default: begin
                    pc    <= n_pc;
                    state <= IDLE;
                end
            endcase
        end
    end

    // inst 锁存处理
    reg [31:0] inst_latch;
    always @(posedge clock, posedge reset) begin
        if (reset) begin
            inst_latch <= 32'h0;
        end else begin
            // 当总线发来真正有效数据才锁存
            if (cpu_ifu_rvalid) begin
                inst_latch <= cpu_ifu_rdata;
            end else begin
                inst_latch <= inst_latch;
            end
        end
    end

    assign ifu_cpu_araddr  = pc;
    assign ifu_cpu_arvalid = (state == IDLE); // 只有需要取指时才发起请求 避免盲目请求
    assign ifu_cpu_rready  = (state == WAIT);
    assign ifu_cpu_arid    = 4'h0;
    assign ifu_cpu_arlen   = 8'h0;    // 单拍
    assign ifu_cpu_arsize  = 3'b010;  // 4 字节
    assign ifu_cpu_arburst = 2'b01;   // INCR
    assign ifu_stall       = (state == IDLE); // 请求时阻塞 CPU  统一执行周期
    assign inst            = (cpu_ifu_rvalid) ? cpu_ifu_rdata : inst_latch; // 避免仲裁 LSU 时 inst 丢失

endmodule
