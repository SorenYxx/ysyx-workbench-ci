module IFU (
    input      [31:0] ifu_rdata,
    output     [31:0] ifu_raddr,
    input             ifu_respValid,
    output     reg    ifu_reqValid,

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

    always @(posedge clk, posedge rst) begin
        if (rst) begin
            ifu_reqValid <= 1'b1;
            state        <= IDLE;
            pc           <= 32'h80000000;
        end else begin
            case (state)
                IDLE: begin
                if (ifu_reqValid && !lsu_stall) begin
                    pc    <= pc;
                    state <= WAIT;
                end else begin
                    pc    <= pc;
                    state <= IDLE;
                end
                end
                WAIT: begin
                    if (lsu_stall || !ifu_respValid) begin //Load or Wait for resp
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

    assign ifu_stall = (state == IDLE);
    assign ifu_raddr = pc;
    assign inst      = ifu_rdata;

endmodule
