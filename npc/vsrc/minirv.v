import "DPI-C" function void ebreak();
import "DPI-C" function void ftrace_print(int pc, int target, int rd, int rs1);
import "DPI-C" function int  pmem_read(input int raddr);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input int wmask);
import "DPI-C" function void is_illegal_inst();
import "DPI-C" function void get_reg(input int waddr, input int r);
import "DPI-C" function void get_csr(input int csr, input int data);

module minirv (
    input         clk,
    input         rst,
    output [31:0] cur_pc,
    output [31:0] cur_inst
);

    // ===== IFU ↔ RegisterFile (AXI-Lite: AR + R) =====
    wire        ifu_rom_arvalid;
    wire        rom_ifu_arready;
    wire [31:0] ifu_rom_araddr;

    wire        rom_ifu_rvalid;
    wire        ifu_rom_rready;
    wire [31:0] rom_ifu_rdata;
    wire [ 1:0] rom_ifu_rresp;

    // ===== LSU ↔ RegisterFile (AXI-Lite: AR + R + AW + W + B) =====
    wire        lsu_ram_arvalid;
    wire        ram_lsu_arready;
    wire [31:0] lsu_ram_araddr;

    wire        ram_lsu_rvalid;      // FIXME: 方向反了，应为 ram_lsu_rvalid(slave→master)
    wire        lsu_ram_rready;      // FIXME: 方向反了，应为 lsu_ram_rready(master→slave)
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

    // ===== 内部信号 =====
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

    GPR R (
        .clk   (clk),
        .waddr (waddr),
        .wdata (wdata),
        .wen   (reg_w),
        .raddr1(rs1),
        .raddr2(rs2),
        .rdata1(rdata1),
        .rdata2(rdata2)
    );

    RegisterFile my_RegisterFile (
        .clk      (clk),
        .rst      (rst),

        // IFU (AXI-Lite AR + R)
        .ifu_rom_araddr (ifu_rom_araddr),
        .ifu_rom_arvalid(ifu_rom_arvalid),
        .rom_ifu_arready(rom_ifu_arready),

        .ifu_rom_rready (ifu_rom_rready),
        .rom_ifu_rdata  (rom_ifu_rdata),
        .rom_ifu_rvalid (rom_ifu_rvalid),
        .rom_ifu_rresp  (rom_ifu_rresp),

        // LSU (AXI-Lite AR + R)
        .lsu_ram_araddr (lsu_ram_araddr),
        .lsu_ram_arvalid(lsu_ram_arvalid),
        .ram_lsu_arready(ram_lsu_arready),

        .lsu_ram_rready (lsu_ram_rready),
        .ram_lsu_rvalid (ram_lsu_rvalid),
        .ram_lsu_rdata  (ram_lsu_rdata),
        .ram_lsu_rresp  (ram_lsu_rresp),

        // LSU (AXI-Lite AW)
        .lsu_ram_awaddr (lsu_ram_awaddr),
        .lsu_ram_awvalid(lsu_ram_awvalid),
        .ram_lsu_awready(ram_lsu_awready),

        // LSU (AXI-Lite W)
        .lsu_ram_wdata (lsu_ram_wdata),
        .lsu_ram_wstrb (lsu_ram_wstrb),
        .lsu_ram_wvalid(lsu_ram_wvalid),
        .ram_lsu_wready(ram_lsu_wready),

        // LSU (AXI-Lite B)
        .ram_lsu_bresp (ram_lsu_bresp),
        .ram_lsu_bvalid(ram_lsu_bvalid),
        .lsu_ram_bready(lsu_ram_bready)
    );

    IFU my_IFU (
        .clk      (clk),
        .rst      (rst),
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

    IDU my_IDU (
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

    EXU my_EXU (
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

    LSU my_LSU (
        .clk   (clk),
        .rst   (rst),
        .mem_w (mem_w),
        .mem_r (mem_r),
        .addr  (alu_result),
        .wdata (rdata2),

        // AXI-Lite AR
        .ram_lsu_arready(ram_lsu_arready),
        .lsu_ram_araddr (lsu_ram_araddr),
        .lsu_ram_arvalid(lsu_ram_arvalid),

        // AXI-Lite R
        .lsu_ram_rready(lsu_ram_rready),
        .ram_lsu_rvalid(ram_lsu_rvalid),
        .ram_lsu_rdata (ram_lsu_rdata),
        .ram_lsu_rresp (ram_lsu_rresp),

        // AXI-Lite AW
        .ram_lsu_awready(ram_lsu_awready),
        .lsu_ram_awaddr (lsu_ram_awaddr),
        .lsu_ram_awvalid(lsu_ram_awvalid),

        // AXI-Lite W
        .ram_lsu_wready(ram_lsu_wready),
        .lsu_ram_wdata (lsu_ram_wdata),
        .lsu_ram_wstrb (lsu_ram_wstrb),
        .lsu_ram_wvalid(lsu_ram_wvalid),

        // AXI-Lite B
        .ram_lsu_bresp (ram_lsu_bresp),
        .ram_lsu_bvalid(ram_lsu_bvalid),
        .lsu_ram_bready(lsu_ram_bready),

        .out_data  (mem_result),
        .lsu_stall (lsu_stall),
        .ifu_stall (ifu_stall)
    );

    WBU my_WBU (
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

    CSR my_CSR (
        .clk        (clk),
        .rst        (rst),
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

    always @(posedge clk) begin
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

endmodule
