module ysyx_26010027_LSU (
    input             clock,
    input             reset,

    input      [ 1:0] exu_lsu_mem_w,
    input      [ 2:0] exu_lsu_mem_r,
    input      [31:0] exu_lsu_mem_addr,
    input      [31:0] exu_lsu_wdata,

    // EXU - LSU
    input             exu_lsu_valid,
    output reg        lsu_exu_ready,
    input      [31:0] exu_lsu_pc,
    input      [31:0] exu_lsu_inst,
    input             exu_lsu_reg_w,
    input      [ 1:0] exu_lsu_rf_res,
    input      [ 4:0] exu_lsu_waddr,
    input      [31:0] exu_lsu_alu_result,

    // LSU - WBU
    input             wbu_lsu_ready,
    output reg        lsu_wbu_valid,
    output reg [31:0] lsu_wbu_pc,
    output reg [31:0] lsu_wbu_inst,
    output reg        lsu_wbu_reg_w,
    output reg [ 1:0] lsu_wbu_rf_res,
    output reg [ 4:0] lsu_wbu_waddr,
    output reg [31:0] lsu_wbu_alu_result,
    output reg [31:0] lsu_wbu_mem_result,

    // ----------- AXI4 -----------
    input             cpu_lsu_arready,
    output     [31:0] lsu_cpu_araddr,
    output            lsu_cpu_arvalid,
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
    input      [ 3:0] cpu_lsu_bid
    // --------------------------------

    // output     wire   lsu_stall,
    // input      wire   ifu_stall

);
    // 锁存等仲裁
    // reg l_ren; // load
    // reg 


    reg [2:0] state_w;
    reg [1:0] state_r;

    localparam W_IDLE = 3'b000;
    localparam W_WAIT = 3'b001;
    localparam W_RESP = 3'b010;
    localparam R_IDLE = 2'b00;
    localparam R_WAIT = 2'b01;

    wire [31:0] addr = exu_lsu_mem_addr;

    wire ren = (exu_lsu_mem_r != 3'd5 && !handshake_r) && (exu_lsu_valid && lsu_exu_ready);
    wire wen = (exu_lsu_mem_w != 2'b11 && !handshake_b) && (exu_lsu_valid && lsu_exu_ready);

    // 数据移位信号 w/r
    wire [31:0] wdata_shifted = (exu_lsu_mem_w != 2'b00) ? (exu_lsu_wdata << (addr[1:0] * 8)) : exu_lsu_wdata;
    wire [31:0] rdata_shifted = cpu_lsu_rdata >> (addr[1:0] * 8);

    // load/store 阻塞
    // assign lsu_stall = (ren) || (wen);

    // 访存相关数据
    assign lsu_cpu_awaddr  = addr;
    assign lsu_cpu_araddr  = addr;
    assign lsu_cpu_wdata   = wdata_shifted;
    assign lsu_cpu_wstrb   = (exu_lsu_mem_w == 2'b00) ? 4'hF :
                             (exu_lsu_mem_w == 2'b01) ? (4'h1 << addr[1:0]) :
                             (exu_lsu_mem_w == 2'b10) ? (4'h3 << addr[1:0]) :
                             4'h0;
    // AXI4 附加信号
    assign lsu_cpu_awid    = 4'h0;
    assign lsu_cpu_awlen   = 8'h0;
    assign lsu_cpu_awsize  = (exu_lsu_mem_w == 2'b00) ? 3'b010 :
                             (exu_lsu_mem_w == 2'b10) ? 3'b001 : 3'b000;
    assign lsu_cpu_awburst = 2'b01;
    assign lsu_cpu_wlast   = 1'b1;
    assign lsu_cpu_arid    = 4'h0;
    assign lsu_cpu_arlen   = 8'h0;
    assign lsu_cpu_arsize = (exu_lsu_mem_r == 3'd0) ? 3'b010 :
                            (exu_lsu_mem_r == 3'd2 || exu_lsu_mem_r == 3'd4) ? 3'b001 :
                            3'b000;
    assign lsu_cpu_arburst = 2'b01;

    // load/store 访存请求与响应有效
    assign lsu_cpu_awvalid = (state_w == W_IDLE) && wen;
    assign lsu_cpu_wvalid  = (state_w == W_IDLE || state_w == W_WAIT) && wen;
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
    wire lsu_busy = (state_w != W_IDLE) || (state_r != R_IDLE);;
    always @(posedge clock, posedge reset) begin
        if (reset) begin
            state_w  <= W_IDLE;
        end else begin
            case (state_w)
                W_IDLE: begin
                    if (handshake_aw && handshake_w) begin
                        state_w  <= W_RESP;
                    end
                    else if (handshake_aw) begin
                        state_w  <= W_WAIT;
                    end
                    else state_w <= W_IDLE;
                end
                W_WAIT: begin
                    if (handshake_w) state_w <= W_RESP;
                    else state_w <= W_WAIT;
                end
                W_RESP: begin
                    if (handshake_b) begin
                        state_w  <= W_IDLE;
                    end
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
                    if (handshake_ar) begin
                        state_r  <= R_WAIT;
                    end
                    else state_r <= R_IDLE;
                end
                R_WAIT: begin
                    if (handshake_r) begin
                        state_r <= R_IDLE;
                    end
                    else state_r <= R_WAIT;
                end
                default: state_r <= R_IDLE;
            endcase
        end
    end

    // Load 数据处理
    wire [31:0] out_data;
    assign out_data = (exu_lsu_mem_r == 3'd0) ? rdata_shifted :
                      (exu_lsu_mem_r == 3'd1) ? {{24{rdata_shifted[7]}}, rdata_shifted[7:0]} :
                      (exu_lsu_mem_r == 3'd2) ? {{16{rdata_shifted[15]}}, rdata_shifted[15:0]} :
                      (exu_lsu_mem_r == 3'd3) ? {24'b0, rdata_shifted[7:0]} :
                      (exu_lsu_mem_r == 3'd4) ? {16'b0, rdata_shifted[15:0]} : 32'b0;

    // 握手
    assign lsu_exu_ready = !lsu_busy;
    always @(posedge clock, posedge reset) begin
        if (reset) begin
            lsu_wbu_valid <= 1'b0;
        end 
        else if (wbu_lsu_ready) begin
            lsu_wbu_valid <= 1'b0;
        end
        else if (lsu_busy) begin
            if (handshake_r || handshake_b) begin
                lsu_wbu_valid <= 1'b1;
            end
        end
        else begin
            lsu_wbu_valid <= 1'b1;
        end
    end

    always @(posedge clock, posedge reset) begin
        if (reset) begin
            lsu_wbu_pc         <= 32'b0;
            lsu_wbu_inst       <= 32'b0;
            lsu_wbu_reg_w      <= 1'b0;
            lsu_wbu_rf_res     <= 2'b0;
            lsu_wbu_waddr      <= 5'b0;
            lsu_wbu_alu_result <= 32'b0;
            lsu_wbu_mem_result <= 32'b0;
        end 
        else if (exu_lsu_valid && lsu_exu_ready) begin
            lsu_wbu_pc         <= exu_lsu_pc;
            lsu_wbu_inst       <= exu_lsu_inst;
            lsu_wbu_reg_w      <= exu_lsu_reg_w;
            lsu_wbu_rf_res     <= exu_lsu_rf_res;
            lsu_wbu_waddr      <= exu_lsu_waddr;
            lsu_wbu_alu_result <= exu_lsu_alu_result;

        end
        else if (handshake_r) begin
            lsu_wbu_mem_result <= out_data;
        end
        else begin
            lsu_wbu_pc         <= lsu_wbu_pc;
            lsu_wbu_inst       <= lsu_wbu_inst;
            lsu_wbu_reg_w      <= lsu_wbu_reg_w;
            lsu_wbu_rf_res     <= lsu_wbu_rf_res;
            lsu_wbu_waddr      <= lsu_wbu_waddr;
            lsu_wbu_alu_result <= lsu_wbu_alu_result;
            lsu_wbu_mem_result <= lsu_wbu_mem_result;
        end
    end

endmodule
