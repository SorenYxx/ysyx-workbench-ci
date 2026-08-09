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

    // --------------------
    output reg [31:0] hit_count,
    output reg [31:0] miss_count,
    output reg [31:0] miss_latency
);

    // ----- cache parameters -----
    parameter BLOCK_SIZE = 4; // 4B 大小
    parameter NUM_BLOCKS = 16; // cache 行数
    parameter INDEX_W    = 4; // cache 序号
    parameter OFFSET_W   = 2;  // 低两位 offset
    parameter TAG_W      = 32 - INDEX_W - OFFSET_W; // tag 判断命中

    // ----- cache regs -----
    reg                    valid [NUM_BLOCKS-1:0];
    reg [TAG_W-1:0]        tag   [NUM_BLOCKS-1:0];
    reg [BLOCK_SIZE*8-1:0] data  [NUM_BLOCKS-1:0];

    // ----- state -----
    reg [1:0] state;
    localparam IDLE = 2'b00;
    localparam WAIT = 2'b10;

    wire [INDEX_W-1:0] index_q = ifu_araddr[OFFSET_W + INDEX_W - 1: OFFSET_W]; // addr[5:2]
    wire [TAG_W-1:0]   tag_q   = ifu_araddr[31:INDEX_W + OFFSET_W]; // addr[31:6]
    wire hit = valid[index_q] && (tag[index_q] == tag_q);

    // ----- out to Arb -----
    reg [31:0] araddr_o;
    reg        arvalid_o;
    reg        rready_o;
    assign arb_araddr  = araddr_o;
    assign arb_arvalid = arvalid_o;
    assign arb_rready  = rready_o;

    // ----- out to IFU -----
    reg [31:0] rdata_o;
    reg        rvalid_o;
    assign ifu_rvalid = rvalid_o;
    assign ifu_rdata  = rdata_o;
    assign ifu_arready = (state == IDLE) && ifu_arvalid; // 避免重复答应 IFU 请求

    wire handshake_ar = arb_arvalid && arb_arready;
    wire handshake_r  = arb_rvalid  && arb_rready;

    // AMAT 统计
    reg [31:0] miss_cycle;        // 当前 miss 已等待周期
    integer    i;

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
            for (i = 0; i < NUM_BLOCKS; i++) begin
                valid[i] <= 1'b0;
                tag[i]   <= {TAG_W{1'b0}};
                data[i]  <= {BLOCK_SIZE*8{1'b0}};
            end
        end else begin
            if (rvalid_o && ifu_rready) rvalid_o <= 1'b0;
            case (state)
                IDLE: begin
                    if (ifu_arvalid) begin
                        if (hit) begin
                            // HIT
                            rvalid_o  <= 1'b1;
                            rdata_o   <= data[index_q];
                            hit_count <= hit_count + 1;
                        end else begin
                            // MISS
                            araddr_o  <= ifu_araddr;
                            arvalid_o <= 1'b1;
                            rready_o  <= 1'b1;
                            state     <= WAIT;
                            miss_count <= miss_count + 1;
                            miss_cycle <= 32'b0;
                        end
                    end
                end
                WAIT: begin
                    miss_cycle <= miss_cycle + 1;
                    if (handshake_ar) arvalid_o <= 1'b0;
                    if (handshake_r) begin
                        data[index_q]  <= arb_rdata;
                        tag[index_q]   <= ifu_araddr[OFFSET_W + INDEX_W +: TAG_W];
                        valid[index_q] <= 1'b1;
                        rdata_o        <= arb_rdata;
                        rvalid_o       <= 1'b1;
                        state          <= IDLE;
                        miss_latency   <= miss_latency + miss_cycle;
                    end
                    else state <= WAIT;
                end
                default: state <= IDLE;
            endcase
        end
    end

endmodule
