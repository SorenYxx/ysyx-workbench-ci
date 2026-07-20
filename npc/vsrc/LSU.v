module LSU (
    input             clk,
    input             rst,
    input      [ 1:0] mem_w,
    input      [ 2:0] mem_r,
    input      [31:0] addr,
    input      [31:0] wdata,
    output reg [31:0] out_data,

    // ----------- AXI-Lite -----------
    input             ram_lsu_arready,
    output     [31:0] lsu_ram_araddr,
    output     reg    lsu_ram_arvalid,

    output            lsu_ram_rready,
    input      reg    ram_lsu_rvalid,
    input      [31:0] ram_lsu_rdata,
    input      [ 1:0] ram_lsu_rresp,

    output     [31:0] lsu_ram_awaddr,
    output            lsu_ram_awvalid,
    input             ram_lsu_awready,

    output     [31:0] lsu_ram_wdata,
    output     [ 3:0] lsu_ram_wstrb,
    output            lsu_ram_wvalid,
    input             ram_lsu_wready,

    input      [ 1:0] ram_lsu_bresp,
    input             ram_lsu_bvalid,
    output            lsu_ram_bready,

    // --------------------------------

    output     wire   lsu_stall,
    input             ifu_stall

);
    
    reg [2:0] state_w;
    reg [1:0] state_r;

    localparam W_IDLE = 3'b000;
    localparam W_WAIT = 3'b001;
    localparam B_WAIT = 3'b010;
    localparam R_IDLE = 2'b00;
    localparam R_WAIT = 2'b01;

    wire ren = (mem_r != 3'd5) && !ifu_stall;
    wire wen = (mem_w != 2'b11) && !ifu_stall;

    // 数据移位信号 w/r
    wire [31:0] wdata_shifted = (mem_w != 2'b00) ? (wdata << (addr[1:0] * 8)) : wdata;
    wire [31:0] rdata_shifted = ram_lsu_rdata >> (addr[1:0] * 8);

    // load/store 阻塞
    assign lsu_stall = (ren && state_r == R_IDLE) || (wen && (state_w == W_IDLE || state_w == W_WAIT));
    
    // 访存相关数据
    assign lsu_ram_awaddr = addr;
    assign lsu_ram_araddr = addr;
    assign lsu_ram_wdata  = wdata_shifted;
    assign lsu_ram_wstrb  = (mem_w == 2'b00) ? 4'hF :
                            (mem_w == 2'b01) ? (4'h1 << addr[1:0]) :
                            (mem_w == 2'b10) ? (4'h3 << addr[1:0]) :
                            4'h0;

    // load/store 访存请求与响应有效
    assign lsu_ram_awvalid = (state_w == W_IDLE || state_w == W_WAIT) && wen;
    assign lsu_ram_wvalid  = (state_w == W_WAIT) && wen;
    assign lsu_ram_arvalid = (state_r == R_IDLE) && ren;
    assign lsu_ram_rready  = (state_r == R_WAIT);
    assign lsu_ram_bready  = (state_w == B_WAIT);

    // 握手请求与响应信号
    wire handshake_aw = ram_lsu_awready && lsu_ram_awvalid;
    wire handshake_w  = ram_lsu_wready && lsu_ram_wvalid;
    wire handshake_ar = ram_lsu_arready && lsu_ram_arvalid;
    wire handshake_r  = lsu_ram_rready && ram_lsu_rvalid && (ram_lsu_rresp == 2'b00);
    wire handshake_b  = ram_lsu_bvalid && lsu_ram_bready && (ram_lsu_bresp == 2'b00);
    
    // LSU W状态机
    always @(posedge clk, posedge rst) begin
        if (rst) begin
            state_w <= W_IDLE;
        end else begin
            case (state_w)
                W_IDLE: begin
                    if (handshake_aw) state_w <= W_WAIT;
                    else state_w <= W_IDLE;
                end
                W_WAIT: begin
                    if (handshake_w) state_w <= B_WAIT;
                    else state_w <= W_WAIT;
                end
                B_WAIT: begin
                    if (handshake_b) state_w <= W_IDLE;
                    else state_w <= B_WAIT;
                end
                default: state_w <= W_IDLE;
            endcase
        end
    end

    // LSU R状态机
    always @(posedge clk, posedge rst) begin
        if (rst) begin
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
