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
    output [31:0] cur_pc,
    output [31:0] cur_inst

    // ----- AXI4 -----
    // input         io_master_awready,
    // output        io_master_awvalid,
    // output [31:0] io_master_awaddr,
    // output [ 3:0] io_master_awid,
    // output [ 7:0] io_master_awlen,
    // output [ 2:0] io_master_awsize,
    // output [ 1:0] io_master_awburst,

    // input         io_master_wready,
    // output        io_master_wvalid,
    // output [31:0] io_master_wdata,
    // output [ 3:0] io_master_wstrb,
    // output        io_master_wlast,
    // input         io_master_bvalid,
    // output        io_master_bready,
    // input  [ 1:0] io_master_bresp,
    // input  [ 3:0] io_master_bid,

    // input         io_master_arready,
    // output        io_master_arvalid,
    // output [31:0] io_master_araddr,
    // output [ 3:0] io_master_arid,
    // output [ 7:0] io_master_arlen,
    // output [ 2:0] io_master_arsize,
    // output [ 1:0] io_master_arburst,

    // output        io_master_rready,
    // input         io_master_rvalid,
    // input  [31:0] io_master_rdata,
    // input  [ 1:0] io_master_rresp,
    // input  [ 3:0] io_master_rid,
    // input         io_master_rlast,

    // input         io_interrupt
    // ---------------

);
    // ----- AXI-Lite -----
    wire     [31:0] io_master_araddr;
    wire            io_master_arvalid;
    wire            io_master_arready;

    wire            io_master_rready;
    wire     [31:0] io_master_rdata;
    wire            io_master_rvalid;
    wire     [ 1:0] io_master_rresp;

    wire     [31:0] io_master_awaddr;
    wire            io_master_awvalid;
    wire            io_master_awready;

    wire     [31:0] io_master_wdata;
    wire     [ 3:0] io_master_wstrb;
    wire            io_master_wvalid;
    wire            io_master_wready;

    wire     [ 1:0] io_master_bresp;
    wire            io_master_bvalid;
    wire            io_master_bready;

    // ----- 内部信号 -----
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

    ysyx_26010027_GPR R (
        .clock  (clock),
        .waddr (waddr),
        .wdata (wdata),
        .wen   (reg_w),
        .raddr1(rs1),
        .raddr2(rs2),
        .rdata1(rdata1),
        .rdata2(rdata2)
    );

    ysyx_26010027_SRAM my_SRAM (
        .clock     (clock),
        .reset     (reset),

        .io_slave_araddr (io_master_araddr),
        .io_slave_arvalid(io_master_arvalid),
        .io_slave_arready(io_master_arready),

        .io_slave_rready (io_master_rready),
        .io_slave_rvalid (io_master_rvalid),
        .io_slave_rdata  (io_master_rdata),
        .io_slave_rresp  (io_master_rresp),

        .io_slave_awaddr (io_master_awaddr),
        .io_slave_awvalid(io_master_awvalid),
        .io_slave_awready(io_master_awready),

        .io_slave_wdata (io_master_wdata),
        .io_slave_wstrb (io_master_wstrb),
        .io_slave_wvalid(io_master_wvalid),
        .io_slave_wready(io_master_wready),

        .io_slave_bresp (io_master_bresp),
        .io_slave_bvalid(io_master_bvalid),
        .io_slave_bready(io_master_bready),

        .w_pending      (w_pending)
    );

    // ----- IFU AXI-Lite -----
    wire        ifu_rom_arvalid;
    wire        rom_ifu_arready;
    wire [31:0] ifu_rom_araddr;

    wire        rom_ifu_rvalid;
    wire        ifu_rom_rready;
    wire [31:0] rom_ifu_rdata;
    wire [ 1:0] rom_ifu_rresp;

    assign rom_ifu_arready = (grant == IFU_GRANT) ? io_master_arready : 1'b0;
    assign rom_ifu_rvalid  = (grant == IFU_GRANT) ? io_master_rvalid  : 1'b0;
    assign rom_ifu_rdata   = (grant == IFU_GRANT) ? io_master_rdata   : 32'b0;
    assign rom_ifu_rresp   = (grant == IFU_GRANT) ? io_master_rresp   : 2'b0;

    ysyx_26010027_IFU my_IFU (
        .clock    (clock),
        .reset    (reset),
        .n_pc     (n_pc),
        .pc       (pc),
        .inst     (inst),

        // AXI-Lite AR
        .rom_ifu_arready(rom_ifu_arready),
        .ifu_rom_araddr (ifu_rom_araddr),
        .ifu_rom_arvalid(ifu_rom_arvalid),

        // AXI-Lite R
        .rom_ifu_rvalid(rom_ifu_rvalid),
        .ifu_rom_rready(ifu_rom_rready),
        .rom_ifu_rdata (rom_ifu_rdata),
        .rom_ifu_rresp (rom_ifu_rresp),

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

    // ----- LSU AXI-Lite -----
    wire        lsu_ram_arvalid;
    wire        ram_lsu_arready;
    wire [31:0] lsu_ram_araddr;

    wire        ram_lsu_rvalid; 
    wire        lsu_ram_rready;
    wire [31:0] ram_lsu_rdata;
    wire [ 1:0] ram_lsu_rresp;

    wire        lsu_ram_awvalid;
    wire        ram_lsu_awready;
    wire [31:0] lsu_ram_awaddr;

    wire        lsu_ram_wvalid;
    wire        ram_lsu_wready;
    wire [31:0] lsu_ram_wdata;
    wire [ 3:0] lsu_ram_wstrb;

    wire        ram_lsu_bvalid;
    wire        lsu_ram_bready;
    wire [ 1:0] ram_lsu_bresp;


    assign ram_lsu_arready = (grant == LSU_GRANT) ? io_master_arready : 1'b0;

    assign ram_lsu_rvalid  = (grant == LSU_GRANT) ? io_master_rvalid  : 1'b0;
    assign ram_lsu_rdata   = (grant == LSU_GRANT) ? io_master_rdata   : 32'b0;
    assign ram_lsu_rresp   = (grant == LSU_GRANT) ? io_master_rresp   : 2'b0;

    assign ram_lsu_awready = (grant == LSU_GRANT) ? io_master_awready : 1'b0;
    assign ram_lsu_wready  = (grant == LSU_GRANT) ? io_master_wready  : 1'b0;

    assign ram_lsu_bvalid  = (grant == LSU_GRANT) ? io_master_bvalid  : 1'b0;
    assign ram_lsu_bresp   = (grant == LSU_GRANT) ? io_master_bresp   : 2'b0;

    ysyx_26010027_LSU my_LSU (
        .clock           (clock),
        .reset           (reset),
        .mem_w          (mem_w),
        .mem_r          (mem_r),
        .addr           (alu_result),
        .wdata          (rdata2),

        // AR
        .ram_lsu_arready(ram_lsu_arready),
        .lsu_ram_araddr (lsu_ram_araddr),
        .lsu_ram_arvalid(lsu_ram_arvalid),

        // R
        .lsu_ram_rready (lsu_ram_rready),
        .ram_lsu_rvalid (ram_lsu_rvalid),
        .ram_lsu_rdata  (ram_lsu_rdata),
        .ram_lsu_rresp  (ram_lsu_rresp),

        // AW
        .ram_lsu_awready(ram_lsu_awready),
        .lsu_ram_awaddr (lsu_ram_awaddr),
        .lsu_ram_awvalid(lsu_ram_awvalid),

        // W
        .ram_lsu_wready (ram_lsu_wready),
        .lsu_ram_wdata  (lsu_ram_wdata),
        .lsu_ram_wstrb  (lsu_ram_wstrb),
        .lsu_ram_wvalid (lsu_ram_wvalid),

        // B
        .ram_lsu_bresp  (ram_lsu_bresp),
        .ram_lsu_bvalid (ram_lsu_bvalid),
        .lsu_ram_bready (lsu_ram_bready),

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

    always @(posedge clock) begin
        if (j_type == 2'b01 && !ifu_stall) begin
            ftrace_print(pc, n_pc, {27'b0, rd}, {27'b0, rs1});
        end

        if (ebreak_type && !ifu_stall) begin
            ebreak();
            $display("ebreak at PC = 0x%h Inst = 0x%h", pc, inst);
        end
    end

    assign cur_pc   = pc;
    assign cur_inst = inst;
    
    // Arbiter
    reg [1:0] grant;
    reg       w_pending;

    localparam IFU_GRANT = 2'b01;
    localparam LSU_GRANT = 2'b10;

    // 握手信号
    wire handshake_ifu_resp = rom_ifu_rvalid && ifu_rom_rready && (rom_ifu_rresp == 2'b00);
    wire handshake_lsu_r    = ram_lsu_rvalid  && lsu_ram_rready  && (ram_lsu_rresp  == 2'b00);
    wire handshake_lsu_b    = ram_lsu_bvalid  && lsu_ram_bready  && (ram_lsu_bresp  == 2'b00);

    // output signals
    assign io_master_arvalid = (grant == IFU_GRANT) ? ifu_rom_arvalid : lsu_ram_arvalid;
    assign io_master_araddr  = (grant == IFU_GRANT) ? ifu_rom_araddr  : lsu_ram_araddr;

    assign io_master_rready  = (grant == IFU_GRANT) ? ifu_rom_rready  : lsu_ram_rready;

    assign io_master_awvalid = (grant == LSU_GRANT) ? lsu_ram_awvalid : 1'b0;
    assign io_master_awaddr  = lsu_ram_awaddr;

    assign io_master_wvalid  = lsu_ram_wvalid;
    assign io_master_wdata   = lsu_ram_wdata;
    assign io_master_wstrb   = lsu_ram_wstrb;

    assign io_master_bready  = lsu_ram_bready;

    always @(posedge clock, posedge reset) begin
        if (reset) begin
            grant <= IFU_GRANT;
        end else begin
            // grant 状态机
            case (grant)
                IFU_GRANT:
                    if (handshake_ifu_resp) begin
                        if (lsu_ram_arvalid || lsu_ram_awvalid || w_pending) grant <= LSU_GRANT;
                    end
                    else grant <= IFU_GRANT;

                LSU_GRANT:
                    if (handshake_lsu_r || handshake_lsu_b) begin
                        grant <= IFU_GRANT;
                    end
                    else grant <= LSU_GRANT;
                default: grant <= IFU_GRANT;
            endcase
        end
    end

endmodule
