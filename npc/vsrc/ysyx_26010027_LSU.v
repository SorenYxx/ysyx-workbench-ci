module ysyx_26010027_LSU (
    input             clock,
    input             reset,
    input      [ 1:0] mem_w,
    input      [ 2:0] mem_r,
    input      [31:0] addr,
    input      [31:0] wdata,
    output reg [31:0] out_data,

    // ----------- AXI4 -----------
    input             cpu_lsu_arready,
    output     [31:0] lsu_cpu_araddr,
    output     reg    lsu_cpu_arvalid,
    output     [ 3:0] lsu_cpu_arid,
    output     [ 7:0] lsu_cpu_arlen,
    output     [ 2:0] lsu_cpu_arsize,
    output     [ 1:0] lsu_cpu_arburst,

    output            lsu_cpu_rready,
    input             cpu_lsu_rvalid,
    input      [31:0] cpu_lsu_rdata,
    input      [ 1:0] cpu_lsu_rresp,
    input      [ 3:0] cpu_lsu_rid,
    input             cpu_lsu_rlast,

    output     [31:0] lsu_cpu_awaddr,
    output            lsu_cpu_awvalid,
    output     [ 3:0] lsu_cpu_awid,
    output     [ 7:0] lsu_cpu_awlen,
    output     [ 2:0] lsu_cpu_awsize,
    output     [ 1:0] lsu_cpu_awburst,
    input             cpu_lsu_awready,

    output     [31:0] lsu_cpu_wdata,
    output     [ 3:0] lsu_cpu_wstrb,
    output            lsu_cpu_wvalid,
    output            lsu_cpu_wlast,
    input             cpu_lsu_wready,

    input      [ 1:0] cpu_lsu_bresp,
    input             cpu_lsu_bvalid,
    output            lsu_cpu_bready,
    input      [ 3:0] cpu_lsu_bid,
    // --------------------------------

    output     wire   lsu_stall,
    input             ifu_stall

);

    reg [2:0] state_w;
    reg [1:0] state_r;

    localparam W_IDLE = 3'b000;
    localparam W_WAIT = 3'b001;
    localparam W_RESP = 3'b010;
    localparam R_IDLE = 2'b00;
    localparam R_WAIT = 2'b01;

    wire ren = (mem_r != 3'd5) && !ifu_stall;
    wire wen = (mem_w != 2'b11) && !ifu_stall;

    // 数据移位信号 w/r
    wire [31:0] wdata_shifted = (mem_w != 2'b00) ? (wdata << (addr[1:0] * 8)) : wdata;
    wire [31:0] rdata_shifted = cpu_lsu_rdata >> (addr[1:0] * 8);

    // load/store 阻塞
    assign lsu_stall = (ren && !handshake_r) || (wen && !handshake_b);

    // 访存相关数据
    assign lsu_cpu_awaddr  = addr;
    assign lsu_cpu_araddr  = addr;
    assign lsu_cpu_wdata   = wdata_shifted;
    assign lsu_cpu_wstrb   = (mem_w == 2'b00) ? 4'hF :
                             (mem_w == 2'b01) ? (4'h1 << addr[1:0]) :
                             (mem_w == 2'b10) ? (4'h3 << addr[1:0]) :
                             4'h0;
    // AXI4 附加信号
    assign lsu_cpu_awid    = 4'h0;
    assign lsu_cpu_awlen   = 8'h0;
    assign lsu_cpu_awsize  = (mem_w == 2'b00) ? 3'b010 :
                             (mem_w == 2'b10) ? 3'b001 : 3'b000;
    assign lsu_cpu_awburst = 2'b01;
    assign lsu_cpu_wlast   = 1'b1;
    assign lsu_cpu_arid    = 4'h0;
    assign lsu_cpu_arlen   = 8'h0;
    assign lsu_cpu_arsize  = (mem_r[1:0] == 2'b00) ? 3'b010 :
                             (mem_r[1:0] == 2'b10) ? 3'b001 : 3'b000;
    assign lsu_cpu_arburst = 2'b01;

    // load/store 访存请求与响应有效
    assign lsu_cpu_awvalid = (state_w == W_IDLE) && wen;
    assign lsu_cpu_wvalid  = (state_w == W_WAIT) && wen;
    assign lsu_cpu_arvalid = (state_r == R_IDLE) && ren;
    assign lsu_cpu_rready  = (state_r == R_WAIT);
    assign lsu_cpu_bready  = (state_w == W_RESP);

    // 握手请求与响应信号
    wire handshake_aw = cpu_lsu_awready && lsu_cpu_awvalid;
    wire handshake_w  = cpu_lsu_wready && lsu_cpu_wvalid;
    wire handshake_ar = cpu_lsu_arready && lsu_cpu_arvalid;
    wire handshake_r  = lsu_cpu_rready && cpu_lsu_rvalid && (cpu_lsu_rresp == 2'b00);
    wire handshake_b  = cpu_lsu_bvalid && lsu_cpu_bready && (cpu_lsu_bresp == 2'b00);

    // LSU W状态机
    always @(posedge clock, posedge reset) begin
        if (reset) begin
            state_w <= W_IDLE;
        end else begin
            case (state_w)
                W_IDLE: begin
                    if (handshake_aw) state_w <= W_WAIT;
                    else state_w <= W_IDLE;
                end
                W_WAIT: begin
                    if (handshake_w) state_w <= W_RESP;
                    else state_w <= W_WAIT;
                end
                W_RESP: begin
                    if (handshake_b) state_w <= W_IDLE;
                    else state_w <= W_RESP;
                end
                default: state_w <= W_IDLE;
            endcase
        end
    end

    // LSU R状态机
    always @(posedge clock, posedge reset) begin
        if (reset) begin
            state_r <= R_IDLE;
        end else begin
            case (state_r)
                R_IDLE: begin
                    if (handshake_ar) state_r <= R_WAIT;
                    else state_r <= R_IDLE;
                end
                R_WAIT: begin
                    if (handshake_r) state_r <= R_IDLE;
                    else state_r <= R_WAIT;
                end
                default: state_r <= R_IDLE;
            endcase
        end
    end

    // Load 数据处理
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
