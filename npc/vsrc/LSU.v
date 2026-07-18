module LSU (
    input             clk,
    input             rst,
    input      [ 1:0] mem_w,
    input      [ 2:0] mem_r,
    input      [31:0] addr,
    input      [31:0] wdata,

    input      [31:0] lsu_rdata,
    output     [31:0] lsu_addr,
    output            lsu_wen,
    output     [31:0] lsu_wdata,
    output     [ 3:0] lsu_wmask,

    output reg [31:0] out_data,
    output wire       lsu_stall,

    input             ifu_stall
);

    reg [1:0] state;
    localparam IDLE = 2'b00;
    localparam WAIT = 2'b01;

    wire [31:0] wdata_shifted = (mem_w != 2'b00) ? (wdata << (addr[1:0] * 8)) : wdata;
    wire [31:0] rdata_shifted = lsu_rdata >> (addr[1:0] * 8);

    assign lsu_stall = !ifu_stall && (mem_r != 3'd5) && (state == IDLE); //load阻塞

    assign lsu_addr  = addr;
    assign lsu_wen   = (mem_w != 2'b11) && !ifu_stall;
    assign lsu_wdata = wdata_shifted;
    assign lsu_wmask = (mem_w == 2'b00) ? 4'hF :
                       (mem_w == 2'b01) ? (4'h1 << addr[1:0]) :
                       (mem_w == 2'b10) ? (4'h3 << addr[1:0]) :
                       4'h0;

    // Load state machine
    always @(posedge clk, posedge rst) begin
        if (rst) begin
            state <= IDLE;
        end else begin
            case (state)
                IDLE: begin
                    if (!ifu_stall && (mem_r != 3'd5)) state <= WAIT; //mem_r 应有效
                end
                WAIT: begin
                    state <= IDLE;
                end
                default: state <= IDLE;
            endcase
        end
    end

    // Load result
    always @(*) begin
        case (mem_r)
            3'd0: out_data = rdata_shifted;
            3'd1: out_data = {{24{rdata_shifted[7]}}, rdata_shifted[7:0]};
            3'd2: out_data = {{16{rdata_shifted[15]}}, rdata_shifted[15:0]};
            3'd3: out_data = {24'b0, rdata_shifted[7:0]};
            3'd4: out_data = {16'b0, rdata_shifted[15:0]};
            default: out_data = 32'b0;
        endcase
    end

endmodule
