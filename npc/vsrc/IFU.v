module IFU (
    input             clk,
    input             rst,
    input      [31:0] n_pc,
    output reg [31:0] pc,
    output     [31:0] inst,

    // ----------- AXI-Lite -----------
    input             rom_ifu_arready,
    output     [31:0] ifu_rom_araddr,
    output     reg    ifu_rom_arvalid,

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

    // 握手请求与响应信号
    wire handshake_ifu_req  = ifu_rom_arvalid && rom_ifu_arready;
    wire handshake_ifu_resp = rom_ifu_rvalid && ifu_rom_rready && (rom_ifu_rresp == 2'b00);

    assign ifu_rom_rready = (state == WAIT) && !lsu_stall;

    // IFU 状态机
    always @(posedge clk, posedge rst) begin
        if (rst) begin
            ifu_rom_arvalid <= 1'b1;
            state           <= IDLE;
            pc              <= 32'h80000000;
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
                    pc    <= n_pc;
                    state <= IDLE;
                end
            endcase
        end
    end

    assign ifu_rom_araddr = pc;
    assign ifu_stall      = (state == IDLE);
    assign inst           = rom_ifu_rdata;

endmodule
