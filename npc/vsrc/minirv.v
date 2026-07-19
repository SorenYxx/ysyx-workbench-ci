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

    wire        ifu_rom_reqValid;
    wire        rom_ifu_respValid;
    wire        rom_ifu_reqReady;
    wire        ifu_rom_respReady;
    wire        lsu_ram_reqValid;
    wire        ram_lsu_respValid;
    wire        ram_lsu_reqReady;
    wire        lsu_ram_respReady;

    wire [31:0] rom_ifu_rdata, ifu_rom_raddr;
    wire [31:0] inst;
    wire [31:0] pc, n_pc;

    wire [31:0] ram_lsu_rdata, lsu_ram_addr, lsu_ram_wdata;
    wire        lsu_ram_wen;
    wire [ 3:0] lsu_ram_wmask;

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

        .ifu_rom_raddr      (ifu_rom_raddr),
        .rom_ifu_rdata      (rom_ifu_rdata),
        .ifu_rom_reqValid   (ifu_rom_reqValid),
        .rom_ifu_respValid  (rom_ifu_respValid),
        .ifu_rom_respReady  (ifu_rom_respReady),
        .rom_ifu_reqReady   (rom_ifu_reqReady),

        .lsu_ram_addr       (lsu_ram_addr),
        .lsu_ram_wen        (lsu_ram_wen),
        .lsu_ram_wdata      (lsu_ram_wdata),
        .lsu_ram_wmask      (lsu_ram_wmask),
        .ram_lsu_rdata      (ram_lsu_rdata),
        .lsu_ram_reqValid   (lsu_ram_reqValid),
        .ram_lsu_respValid  (ram_lsu_respValid),
        .lsu_ram_respReady  (lsu_ram_respReady),
        .ram_lsu_reqReady   (ram_lsu_reqReady)

    );

    IFU my_IFU (
        .rom_ifu_rdata   (rom_ifu_rdata),
        .ifu_rom_raddr   (ifu_rom_raddr),
        .rom_ifu_respValid(rom_ifu_respValid),
        .ifu_rom_reqValid(ifu_rom_reqValid),
        .rom_ifu_reqReady(rom_ifu_reqReady),
        .ifu_rom_respReady(ifu_rom_respReady),

        .clk      (clk),
        .rst      (rst),
        .n_pc     (n_pc),
        .pc       (pc),
        .inst     (inst),
        .ifu_stall  (ifu_stall),
        .lsu_stall(lsu_stall)

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
        .clk          (clk),
        .rst          (rst),
        .mem_w        (mem_w),
        .mem_r        (mem_r),
        .addr         (alu_result),
        .wdata        (rdata2),

        .ram_lsu_respValid  (ram_lsu_respValid),
        .lsu_ram_reqValid   (lsu_ram_reqValid),
        .ram_lsu_reqReady   (ram_lsu_reqReady),
        .lsu_ram_respReady  (lsu_ram_respReady),
        .ram_lsu_rdata      (ram_lsu_rdata),
        .lsu_ram_addr       (lsu_ram_addr),
        .lsu_ram_wen        (lsu_ram_wen),
        .lsu_ram_wdata      (lsu_ram_wdata),
        .lsu_ram_wmask      (lsu_ram_wmask),

        .out_data     (mem_result),
        .lsu_stall    (lsu_stall),

        .ifu_stall    (ifu_stall)
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

        .ifu_stall    (ifu_stall)
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
