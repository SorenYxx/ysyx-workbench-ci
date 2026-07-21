module ysyx_26010027_IFU (
    input             clock,
    input             reset,
    input      [31:0] n_pc,
    output reg [31:0] pc,
    output     [31:0] inst,

    // ----------- AXI-Lite -----------
    input             rom_ifu_arready,
    output     [31:0] ifu_rom_araddr,
    output            ifu_rom_arvalid,

    input             rom_ifu_rvalid,
    output            ifu_rom_rready,
    input      [31:0] rom_ifu_rdata,
    input      [ 1:0] rom_ifu_rresp,

    // --------------------------------

    output reg        ifu_stall,
    input             lsu_stall

);

    reg [1:0] state;
    localparam IDLE = 2'b00;
    localparam WAIT = 2'b01;

    reg [31:0] inst_latch;

    // 握手请求与响应信号
    wire handshake_ifu_req  = ifu_rom_arvalid && rom_ifu_arready;
    wire handshake_ifu_resp = rom_ifu_rvalid && ifu_rom_rready && (rom_ifu_rresp == 2'b00);

    assign ifu_rom_rready = (state == WAIT);

    reg lsu_pending;

    // IFU 状态机
    always @(posedge clock, posedge reset) begin
        if (reset) begin
            state           <= IDLE;
            pc              <= 32'h80000000;
            lsu_pending     <= 1'b0;
        end else begin
            case (state)
                IDLE: begin
                    if (handshake_ifu_req && !lsu_stall) begin
                        pc         <= pc;
                        state      <= WAIT;
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
                    end else if (handshake_ifu_resp) begin
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

    always @(posedge clock, posedge reset) begin
        if (reset) begin
            inst_latch <= 32'h0;
        end else begin
            if (rom_ifu_rvalid && state == WAIT) begin
                inst_latch <= rom_ifu_rdata;
            end else begin
                inst_latch <= inst_latch;
            end
        end
    end

    assign ifu_rom_araddr  = pc;
    assign ifu_rom_arvalid = (state == IDLE);
    assign ifu_stall       = (state == IDLE);
    assign inst            = (rom_ifu_rvalid) ? rom_ifu_rdata : inst_latch;

endmodule
