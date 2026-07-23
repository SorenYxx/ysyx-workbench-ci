/* verilator lint_off UNUSEDPARAM */
module ysyx_26010027_Xbar (
    input clock,
    input reset,

    // master
    input     [31:0] io_master_araddr,
    input            io_master_arvalid,
    output           io_master_arready,

    input            io_master_rready,
    output    [31:0] io_master_rdata,
    output           io_master_rvalid,
    output    [ 1:0] io_master_rresp,

    input     [31:0] io_master_awaddr,
    input            io_master_awvalid,
    output           io_master_awready,

    input     [31:0] io_master_wdata,
    input     [ 3:0] io_master_wstrb,
    input            io_master_wvalid,
    output           io_master_wready,

    output    [ 1:0] io_master_bresp,
    output           io_master_bvalid,
    input            io_master_bready,

    // slave
    output    [31:0] io_slave_araddr,
    output           io_slave_arvalid,
    input            io_slave_arready,

    output           io_slave_rready,
    input     [31:0] io_slave_rdata,
    input            io_slave_rvalid,
    input     [ 1:0] io_slave_rresp,

    output    [31:0] io_slave_awaddr,
    output           io_slave_awvalid,
    input            io_slave_awready,

    output    [31:0] io_slave_wdata,
    output    [ 3:0] io_slave_wstrb,
    output           io_slave_wvalid,
    input            io_slave_wready,

    input     [ 1:0] io_slave_bresp,
    input            io_slave_bvalid,
    output           io_slave_bready,

    output    [ 1:0] sel

);
    wire req = (io_master_arvalid || io_master_awvalid);
    reg [1:0] state;

    localparam SRAM  = 2'b01;
    localparam CLINT = 2'b10;
    localparam UART  = 2'b11;

    // ----- 注册外设地址 -----
    localparam UART_BASE  = 32'h1000_0000;
    localparam CLINT_BASE = 32'h1000_0048;

    localparam UART_END  = 32'h1000_000f;
    localparam CLINT_END = 32'h1000_004f;
    
    // ---------------

    wire addr_is_uart  = (io_master_arvalid && io_master_araddr >= UART_BASE  && io_master_araddr <= UART_END) ||
                         (io_master_awvalid && io_master_awaddr >= UART_BASE  && io_master_awaddr <= UART_END);
    wire addr_is_clint = (io_master_arvalid && io_master_araddr >= CLINT_BASE && io_master_araddr <= CLINT_END) ||
                         (io_master_awvalid && io_master_awaddr >= CLINT_BASE && io_master_awaddr <= CLINT_END);

    always @(posedge clock, posedge reset) begin
        if (reset) begin
            state <= SRAM;
        end else begin
            case(state)
                SRAM: begin
                    if (req && addr_is_uart)
                        state <= UART;
                    else if (req && addr_is_clint)
                        state <= CLINT;
                    else
                        state <= SRAM;
                end
                UART: begin
                    if ((io_slave_rvalid && io_slave_rready) || (io_slave_bvalid && io_slave_bready))
                        state <= SRAM;
                    else
                        state <= UART;
                end
                CLINT: begin
                    if ((io_slave_rvalid && io_slave_rready) || (io_slave_bvalid && io_slave_bready))
                        state <= SRAM;
                    else
                        state <= CLINT;
                end
                default: state <= SRAM;
            endcase
        end
    end

    assign sel = state;

    // 防止 sel 切换前错误 slave 抢先完成握手
    wire sel_matches = (state == SRAM)  ? (!addr_is_uart && !addr_is_clint) :
                       (state == UART)  ? addr_is_uart :
                       (state == CLINT) ? addr_is_clint : 1'b0;

    assign io_master_arready = io_slave_arready && sel_matches;
    assign io_master_awready = io_slave_awready && sel_matches;
    assign io_master_wready  = io_slave_wready;

    assign io_master_rdata   = io_slave_rdata;
    assign io_master_rvalid  = io_slave_rvalid;
    assign io_master_rresp   = io_slave_rresp;

    assign io_master_bresp   = io_slave_bresp;
    assign io_master_bvalid  = io_slave_bvalid;

    // master -> slave
    assign io_slave_araddr  = io_master_araddr;
    assign io_slave_arvalid = io_master_arvalid && sel_matches;

    assign io_slave_rready  = io_master_rready;

    assign io_slave_awaddr  = io_master_awaddr;
    assign io_slave_awvalid = io_master_awvalid && sel_matches;

    assign io_slave_wdata   = io_master_wdata;
    assign io_slave_wstrb   = io_master_wstrb;
    assign io_slave_wvalid  = io_master_wvalid;

    assign io_slave_bready  = io_master_bready;

endmodule
