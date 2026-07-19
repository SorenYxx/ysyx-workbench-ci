module IFU (
    input      [31:0] rom_ifu_rdata,
    output     [31:0] ifu_rom_raddr,
    input             rom_ifu_respValid,
    output     reg    ifu_rom_reqValid,
    input             rom_ifu_reqReady,
    output            ifu_rom_respReady,

    input             clk,
    input             rst,

    input      [31:0] n_pc,
    output reg [31:0] pc,
    output     [31:0] inst,
    output reg        ifu_stall,

    input             lsu_stall

);

    reg [1:0] state;
    localparam IDLE = 2'b00;
    localparam WAIT = 2'b01;

    // 握手请求与响应信号
    wire handshake_ifu_req  = ifu_rom_reqValid && rom_ifu_reqReady;
    wire handshake_ifu_resp = rom_ifu_respValid && ifu_rom_respReady;

    assign ifu_rom_respReady = (state == WAIT) && !lsu_stall;

    // IFU 状态机
    always @(posedge clk, posedge rst) begin
        if (rst) begin
            ifu_rom_reqValid  <= 1'b1;
            state             <= IDLE;
            pc                <= 32'h80000000;
        end else begin
            case (state)
                IDLE: begin
                if (handshake_ifu_req && !lsu_stall) begin
                    pc    <= pc;
                    state <= WAIT;
                end else begin
                    pc    <= pc;
                    state <= IDLE;
                end
                end
                WAIT: begin
                    // 等待响应
                    if (lsu_stall || !handshake_ifu_resp) begin //Load or Wait for resp
                        pc <= pc;
                    end else begin
                        pc    <= n_pc;
                        state <= IDLE;
                    end
                end
                default: begin
                    state <= IDLE;
                    pc    <= pc;
                end
            endcase
        end
    end

    assign ifu_stall     = (state == IDLE);
    assign ifu_rom_raddr = pc;
    assign inst          = rom_ifu_rdata;

endmodule
