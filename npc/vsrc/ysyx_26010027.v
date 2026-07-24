import "DPI-C" function void ebreak();
import "DPI-C" function void ftrace_print(int pc, int target, int rd, int rs1);
import "DPI-C" function int  pmem_read(input int raddr);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input int wmask);
import "DPI-C" function void is_illegal_inst();
import "DPI-C" function void get_reg(input int waddr, input int r);
import "DPI-C" function void get_csr(input int csr, input int data);

module ysyx_26010027 (
    input         clock,
    input         reset,

    // ----- MASTER -----
    // AR
    input         io_master_arready,
    output        io_master_arvalid,
    output [31:0] io_master_araddr,
    output [ 3:0] io_master_arid,
    output [ 7:0] io_master_arlen,
    output [ 2:0] io_master_arsize,
    output [ 1:0] io_master_arburst,
    // R
    output        io_master_rready,
    input         io_master_rvalid,
    input  [31:0] io_master_rdata,
    input  [ 1:0] io_master_rresp,
    input  [ 3:0] io_master_rid,
    input         io_master_rlast,
    // AW
    input         io_master_awready,
    output        io_master_awvalid,
    output [31:0] io_master_awaddr,
    output [ 3:0] io_master_awid,
    output [ 7:0] io_master_awlen,
    output [ 2:0] io_master_awsize,
    output [ 1:0] io_master_awburst,
    // W
    input         io_master_wready,
    output        io_master_wvalid,
    output [31:0] io_master_wdata,
    output [ 3:0] io_master_wstrb,
    output        io_master_wlast,
    // B
    input         io_master_bvalid,
    output        io_master_bready,
    input  [ 1:0] io_master_bresp,
    input  [ 3:0] io_master_bid,

    // ----- SLAVE -----
    // AR
    output        io_slave_arready,
    input         io_slave_arvalid,
    input  [31:0] io_slave_araddr,
    input  [ 3:0] io_slave_arid,
    input  [ 7:0] io_slave_arlen,
    input  [ 2:0] io_slave_arsize,
    input  [ 1:0] io_slave_arburst,
    // R
    input         io_slave_rready,
    output        io_slave_rvalid,
    output [31:0] io_slave_rdata,
    output [ 1:0] io_slave_rresp,
    output [ 3:0] io_slave_rid,
    output        io_slave_rlast,
    // AW
    output        io_slave_awready,
    input         io_slave_awvalid,
    input  [31:0] io_slave_awaddr,
    input  [ 3:0] io_slave_awid,
    input  [ 7:0] io_slave_awlen,
    input  [ 2:0] io_slave_awsize,
    input  [ 1:0] io_slave_awburst,
    // W
    output        io_slave_wready,
    input         io_slave_wvalid,
    input  [31:0] io_slave_wdata,
    input  [ 3:0] io_slave_wstrb,
    input         io_slave_wlast,
    // B
    output        io_slave_bvalid,
    input         io_slave_bready,
    output [ 1:0] io_slave_bresp,
    output [ 3:0] io_slave_bid,

    input         io_interrupt
);

    // 内部信号
    wire [31:0] inst;
    wire [31:0] pc, n_pc;

    wire [31:0] imm;
    wire [31:0] rdata1, rdata2;
    wire [31:0] alu_result, mem_result, csr_result;
    wire [31:0] out_mepc, out_mtvec;
    wire [ 4:0] rs1, rs2, rd, waddr;
    wire [ 1:0] rf_res;
    wire [ 3:0] alu_op;
    wire [ 1:0] mem_w;
    wire [ 2:0] mem_r;
    wire        csr_we;
    wire        reg_w;
    wire        alu_arc1, alu_arc2;
    wire [ 1:0] j_type;
    wire [ 2:0] b_type;
    wire [31:0] wdata;
    wire        ebreak_type;
    wire        ifu_stall;
    wire        lsu_stall;

    // Arbiter相关信号
    wire        arb_arvalid;
    wire        arb_arready;
    wire [31:0] arb_araddr;
    wire [ 3:0] arb_arid;
    wire [ 7:0] arb_arlen;
    wire [ 2:0] arb_arsize;
    wire [ 1:0] arb_arburst;
    wire        arb_rvalid;
    wire        arb_rready;
    wire [31:0] arb_rdata;
    wire [ 1:0] arb_rresp;
    wire [ 3:0] arb_rid;
    wire        arb_rlast;

    wire        arb_awvalid;
    wire        arb_awready;
    wire [31:0] arb_awaddr;
    wire [ 3:0] arb_awid;
    wire [ 7:0] arb_awlen;
    wire [ 2:0] arb_awsize;
    wire [ 1:0] arb_awburst;
    wire        arb_wvalid;
    wire        arb_wready;
    wire [31:0] arb_wdata;
    wire [ 3:0] arb_wstrb;
    wire        arb_wlast;
    wire        arb_bvalid;
    wire        arb_bready;
    wire [ 1:0] arb_bresp;
    wire [ 3:0] arb_bid;

    // CLINT 接口信号
    wire            io_clint_arready;
    wire            io_clint_rvalid;
    wire     [31:0] io_clint_rdata;
    wire     [ 1:0] io_clint_rresp;
    wire            io_clint_awready;
    wire            io_clint_wready;
    wire            io_clint_bvalid;
    wire     [ 1:0] io_clint_bresp;

    // 地址译码
    wire addr_is_clint_ar = (arb_araddr >= 32'h1000_0048) && (arb_araddr <= 32'h1000_004f);

    reg  addr_is_clint_r;
    always @(posedge clock, posedge reset) begin
        if (reset)
            addr_is_clint_r <= 1'b0;
        else if (arb_arvalid && arb_arready)
            addr_is_clint_r <= addr_is_clint_ar;
    end

    // AR
    wire io_clint_arvalid = arb_arvalid && addr_is_clint_ar;
    wire [31:0] io_clint_araddr  = arb_araddr;
    wire io_clint_rready  = arb_rready && addr_is_clint_r;

    wire io_clint_awvalid = 1'b0;
    wire [31:0] io_clint_awaddr  = 32'b0;
    wire [31:0] io_clint_wdata  = 32'b0;
    wire [ 3:0] io_clint_wstrb  = 4'b0;
    wire io_clint_wvalid = 1'b0;
    wire io_clint_bready = 1'b0;

    // AR 通道输出 (IO pads) —— reset 期间关闭，防止 CPU 复位时误发 AXI 请求
    assign io_master_arvalid = arb_arvalid && !addr_is_clint_ar && !reset;
    assign io_master_araddr  = arb_araddr;
    assign io_master_arid    = arb_arid;
    assign io_master_arlen   = arb_arlen;
    assign io_master_arsize  = arb_arsize;
    assign io_master_arburst = arb_arburst;

    assign arb_arready = addr_is_clint_ar ? io_clint_arready : io_master_arready;

    // R 响应方向
    assign arb_rvalid = addr_is_clint_r ? io_clint_rvalid : io_master_rvalid;
    assign arb_rdata  = addr_is_clint_r ? io_clint_rdata  : io_master_rdata;
    assign arb_rresp  = addr_is_clint_r ? io_clint_rresp  : io_master_rresp;
    assign arb_rid    = addr_is_clint_r ? 4'h0             : io_master_rid;
    assign arb_rlast  = addr_is_clint_r ? 1'b1             : io_master_rlast;

    assign io_master_rready = arb_rready && !addr_is_clint_r;

    // AW 通道输出
    assign io_master_awvalid = arb_awvalid && !reset;
    assign io_master_awaddr  = arb_awaddr;
    assign io_master_awid    = arb_awid;
    assign io_master_awlen   = arb_awlen;
    assign io_master_awsize  = arb_awsize;
    assign io_master_awburst = arb_awburst;

    assign arb_awready = io_master_awready;

    // W 通道输出
    assign io_master_wvalid = arb_wvalid && !reset;
    assign io_master_wdata  = arb_wdata;
    assign io_master_wstrb  = arb_wstrb;
    assign io_master_wlast  = arb_wlast;

    assign arb_wready = io_master_wready;

    // B 通道
    assign arb_bvalid = io_master_bvalid;
    assign arb_bresp  = io_master_bresp;
    assign arb_bid    = io_master_bid;

    assign io_master_bready = arb_bready;

    // slave output 置零
    assign io_slave_arready = 1'b0;
    assign io_slave_rvalid  = 1'b0;
    assign io_slave_rdata   = 32'b0;
    assign io_slave_rresp   = 2'b0;
    assign io_slave_rid     = 4'b0;
    assign io_slave_rlast   = 1'b0;
    assign io_slave_awready = 1'b0;
    assign io_slave_wready  = 1'b0;
    assign io_slave_bvalid  = 1'b0;
    assign io_slave_bresp   = 2'b0;
    assign io_slave_bid     = 4'b0;

    ysyx_26010027_GPR R (
        .clock  (clock),
        .reset  (reset),
        .waddr (waddr),
        .wdata (wdata),
        .wen   (reg_w),
        .raddr1(rs1),
        .raddr2(rs2),
        .rdata1(rdata1),
        .rdata2(rdata2)
    );

    ysyx_26010027_CLINT my_CLINT (
        .clock     (clock),
        .reset     (reset),

        .io_slave_araddr (io_clint_araddr),
        .io_slave_arvalid(io_clint_arvalid),
        .io_slave_arready(io_clint_arready),

        .io_slave_rready (io_clint_rready),
        .io_slave_rvalid (io_clint_rvalid),
        .io_slave_rdata  (io_clint_rdata),
        .io_slave_rresp  (io_clint_rresp),

        .io_slave_awaddr (io_clint_awaddr),
        .io_slave_awvalid(io_clint_awvalid),
        .io_slave_awready(io_clint_awready),

        .io_slave_wdata (io_clint_wdata),
        .io_slave_wstrb (io_clint_wstrb),
        .io_slave_wvalid(io_clint_wvalid),
        .io_slave_wready(io_clint_wready),

        .io_slave_bresp (io_clint_bresp),
        .io_slave_bvalid(io_clint_bvalid),
        .io_slave_bready(io_clint_bready)
    );

    // ----- IFU (AXI4) -----
    wire        ifu_cpu_arvalid;
    wire        cpu_ifu_arready;
    wire [31:0] ifu_cpu_araddr;
    wire [ 3:0] ifu_cpu_arid;
    wire [ 7:0] ifu_cpu_arlen;
    wire [ 2:0] ifu_cpu_arsize;
    wire [ 1:0] ifu_cpu_arburst;

    wire        cpu_ifu_rvalid;
    wire        ifu_cpu_rready;
    wire [31:0] cpu_ifu_rdata;
    wire [ 1:0] cpu_ifu_rresp;
    wire [ 3:0] cpu_ifu_rid;
    wire        cpu_ifu_rlast;

    assign cpu_ifu_arready = (grant == IFU_GRANT) ? arb_arready : 1'b0;
    assign cpu_ifu_rvalid  = (grant == IFU_GRANT) ? arb_rvalid  : 1'b0;
    assign cpu_ifu_rdata   = (grant == IFU_GRANT) ? arb_rdata   : 32'b0;
    assign cpu_ifu_rresp   = (grant == IFU_GRANT) ? arb_rresp   : 2'b0;
    assign cpu_ifu_rid     = (grant == IFU_GRANT) ? arb_rid     : 4'b0;
    assign cpu_ifu_rlast   = (grant == IFU_GRANT) ? arb_rlast   : 1'b0;

    ysyx_26010027_IFU my_IFU (
        .clock    (clock),
        .reset    (reset),
        .n_pc     (n_pc),
        .pc       (pc),
        .inst     (inst),

        .cpu_ifu_arready(cpu_ifu_arready),
        .ifu_cpu_araddr (ifu_cpu_araddr),
        .ifu_cpu_arvalid(ifu_cpu_arvalid),
        .ifu_cpu_arid   (ifu_cpu_arid),
        .ifu_cpu_arlen  (ifu_cpu_arlen),
        .ifu_cpu_arsize (ifu_cpu_arsize),
        .ifu_cpu_arburst(ifu_cpu_arburst),

        .cpu_ifu_rvalid(cpu_ifu_rvalid),
        .ifu_cpu_rready(ifu_cpu_rready),
        .cpu_ifu_rdata (cpu_ifu_rdata),
        .cpu_ifu_rresp (cpu_ifu_rresp),
        .cpu_ifu_rid   (cpu_ifu_rid),
        .cpu_ifu_rlast (cpu_ifu_rlast),

        .ifu_stall (ifu_stall),
        .lsu_stall (lsu_stall)
    );

    ysyx_26010027_IDU my_IDU (
        .inst       (inst),
        .ifu_stall  (ifu_stall),
        .lsu_stall  (lsu_stall),
        .imm        (imm),
        .rs1        (rs1),
        .rs2        (rs2),
        .rd         (rd),
        .reg_w      (reg_w),
        .mem_w      (mem_w),
        .mem_r      (mem_r),
        .rf_res     (rf_res),
        .alu_op     (alu_op),
        .csr_we     (csr_we),
        .alu_arc1   (alu_arc1),
        .alu_arc2   (alu_arc2),
        .j_type     (j_type),
        .b_type     (b_type),
        .ebreak_type(ebreak_type)
    );

    ysyx_26010027_EXU my_EXU (
        .pc        (pc),
        .alu_op    (alu_op),
        .b_type    (b_type),
        .alu_arc1  (alu_arc1),
        .alu_arc2  (alu_arc2),
        .src1      (rdata1),
        .src2      (rdata2),
        .imm       (imm),
        .csr_result(csr_result),
        .res       (alu_result)
    );

    // ----- LSU (AXI4) -----
    wire        lsu_cpu_arvalid;
    wire        cpu_lsu_arready;
    wire [31:0] lsu_cpu_araddr;
    wire [ 3:0] lsu_cpu_arid;
    wire [ 7:0] lsu_cpu_arlen;
    wire [ 2:0] lsu_cpu_arsize;
    wire [ 1:0] lsu_cpu_arburst;

    wire        cpu_lsu_rvalid;
    wire        lsu_cpu_rready;
    wire [31:0] cpu_lsu_rdata;
    wire [ 1:0] cpu_lsu_rresp;
    wire [ 3:0] cpu_lsu_rid;
    wire        cpu_lsu_rlast;

    wire        lsu_cpu_awvalid;
    wire        cpu_lsu_awready;
    wire [31:0] lsu_cpu_awaddr;
    wire [ 3:0] lsu_cpu_awid;
    wire [ 7:0] lsu_cpu_awlen;
    wire [ 2:0] lsu_cpu_awsize;
    wire [ 1:0] lsu_cpu_awburst;

    wire        lsu_cpu_wvalid;
    wire        cpu_lsu_wready;
    wire [31:0] lsu_cpu_wdata;
    wire [ 3:0] lsu_cpu_wstrb;
    wire        lsu_cpu_wlast;

    wire        cpu_lsu_bvalid;
    wire        lsu_cpu_bready;
    wire [ 1:0] cpu_lsu_bresp;
    wire [ 3:0] cpu_lsu_bid;

    assign cpu_lsu_arready = (grant == LSU_GRANT) ? arb_arready : 1'b0;
    assign cpu_lsu_rvalid  = (grant == LSU_GRANT) ? arb_rvalid  : 1'b0;
    assign cpu_lsu_rdata   = (grant == LSU_GRANT) ? arb_rdata   : 32'b0;
    assign cpu_lsu_rresp   = (grant == LSU_GRANT) ? arb_rresp   : 2'b0;
    assign cpu_lsu_rid     = (grant == LSU_GRANT) ? arb_rid     : 4'b0;
    assign cpu_lsu_rlast   = (grant == LSU_GRANT) ? arb_rlast   : 1'b0;
    assign cpu_lsu_awready = (grant == LSU_GRANT) ? arb_awready : 1'b0;
    assign cpu_lsu_wready  = (grant == LSU_GRANT) ? arb_wready  : 1'b0;
    assign cpu_lsu_bvalid  = (grant == LSU_GRANT) ? arb_bvalid  : 1'b0;
    assign cpu_lsu_bresp   = (grant == LSU_GRANT) ? arb_bresp   : 2'b0;
    assign cpu_lsu_bid     = (grant == LSU_GRANT) ? arb_bid     : 4'b0;

    ysyx_26010027_LSU my_LSU (
        .clock           (clock),
        .reset           (reset),
        .mem_w           (mem_w),
        .mem_r           (mem_r),
        .addr            (alu_result),
        .wdata           (rdata2),

        .cpu_lsu_arready(cpu_lsu_arready),
        .lsu_cpu_araddr (lsu_cpu_araddr),
        .lsu_cpu_arvalid(lsu_cpu_arvalid),
        .lsu_cpu_arid   (lsu_cpu_arid),
        .lsu_cpu_arlen  (lsu_cpu_arlen),
        .lsu_cpu_arsize (lsu_cpu_arsize),
        .lsu_cpu_arburst(lsu_cpu_arburst),

        .lsu_cpu_rready (lsu_cpu_rready),
        .cpu_lsu_rvalid (cpu_lsu_rvalid),
        .cpu_lsu_rdata  (cpu_lsu_rdata),
        .cpu_lsu_rresp  (cpu_lsu_rresp),
        .cpu_lsu_rid    (cpu_lsu_rid),
        .cpu_lsu_rlast  (cpu_lsu_rlast),

        .cpu_lsu_awready(cpu_lsu_awready),
        .lsu_cpu_awaddr (lsu_cpu_awaddr),
        .lsu_cpu_awvalid(lsu_cpu_awvalid),
        .lsu_cpu_awid   (lsu_cpu_awid),
        .lsu_cpu_awlen  (lsu_cpu_awlen),
        .lsu_cpu_awsize (lsu_cpu_awsize),
        .lsu_cpu_awburst(lsu_cpu_awburst),

        .cpu_lsu_wready (cpu_lsu_wready),
        .lsu_cpu_wdata  (lsu_cpu_wdata),
        .lsu_cpu_wstrb  (lsu_cpu_wstrb),
        .lsu_cpu_wvalid (lsu_cpu_wvalid),
        .lsu_cpu_wlast  (lsu_cpu_wlast),

        .cpu_lsu_bresp  (cpu_lsu_bresp),
        .cpu_lsu_bvalid (cpu_lsu_bvalid),
        .lsu_cpu_bready (lsu_cpu_bready),
        .cpu_lsu_bid    (cpu_lsu_bid),

        .out_data       (mem_result),
        .lsu_stall      (lsu_stall),
        .ifu_stall      (ifu_stall)
    );

    ysyx_26010027_WBU my_WBU (
        .pc        (pc),
        .rd        (rd),
        .rf_res    (rf_res),
        .j_type    (j_type),
        .b_type    (b_type),
        .alu_result(alu_result),
        .mem_result(mem_result),
        .csr_result(csr_result),
        .mepc      (out_mepc),
        .mtvec     (out_mtvec),
        .reg_w     (reg_w),
        .waddr     (waddr),
        .wdata     (wdata),
        .n_pc      (n_pc)
    );

    ysyx_26010027_CSR my_CSR (
        .clock       (clock),
        .reset       (reset),
        .j_type     (j_type),
        .csr_addr   (imm[11:0]),
        .csr_wdata  (alu_result),
        .csr_rdata  (csr_result),
        .pc         (pc),
        .csr_we     (csr_we),
        .out_mepc   (out_mepc),
        .out_mtvec  (out_mtvec),

        .ifu_stall  (ifu_stall)
    );

    // ----- Arbiter -----
    reg [1:0] grant;

    localparam IFU_GRANT = 2'b01;
    localparam LSU_GRANT = 2'b10;

    // 事务完成时握手信号
    wire handshake_ifu_r = cpu_ifu_rvalid && ifu_cpu_rready && (cpu_ifu_rresp == 2'b00);
    wire handshake_lsu_r = cpu_lsu_rvalid  && lsu_cpu_rready  && (cpu_lsu_rresp  == 2'b00);
    wire handshake_lsu_b = cpu_lsu_bvalid  && lsu_cpu_bready  && (cpu_lsu_bresp  == 2'b00);

    // arbiter -> 下游总线
    assign arb_arvalid  = (grant == IFU_GRANT) ? ifu_cpu_arvalid : lsu_cpu_arvalid;
    assign arb_araddr   = (grant == IFU_GRANT) ? ifu_cpu_araddr  : lsu_cpu_araddr;
    assign arb_arid     = (grant == IFU_GRANT) ? ifu_cpu_arid    : lsu_cpu_arid;
    assign arb_arlen    = (grant == IFU_GRANT) ? ifu_cpu_arlen   : lsu_cpu_arlen;
    assign arb_arsize   = (grant == IFU_GRANT) ? ifu_cpu_arsize  : lsu_cpu_arsize;
    assign arb_arburst  = (grant == IFU_GRANT) ? ifu_cpu_arburst : lsu_cpu_arburst;
    assign arb_rready   = (grant == IFU_GRANT) ? ifu_cpu_rready  : lsu_cpu_rready;

    assign arb_awvalid  = (grant == LSU_GRANT) ? lsu_cpu_awvalid : 1'b0;
    assign arb_awaddr   = lsu_cpu_awaddr;
    assign arb_awid     = lsu_cpu_awid;
    assign arb_awlen    = lsu_cpu_awlen;
    assign arb_awsize   = lsu_cpu_awsize;
    assign arb_awburst  = lsu_cpu_awburst;
    assign arb_wvalid   = lsu_cpu_wvalid;
    assign arb_wdata    = lsu_cpu_wdata;
    assign arb_wstrb    = lsu_cpu_wstrb;
    assign arb_wlast    = lsu_cpu_wlast;
    assign arb_bready   = lsu_cpu_bready;

    always @(posedge clock, posedge reset) begin
        if (reset) begin
            grant <= IFU_GRANT;
        end else begin
            case (grant)
                IFU_GRANT:
                    if (handshake_ifu_r) begin
                        if (lsu_cpu_arvalid || lsu_cpu_awvalid)
                            grant <= LSU_GRANT;
                    end
                    else grant <= IFU_GRANT;

                LSU_GRANT:
                    if (handshake_lsu_r || handshake_lsu_b)
                        grant <= IFU_GRANT;
                    else grant <= LSU_GRANT;
                default: grant <= IFU_GRANT;
            endcase
        end
    end

    always @(posedge clock) begin
        if (j_type == 2'b01 && !ifu_stall) begin
            ftrace_print(pc, n_pc, {27'b0, rd}, {27'b0, rs1});
        end

        if (ebreak_type && !ifu_stall) begin
            ebreak();
            $display("ebreak at PC = 0x%h Inst = 0x%h", pc, inst);
        end
    end

endmodule
