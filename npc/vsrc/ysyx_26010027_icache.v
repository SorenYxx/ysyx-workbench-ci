module ysyx_26010027_icache (
    input             clock,
    input             reset,

    // ----- IFU -----
    input         ifu_arvalid,
    output        ifu_arready,
    input  [31:0] ifu_araddr,
    output        ifu_rvalid,
    input         ifu_rready,
    output [31:0] ifu_rdata,

    // ----- Arbiter -----
    output        arb_arvalid,
    input         arb_arready,
    output [31:0] arb_araddr,
    input         arb_rvalid,
    output        arb_rready,
    input  [31:0] arb_rdata,
    output [ 7:0] arb_arlen,
    output [ 2:0] arb_arsize,

    // --------------------
    output reg [31:0] hit_count,
    output reg [31:0] miss_count,
    output reg [31:0] miss_latency
);

    // ----- cache parameters -----
    parameter BLOCK_SIZE = 16; // 块大小 16B
    parameter BLOCK_NUMS = 16; // cache 块数
    parameter WAYS       = 4;  // 组内的 cache 数
    parameter SET_NUMS   = BLOCK_NUMS / WAYS; // 组数

    parameter INDEX_W    = $clog2(SET_NUMS); // cache 序号
    parameter BLK_OFF_W  = $clog2(BLOCK_SIZE); // 块内偏移位宽, 16B→4bit
    parameter TAG_W      = 32 - INDEX_W - BLK_OFF_W; // tag 位宽
    // burst
    parameter BEATS      = BLOCK_SIZE / 4; // 16B ÷ 4B/beat = 4 拍

    // ----- cache regs -----
    reg                    valid [SET_NUMS-1:0][WAYS-1:0];
    reg [TAG_W-1:0]        tag   [SET_NUMS-1:0][WAYS-1:0];
    reg [BLOCK_SIZE*8-1:0] data  [SET_NUMS-1:0][WAYS-1:0];

    // ----- state -----
    reg [1:0] state;
    localparam IDLE  = 2'b00;
    localparam WAIT  = 2'b01;
    localparam BURST = 2'b10;

    wire [INDEX_W-1:0] index_q = ifu_araddr[BLK_OFF_W + INDEX_W - 1 : BLK_OFF_W]; // addr[7:4]
    wire [TAG_W-1:0]   tag_q   = ifu_araddr[31 : BLK_OFF_W + INDEX_W]; // addr[31:8]

    // ----- 组相联 -----
    reg     hit;
    integer hit_way;   // 记录命中的 way
    integer miss_way;  // 记录替换的 way (RR 替换)
    integer nway;      // 中间变量
    always @(*) begin
        hit      = 1'b0;
        hit_way  = 0;
        /*verilator lint_off WIDTHEXPAND*/ 
        miss_way = repl_cnt[index_q];
        for (nway = 0; nway < WAYS; nway++) begin
            if (valid[index_q][nway] && (tag[index_q][nway] == tag_q)) begin
                hit = 1'b1;
                hit_way = nway;
            end else if (!valid[index_q][nway]) begin
                miss_way = nway;
            end
        end
    end

    // ----- out to Arb -----
    reg [31:0] araddr_o;
    reg        arvalid_o;
    reg        rready_o;
    reg [ 7:0] arlen_o;
    reg [ 2:0] arsize_o;
    assign arb_araddr  = araddr_o;
    assign arb_arvalid = arvalid_o;
    assign arb_rready  = rready_o;
    assign arb_arlen   = arlen_o;
    assign arb_arsize  = arsize_o;

    reg [1:0] burst_count;
    reg [1:0] repl_cnt [SET_NUMS-1:0];  // 每set RR 替换指针

    // ----- out to IFU -----
    reg [31:0] rdata_o;
    reg        rvalid_o;
    assign ifu_rvalid = rvalid_o;
    assign ifu_rdata  = rdata_o;
    assign ifu_arready = (state == IDLE) && ifu_arvalid;

    wire handshake_ar = arb_arvalid && arb_arready;
    wire handshake_r  = arb_rvalid  && arb_rready;
    wire [1:0] word_sel = ifu_araddr[BLK_OFF_W-1 : 2]; // addr[3:2], 块内第几个字

    // AMAT 统计
    reg [31:0] miss_cycle;
    integer    i;
    integer    j;

    // ----- FSM -----
    always @(posedge clock, posedge reset) begin
        if (reset) begin
            state       <= IDLE;
            arvalid_o   <= 1'b0;
            rvalid_o    <= 1'b0;
            rready_o    <= 1'b0;
            hit_count   <= 32'b0;
            miss_count  <= 32'b0;
            miss_latency <= 32'b0;
            miss_cycle  <= 32'b0;
            for (i = 0; i < SET_NUMS; i++) begin
                for (j = 0; j < WAYS; j++) begin
                    valid[i][j] <= 1'b0;
                    tag  [i][j] <= {TAG_W{1'b0}};
                    data [i][j] <= {BLOCK_SIZE*8{1'b0}};
                repl_cnt[i] <= 2'd0;
                end
            end
        end else begin
            if (rvalid_o && ifu_rready) rvalid_o <= 1'b0;
            case (state)
                IDLE: begin
                    if (ifu_arvalid) begin
                        if (hit) begin
                            // HIT
                            rvalid_o  <= 1'b1;
                            rdata_o   <= data[index_q][hit_way][word_sel*32 +: 32];
                            hit_count <= hit_count + 1;
                        end else begin
                            // MISS
                            araddr_o   <= {ifu_araddr[31:BLK_OFF_W], {BLK_OFF_W{1'b0}}}; // 突发地址对齐
                            arvalid_o  <= 1'b1;
                            rready_o   <= 1'b1;
                            arlen_o    <= 8'd3; // BEATS-1 = 3
                            arsize_o   <= 3'd2;

                            state       <= WAIT;
                            miss_count  <= miss_count + 1;
                            miss_cycle  <= 32'b0;
                            burst_count <= 2'd0;
                        end
                    end
                end
                WAIT: begin
                    miss_cycle <= miss_cycle + 1;
                    if (handshake_ar) begin
                        arvalid_o <= 1'b0;
                        state     <= BURST;
                    end
                end
                BURST: begin
                    miss_cycle <= miss_cycle + 1;
                    if (handshake_r) begin
                        // 每拍数据写入 cache line 对应位置
                        data[index_q][miss_way][burst_count*32 +: 32] <= arb_rdata;
                        // 返回 IFU 所需字数据
                        if (burst_count == word_sel) begin
                            rdata_o  <= arb_rdata;
                        end
                        // 最后一拍: 填 tag/valid, 记录延迟, 返回 IDLE
                        if (burst_count == 2'd3) begin
                            tag[index_q][miss_way]   <= tag_q;
                            /*verilator lint_off WIDTHTRUNC*/                             
                            repl_cnt[index_q] <= miss_way + 1;

                            valid[index_q][miss_way] <= 1'b1;
                            miss_latency <= miss_latency + miss_cycle;
                            rvalid_o <= 1'b1;
                            state <= IDLE;
                        end else begin
                            burst_count <= burst_count + 1;
                        end
                    end
                end
                default: state <= IDLE;
            endcase
        end
    end

endmodule
