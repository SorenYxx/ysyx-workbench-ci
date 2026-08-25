/* verilator lint_off UNUSEDSIGNAL */
module ysyx_26010027_CLINT (
    input             clock,
    input             reset,

    // ----------- AXI-Lite -----------
    input      [31:0] io_slave_araddr,
    input             io_slave_arvalid,
    output            io_slave_arready,

    input             io_slave_rready,
    output     [31:0] io_slave_rdata,
    output reg        io_slave_rvalid,
    output reg [ 1:0] io_slave_rresp,

    input      [31:0] io_slave_awaddr,
    input             io_slave_awvalid,
    output            io_slave_awready,

    input      [31:0] io_slave_wdata,
    input      [ 3:0] io_slave_wstrb,
    input             io_slave_wvalid,
    output            io_slave_wready,

    output     [ 1:0] io_slave_bresp,
    output            io_slave_bvalid,
    input             io_slave_bready
);

    assign io_slave_awready = 1'b0;
    assign io_slave_wready  = 1'b0;
    assign io_slave_bvalid  = 1'b0;
    assign io_slave_bresp   = 2'b0;
    // assign io_slave_bid     = 4'b0;

    // mtime 计时器
    reg [31:0] mtime_low, mtime_high;

    always @(posedge clock, posedge reset) begin
        if (reset) begin
            mtime_low <= 32'h0;
            mtime_high <= 32'h0;
        end
        else begin
            mtime_low <= mtime_low + 32'h1;
            if (mtime_low == 32'hFFFF_FFFF) // 溢出进位
                mtime_high <= mtime_high + 32'h1;
        end
    end

    // 状态机
    reg [1:0] state_r;
    localparam IDLE = 2'b00;
    localparam BUSY = 2'b01;

    wire handshake_ar = io_slave_arvalid && io_slave_arready;
    wire handshake_r  = io_slave_rvalid && io_slave_rready;

    assign io_slave_arready = (state_r == IDLE);
    // assign io_slave_rid     = 4'b0;
    // assign io_slave_rlast   = 1'b1;

    reg [31:0] rdata;

    always @(posedge clock, posedge reset) begin
        if (reset) begin
            state_r         <= IDLE;
            io_slave_rvalid <= 1'b0;
            rdata           <= 32'b0;
            io_slave_rresp  <= 2'b0;
        end else begin
            case (state_r)
                IDLE: begin
                    if (handshake_ar) begin
                        state_r         <= BUSY;
                        io_slave_rvalid <= 1'b1;
                        io_slave_rresp  <= 2'b0;
                        case (io_slave_araddr[3:2])
                            2'b00: rdata <= mtime_low;
                            2'b01: rdata <= mtime_high;
                            default: rdata <= 32'b0;
                        endcase
                    end
                end
                BUSY: begin
                    if (handshake_r) begin
                        state_r         <= IDLE;
                        io_slave_rvalid <= 1'b0;
                    end
                end
                default: state_r <= IDLE;
            endcase
        end
    end

    assign io_slave_rdata = rdata;

endmodule
