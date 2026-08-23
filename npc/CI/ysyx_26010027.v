`ifndef __ICARUS__
import "DPI-C" function void finish_sim();
import "DPI-C" function void ftrace_print(int pc, int target, int rd, int rs1);
import "DPI-C" function int  pmem_read(input int raddr);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input int wmask);
import "DPI-C" function void is_illegal_inst();
import "DPI-C" function void get_reg(input int waddr, input int r);
import "DPI-C" function void get_csr(input int csr, input int data);
import "DPI-C" function void get_cpu_state(input int lsu_get_data, input int lsu_w_data, input int exu_done, input int alu_we, input int csr_we, input int cpu_jump, input int cpu_branch, input int icache_hit, input int icache_miss, input int icache_miss_latency);
import "DPI-C" function void cpu_trace(input int pc, input int inst);
import "DPI-C" function void ifu_trace(input int pc, input int inst);
`endif

/* verilator lint_off UNUSEDSIGNAL */
module ysyx_26010027_CLINT (
    input             clock,
    input             reset,

    // ----------- AXI-Lite -----------
    input      [31:0] io_slave_araddr,
    input             io_slave_arvalid,
    output            io_slave_arready,

    input             io_slave_rready,
    output     [31:0] io_slave_rdata,
    output reg        io_slave_rvalid,
    output reg [ 1:0] io_slave_rresp,

    input      [31:0] io_slave_awaddr,
    input             io_slave_awvalid,
    output            io_slave_awready,

    input      [31:0] io_slave_wdata,
    input      [ 3:0] io_slave_wstrb,
    input             io_slave_wvalid,
    output            io_slave_wready,

    output     [ 1:0] io_slave_bresp,
    output            io_slave_bvalid,
    input             io_slave_bready
);

    assign io_slave_awready = 1'b0;
    assign io_slave_wready  = 1'b0;
    assign io_slave_bvalid  = 1'b0;
    assign io_slave_bresp   = 2'b0;
    // assign io_slave_bid     = 4'b0;

    // mtime 计时器
    reg [31:0] mtime_low, mtime_high;

    always @(posedge clock, posedge reset) begin
        if (reset) begin
            mtime_low <= 32'h0;
            mtime_high <= 32'h0;
        end
        else begin
            mtime_low <= mtime_low + 32'h1;
            if (mtime_low == 32'hFFFF_FFFF) // 溢出进位
                mtime_high <= mtime_high + 32'h1;
        end
    end

    // 状态机
    reg [1:0] state_r;
    localparam IDLE = 2'b00;
    localparam BUSY = 2'b01;

    wire handshake_ar = io_slave_arvalid && io_slave_arready;
    wire handshake_r  = io_slave_rvalid && io_slave_rready;

    assign io_slave_arready = (state_r == IDLE);
    // assign io_slave_rid     = 4'b0;
    // assign io_slave_rlast   = 1'b1;

    reg [31:0] rdata;

    always @(posedge clock, posedge reset) begin
        if (reset) begin
            state_r         <= IDLE;
            io_slave_rvalid <= 1'b0;
            rdata           <= 32'b0;
            io_slave_rresp  <= 2'b0;
        end else begin
            case (state_r)
                IDLE: begin
                    if (handshake_ar) begin
                        state_r         <= BUSY;
                        io_slave_rvalid <= 1'b1;
                        io_slave_rresp  <= 2'b0;
                        case (io_slave_araddr[3:2])
                            2'b00: rdata <= mtime_low;
                            2'b01: rdata <= mtime_high;
                            default: rdata <= 32'b0;
                        endcase
                    end
                end
                BUSY: begin
                    if (handshake_r) begin
                        state_r         <= IDLE;
                        io_slave_rvalid <= 1'b0;
                    end
                end
                default: state_r <= IDLE;
            endcase
        end
    end

    assign io_slave_rdata = rdata;

endmodule
module ysyx_26010027_CSR (
    input              clock,
    input              reset,
    input              csr_ecall,
    input              csr_mret,
    input       [11:0] csr_raddr,
    input       [11:0] csr_waddr,
    input       [31:0] csr_wdata,
    output      [31:0] csr_rdata,
    output      [31:0] csr_mtvec,
    output      [31:0] csr_mepc,
    input       [31:0] pc,
    input  wire        csr_we

);

    reg [31:0] mvendorid = 32'h79737978;  // "ysyx"
    reg [31:0] marchid   = 32'h18CE1AB;   // "26010027"

    reg [31:0] mstatus;
    reg [31:0] mtvec;
    reg [31:0] mepc;
    reg [31:0] mcause;
    reg [63:0] mc;

    wire [31:0] mcycle  = mc[31:0];
    wire [31:0] mcycleh = mc[63:32];

    // Write
    always @(posedge clock, posedge reset) begin
        if (reset) begin
            mc      <= 0;
            mstatus <= 0;
            mtvec   <= 0;
            mepc    <= 0;
            mcause  <= 0;
        end else begin
            mc <= mc + 1;

            if (csr_ecall) begin  // ecall
                mepc   <= pc;
                mcause <= 32'd11;  // M-mode
`ifndef __ICARUS__
                get_csr({20'b0, 12'h341}, pc);
                get_csr({20'b0, 12'h342}, 32'd11);
`endif
            end else if (csr_we && !csr_ecall && !csr_mret) begin
`ifndef __ICARUS__
                get_csr({20'b0, csr_waddr}, csr_wdata);
`endif
                case (csr_waddr)
                    12'h300: mstatus <= csr_wdata;
                    12'h305: mtvec   <= csr_wdata;
                    12'h341: mepc    <= csr_wdata;
                    12'h342: mcause  <= csr_wdata;
                    default: begin
`ifndef __ICARUS__
                        $display("Warning: Write to unknown CSR address %h", csr_waddr);
`endif
                    end
                endcase
            end
        end
    end

    // Read
    assign csr_rdata = (csr_raddr == csr_waddr && csr_we) ? csr_wdata : // 写回前递
                       (csr_raddr == 12'hf11) ? mvendorid :
                       (csr_raddr == 12'hf12) ? marchid :
                       (csr_raddr == 12'hB00) ? mcycle :
                       (csr_raddr == 12'hB80) ? mcycleh :
                       (csr_raddr == 12'h300) ? mstatus :
                       (csr_raddr == 12'h305) ? mtvec :
                       (csr_raddr == 12'h341) ? mepc :
                       (csr_raddr == 12'h342) ? mcause : 0;

    assign csr_mtvec = mtvec;
    assign csr_mepc  = mepc;

endmodule
module ysyx_26010027_GPR #(
    parameter ADDR_WIDTH = 4,
    parameter DATA_WIDTH = 32
) (
    input               clock,
    input               reset,
    input       [ 4:0]  waddr,
    input       [31:0]  wdata,
    input               wen,
    input       [ 4:0]  raddr1,
    input       [ 4:0]  raddr2,
    output      [31:0]  rdata1,
    output      [31:0]  rdata2
);

    reg [DATA_WIDTH-1:0] rf [15:0];

    integer i;
    always @(posedge clock, posedge reset) begin
        if (reset) begin
            for (i = 0; i < 16; i = i + 1) begin
                rf[i] <= 0;
            end
        end else if (wen && (waddr != 0)) begin
            rf[waddr[ADDR_WIDTH-1:0]] <= wdata;
`ifndef __ICARUS__
            get_reg({27'b0, waddr}, wdata);
`endif
        end
    end

    assign rdata1 = (raddr1 == 0) ? 32'b0 :
                    (wen && (waddr[ADDR_WIDTH-1:0] == raddr1[ADDR_WIDTH-1:0])) ? wdata :
                    rf[raddr1[ADDR_WIDTH-1:0]];
    assign rdata2 = (raddr2 == 0) ? 32'b0 :
                    (wen && (waddr[ADDR_WIDTH-1:0] == raddr2[ADDR_WIDTH-1:0])) ? wdata :
                    rf[raddr2[ADDR_WIDTH-1:0]];

endmodule
`ifdef TOP_SOC
  `define ysyx_26010027_PC_START 32'h3000_0000
`else
  `define ysyx_26010027_PC_START 32'h8000_0000
`endif

module ysyx_26010027_IFU (
    input             clock,
    input             reset,
    output reg        ifu_idu_valid,
    input             idu_ifu_ready,

    output reg [31:0] ifu_idu_pc,
    output reg [31:0] ifu_idu_inst,

    input             exu_flush,
    input      [31:0] exu_flush_pc,

    // ----------- AXI4 -----------
    input             cpu_ifu_arready,
    output     [31:0] ifu_cpu_araddr,
    output            ifu_cpu_arvalid,
    output     [ 3:0] ifu_cpu_arid,
    output     [ 7:0] ifu_cpu_arlen,
    output     [ 2:0] ifu_cpu_arsize,
    output     [ 1:0] ifu_cpu_arburst,

    input             cpu_ifu_rvalid,
    output            ifu_cpu_rready,
    input      [31:0] cpu_ifu_rdata,
    input      [ 1:0] cpu_ifu_rresp,
    input      [ 3:0] cpu_ifu_rid,
    input             cpu_ifu_rlast
    // --------------------------------

);
    // 预译码
    wire [31:0] inst = ifu_idu_inst;
    wire [ 6:0] opcode = inst[6:0];
    wire [31:0] imm_B = {{20{inst[31]}}, inst[7], inst[30:25], inst[11:8], 1'b0};
    wire [31:0] imm_J = {{11{inst[31]}}, inst[31], inst[19:12], inst[20], inst[30:21], 1'b0};
    wire branch = (opcode == 7'b1100011);
    wire jump   = (opcode == 7'b1101111); // jal

    // state
    reg [1:0] state;
    localparam IDLE = 2'b00;
    localparam WAIT = 2'b01;

    // AR 事务锁存
    reg        arvalid_q;
    reg [31:0] araddr_q;
    reg        flush_q;
    reg        flush_ar_sent; // 冲刷后 AR 已发出

    wire ar_flag      = (state == IDLE) && idu_ifu_ready && !arvalid_q; // 取指flag ready反压
    wire handshake_ar = arvalid_q && cpu_ifu_arready;
    wire handshake_r  = cpu_ifu_rvalid && ifu_cpu_rready && (cpu_ifu_rresp == 2'b00);

    // State machine
    always @(posedge clock, posedge reset) begin
        if (reset)
            state <= IDLE;
        else
            case (state)
                IDLE: if (handshake_ar) state <= WAIT;
                WAIT: if (handshake_r) state <= IDLE;
                default: state <= IDLE;
            endcase
    end

    // 预取下一条指令地址（分支预测：branch/jal 一定跳转）
    wire [31:0] next_pc = branch ? (ifu_idu_pc + imm_B) :
                          jump   ? (ifu_idu_pc + imm_J) :
                                   (ifu_idu_pc + 4);

    // AR 锁存(避免反压造成毛刺)
    always @(posedge clock, posedge reset) begin
        if (reset) begin
            arvalid_q <= 1'b0;
            araddr_q  <= 32'b0;
        end
        else if (handshake_ar) begin
            arvalid_q <= 1'b0;
        end
        else if (ar_flag) begin
            arvalid_q <= 1'b1;
            araddr_q  <= (ifu_idu_valid && !flush_q) ? next_pc : ifu_idu_pc;
        end
    end

    assign ifu_cpu_araddr  = araddr_q;
    assign ifu_cpu_arvalid = arvalid_q;
    assign ifu_cpu_rready  = (state == WAIT);
    assign ifu_cpu_arid    = 4'h0;
    assign ifu_cpu_arlen   = 8'h0;
    assign ifu_cpu_arsize  = 3'b010;
    assign ifu_cpu_arburst = 2'b01;

    // 更新pc
    always @(posedge clock or posedge reset) begin
        if (reset) begin
            ifu_idu_pc <= `ysyx_26010027_PC_START;
        end 
        else begin
            if (exu_flush) begin
                ifu_idu_pc <= exu_flush_pc;
            end
            else if (ifu_idu_valid && idu_ifu_ready)
                ifu_idu_pc <= next_pc;
        end
    end

    // 捕获到达数据
    always @(posedge clock, posedge reset) begin
        if (reset)
            ifu_idu_inst <= 32'b0;
        else if (exu_flush)
            ifu_idu_inst <= 32'b0;   // 冲刷时清空
        else if (handshake_r)
            ifu_idu_inst <= cpu_ifu_rdata;
    end

    // 冲刷处理-捕获锁存 flush 信号
    always @(posedge clock, posedge reset) begin
        if (reset) begin
            flush_q    <= 1'b0;
            flush_ar_sent <= 1'b0;
        end 
        else if (exu_flush) begin
            flush_q    <= 1'b1;
            flush_ar_sent <= 1'b0;
        end 
        else if (ar_flag && flush_q) begin
            flush_ar_sent <= 1'b1;  // 冲刷后的取指 AR 已发出
        end
        else if (handshake_ar) begin
            if (flush_ar_sent) flush_q <= 1'b0;  // 冲刷取指完成, 清除
            flush_ar_sent <= 1'b0;
        end
    end

    always @(posedge clock, posedge reset) begin
        if (reset) begin
            ifu_idu_valid <= 1'b0;
        end 
        else if (exu_flush || flush_q) begin
            ifu_idu_valid <= 1'b0;
        end
        else if (ifu_idu_valid && idu_ifu_ready) begin
            ifu_idu_valid <= 1'b0;  // 交付给 IDU
        end
        else if (handshake_r) begin
            ifu_idu_valid <= 1'b1;  // 取到指令
        end
    end

endmodule
module ysyx_26010027_IDU (
    input             clock,
    input             reset,

    input             ifu_idu_valid,
    output            idu_ifu_ready,
    input  [31:0]     ifu_idu_pc,
    input  [31:0]     ifu_idu_inst,

    // IDU - EXU
    input             exu_idu_ready,
    output reg        idu_exu_valid,
    output reg [31:0] idu_exu_pc,
    output reg [31:0] idu_exu_inst,

    output reg [31:0] idu_exu_target,
    output reg [31:0] idu_exu_imm,
    output reg [ 3:0] idu_exu_alu_op,
    output reg [ 1:0] idu_exu_mem_w,
    output reg [ 2:0] idu_exu_mem_r,
    output reg        idu_exu_alu_arc1,
    output reg        idu_exu_alu_arc2,
    output reg        idu_exu_reg_w,
    output reg [ 1:0] idu_exu_rf_res,
    output reg [ 4:0] idu_exu_waddr,

    output reg [ 1:0] idu_exu_jump,
    output reg [ 2:0] idu_exu_branch,
    output reg        idu_exu_fencei,
    input             exu_flush,

    output reg [ 4:0] idu_exu_raddr1, idu_exu_raddr2,
    output reg [31:0] idu_exu_rdata1, idu_exu_rdata2, // 读寄存器数据

    output reg [11:0] idu_exu_csr_raddr,
    output reg [31:0] idu_exu_csr_rdata, // 读 CSR 数据
    output reg [11:0] idu_exu_csr_waddr,
    output reg        idu_exu_csr_we,
    output reg        idu_exu_csr_ecall,
    output reg        idu_exu_csr_mret,

    // IDU - WBU
    input      [31:0] wbu_idu_csr_rdata,
    input      [31:0] wbu_idu_rdata1, wbu_idu_rdata2,
    output     [11:0] idu_wbu_csr_raddr,
    output     [ 4:0] idu_wbu_raddr1, idu_wbu_raddr2 // 组合 raddr（给 WBU 读 GPR，当前指令）

);

    // ----- Instruction decoding -----
    wire [31:0] inst   = ifu_idu_inst;
    wire [ 6:0] opcode = inst[6:0];
    wire [ 2:0] funct3 = inst[14:12];
    wire [ 6:0] funct7 = inst[31:25];

    // Instruction type
    wire inst_I = (opcode == 7'b0010011) || (opcode == 7'b0000011) ||
                  (opcode == 7'b1100111) || (opcode == 7'b1110011);
    wire inst_U = (opcode == 7'b0110111) || (opcode == 7'b0010111);
    wire inst_B = (opcode == 7'b1100011);
    wire inst_S = (opcode == 7'b0100011);
    wire inst_J = (opcode == 7'b1101111);
    wire inst_R = (opcode == 7'b0110011);

    // Sub-type
    wire I_a = (opcode == 7'b0010011);  // arithmetic I-type
    wire I_b = (opcode == 7'b0000011);  // load
    wire I_c = (opcode == 7'b1110011);  // CSR

    // I-type instructions
    wire addi  = I_a && (funct3 == 3'b000);
    wire slti  = I_a && (funct3 == 3'b010);
    wire slli  = I_a && (funct3 == 3'b001);
    wire srli  = I_a && (funct3 == 3'b101) && (funct7 == 7'b0000000);
    wire srai  = I_a && (funct3 == 3'b101) && (funct7 == 7'b0100000);
    wire sltiu = I_a && (funct3 == 3'b011);
    wire xori  = I_a && (funct3 == 3'b100);
    wire ori   = I_a && (funct3 == 3'b110);
    wire andi  = I_a && (funct3 == 3'b111);
    wire lbu   = I_b && (funct3 == 3'b100);
    wire lhu   = I_b && (funct3 == 3'b101);
    wire lw    = I_b && (funct3 == 3'b010);
    wire lh    = I_b && (funct3 == 3'b001);
    wire lb    = I_b && (funct3 == 3'b000);
    wire jalr  = (opcode == 7'b1100111);

    wire i_inst  = addi || slti || slli || srli || srai || sltiu ||
                   xori || ori || andi || lbu || lhu || lw || lh || lb || jalr;
    wire ld_type = lbu || lhu || lw || lh || lb;

    // R-type instructions
    wire add   = inst_R && (funct3 == 3'b000) && (funct7 == 7'b0000000);
    wire sub   = inst_R && (funct3 == 3'b000) && (funct7 == 7'b0100000);
    wire sll   = inst_R && (funct3 == 3'b001);
    wire slt   = inst_R && (funct3 == 3'b010);
    wire sltu  = inst_R && (funct3 == 3'b011);
    wire srl   = inst_R && (funct3 == 3'b101) && (funct7 == 7'b0000000);
    wire sra   = inst_R && (funct3 == 3'b101) && (funct7 == 7'b0100000);
    wire r_xor = inst_R && (funct3 == 3'b100);
    wire r_or  = inst_R && (funct3 == 3'b110);
    wire r_and = inst_R && (funct3 == 3'b111);

    wire r_inst = add || sub || sll || slt || sltu || srl || sra ||
                  r_xor || r_or || r_and;

    // S-type instructions
    wire sw = inst_S && (funct3 == 3'b010);
    wire sb = inst_S && (funct3 == 3'b000);
    wire sh = inst_S && (funct3 == 3'b001);

    wire s_inst = sw || sb || sh;

    // B-type instructions
    wire bne  = inst_B && (funct3 == 3'b001);
    wire beq  = inst_B && (funct3 == 3'b000);
    wire blt  = inst_B && (funct3 == 3'b100);
    wire bge  = inst_B && (funct3 == 3'b101);
    wire bltu = inst_B && (funct3 == 3'b110);
    wire bgeu = inst_B && (funct3 == 3'b111);

    wire b_inst = bne || beq || blt || bge || bltu || bgeu;

    // U-type & J-type
    wire lui   = (opcode == 7'b0110111);
    wire auipc = (opcode == 7'b0010111);
    wire jal   = inst_J;

    // Immediate generation
    wire [31:0] imm = (inst_I) ? {{20{inst[31]}}, inst[31:20]} :
                (inst_S) ? {{20{inst[31]}}, inst[31:25], inst[11:7]} :
                (inst_B) ? {{20{inst[31]}}, inst[7], inst[30:25], inst[11:8], 1'b0} :
                (inst_U) ? {inst[31:12], 12'b0} :
                (inst_J) ? {{11{inst[31]}}, inst[31], inst[19:12], inst[20], inst[30:21], 1'b0} :
                32'b0;

    // CSR instructions
    wire csrrw    = I_c && (funct3 == 3'b001);
    wire csrrs    = I_c && (funct3 == 3'b010);
    wire csrrc    = I_c && (funct3 == 3'b011);
    wire csr_ecall = (inst == 32'h00000073);
    wire csr_mret  = (inst == 32'h30200073);
    wire csr_inst  = csrrw || csrrs || csrrc || csr_ecall || csr_mret;
    wire [11:0] csr_addr  = imm[11:0];

    // --------------------------

    // Control signals
    wire [1:0] jump = (jalr) ? 2'b01 :
                      csr_ecall ? 2'b10 :
                      csr_mret  ? 2'b11 :
                      2'b00; // jal

    wire [2:0] branch = bne  ? 3'd0 :
                        beq  ? 3'd1 :
                        blt  ? 3'd2 :
                        bge  ? 3'd3 :
                        bltu ? 3'd4 :
                        bgeu ? 3'd5 :
                        3'd6;

    wire [1:0] rf_res = ld_type                   ? 2'b01 :  // memory
                        (csrrw || csrrs || csrrc) ? 2'b10 :  // CSR
                        (jal || jalr)             ? 2'b11 :  // PC+4
                        2'b00; // ALU

    wire [3:0] alu_op = (sub)           ? 4'd1  :
                        lui             ? 4'd2  :
                        (sll || slli)   ? 4'd3  :
                        (srl || srli)   ? 4'd4  :
                        (sra || srai)   ? 4'd5  :
                        (slt || slti)   ? 4'd6  :
                        sltiu           ? 4'd7  :
                        sltu            ? 4'd8  :
                        (r_xor || xori) ? 4'd9  :
                        (r_and || andi) ? 4'd10 :
                        (r_or || ori)   ? 4'd11 :
                        inst_B          ? 4'd12 :
                        csrrw           ? 4'd13 :
                        csrrs           ? 4'd14 :
                        4'd0; // 加法alu

    wire alu_arc1 = (jal || auipc);                        // 0: src1, 1: pc
    wire alu_arc2 = (inst_I || inst_S || auipc || inst_J); // 0: src2, 1: imm

    wire reg_w = (inst_I || inst_R || inst_J || inst_U || csrrw);

    wire [1:0] mem_w = sw ? 2'b00 :
                       sb ? 2'b01 :
                       sh ? 2'b10 :
                       2'b11;

    wire [2:0] mem_r = lw  ? 3'd0 :
                       lb  ? 3'd1 :
                       lh  ? 3'd2 :
                       lbu ? 3'd3 :
                       lhu ? 3'd4 :
                       3'd5;

    wire fence_i = (inst == 32'h0000100F);
    wire ebreak  = (inst == 32'h00100073);

    wire [31:0] target = branch != 3'd6 ? ifu_idu_pc + imm : 32'b0;
    wire [ 4:0] raddr1 = inst[19:15];
    wire [ 4:0] raddr2 = inst[24:20];
    wire [ 4:0] waddr  = inst[11:7];

    // to WBU
    assign idu_wbu_raddr1 = raddr1;
    assign idu_wbu_raddr2 = raddr2;
    assign idu_wbu_csr_raddr = csr_addr;

`ifndef __ICARUS__
    // Illegal instruction detection
    wire illegal = !(i_inst || r_inst || s_inst || b_inst ||
                     lui || auipc || jal || csr_inst || ebreak || fence_i);
    always @(posedge clock)
      if (ifu_idu_valid && idu_ifu_ready && !exu_flush && illegal && (inst != 32'b0))
        is_illegal_inst();
`endif

    assign idu_ifu_ready = exu_idu_ready | !idu_exu_valid;
    always @(posedge clock or posedge reset) begin
      if (reset) begin
        idu_exu_valid <= 1'b0;
      end 
      else if (exu_flush) begin
        idu_exu_valid <= 1'b0;
      end 
      else if (ifu_idu_valid & idu_ifu_ready) begin
        idu_exu_valid <= 1'b1;
      end 
      else if (exu_idu_ready) begin
        idu_exu_valid <= 1'b0;
      end
    end

    always @(posedge clock or posedge reset) begin
      if (reset) begin
        idu_exu_pc       <= 32'd0;
        idu_exu_inst     <= 32'd0;
        idu_exu_target   <= 32'd0;
        idu_exu_imm      <= 32'd0;
        idu_exu_alu_op   <= 4'd0;
        idu_exu_mem_w    <= 2'd0;
        idu_exu_mem_r    <= 3'd0;
        idu_exu_alu_arc1 <= 1'd0;
        idu_exu_alu_arc2 <= 1'd0;
        idu_exu_reg_w    <= 1'd0;
        idu_exu_rf_res   <= 2'd0;
        idu_exu_waddr    <= 5'd0;
        idu_exu_jump     <= 2'd0;
        idu_exu_branch   <= 3'd6;
        idu_exu_fencei   <= 1'd0;

        idu_exu_raddr1    <= 5'd0;
        idu_exu_raddr2    <= 5'd0;
        idu_exu_rdata1    <= 32'd0;
        idu_exu_rdata2    <= 32'd0;

        idu_exu_csr_raddr <= 12'd0;
        idu_exu_csr_rdata <= 32'd0; 
        idu_exu_csr_waddr <= 12'd0;
        idu_exu_csr_we    <= 1'd0;
        idu_exu_csr_ecall <= 1'd0;
        idu_exu_csr_mret  <= 1'd0;

      end 
      else if (ifu_idu_valid && idu_ifu_ready) begin
        idu_exu_pc       <= ifu_idu_pc;
        idu_exu_inst     <= ifu_idu_inst;
        idu_exu_target   <= target; // pc + imm
        idu_exu_imm      <= imm;
        idu_exu_alu_op   <= alu_op; // ALU 算术选择
        idu_exu_mem_w    <= mem_w;
        idu_exu_mem_r    <= mem_r;
        idu_exu_alu_arc1 <= alu_arc1; // ALU 源操作数选择
        idu_exu_alu_arc2 <= alu_arc2;
        idu_exu_reg_w    <= reg_w;
        idu_exu_rf_res   <= rf_res; // GPR的rf-result 写入结果选择
        idu_exu_waddr    <= waddr;
        idu_exu_jump     <= jump; // 跳转 包括异常
        idu_exu_branch   <= branch; // 分支
        idu_exu_fencei   <= fence_i;

        idu_exu_raddr1    <= raddr1;
        idu_exu_raddr2    <= raddr2;
        idu_exu_rdata1    <= wbu_idu_rdata1;
        idu_exu_rdata2    <= wbu_idu_rdata2;

        idu_exu_csr_raddr <= csr_addr;
        idu_exu_csr_rdata <= wbu_idu_csr_rdata;
        idu_exu_csr_waddr <= csr_addr;
        idu_exu_csr_we    <= csrrw;
        idu_exu_csr_ecall <= csr_ecall;
        idu_exu_csr_mret  <= csr_mret;

      end

    end

endmodule
module ysyx_26010027_EXU (
    input               clock,
    input               reset,

    // IDU - EXU
    input             idu_exu_valid,
    output            exu_idu_ready,
    input      [31:0] idu_exu_pc,
    input      [31:0] idu_exu_inst,

    input      [31:0] idu_exu_target,
    input      [31:0] idu_exu_imm,
    input      [ 3:0] idu_exu_alu_op,
    input      [ 1:0] idu_exu_mem_w,
    input      [ 2:0] idu_exu_mem_r,
    input             idu_exu_alu_arc1, idu_exu_alu_arc2, // 操作数选择
    input             idu_exu_reg_w,
    input      [ 1:0] idu_exu_rf_res, // reg 的 wdata 选择
    input      [ 4:0] idu_exu_waddr,

    input      [ 1:0] idu_exu_jump,
    input      [ 2:0] idu_exu_branch,
    input             idu_exu_fencei,

    input      [11:0] idu_exu_csr_waddr,
    input             idu_exu_csr_we,
    input             idu_exu_csr_ecall,
    input             idu_exu_csr_mret,

    // EXU - LSU
    input             lsu_exu_ready,
    output reg        exu_lsu_valid,
    output reg [31:0] exu_lsu_pc,
    output reg [31:0] exu_lsu_snpc,
    output reg [31:0] exu_lsu_inst,

    output reg [ 1:0] exu_lsu_mem_w, 
    output reg [ 2:0] exu_lsu_mem_r,
    output reg [31:0] exu_lsu_mem_addr,
    output reg [31:0] exu_lsu_wdata,
    output reg        exu_lsu_reg_w,
    output reg [ 1:0] exu_lsu_rf_res,
    output reg [ 4:0] exu_lsu_waddr,
    output reg [31:0] exu_lsu_alu_result,

    output reg [11:0] exu_lsu_csr_waddr,
    output reg        exu_lsu_csr_we,
    output reg        exu_lsu_csr_ecall,
    output reg        exu_lsu_csr_mret,
    output reg [31:0] exu_lsu_csr_wdata,

    // flush
    output reg        exu_flush,
    output reg [31:0] exu_flush_pc,

    // data forwarding 旁路转发
    input             lsu_wbu_valid,
    input             lsu_load_inflight,
    input             lsu_wbu_reg_w,
    input             lsu_wbu_csr_we,
    input      [ 1:0] lsu_wbu_rf_res,
    input      [ 4:0] idu_exu_raddr1, idu_exu_raddr2,
    input      [11:0] idu_exu_csr_raddr,
    input      [ 4:0] lsu_wbu_waddr,
    input      [11:0] lsu_wbu_csr_waddr,
    input      [31:0] lsu_wbu_pc,
    input      [31:0] lsu_wbu_alu_result, // RAW
    input      [31:0] lsu_wbu_mem_result, // Load-Use
    input      [31:0] lsu_wbu_csr_wdata,
    input      [31:0] idu_exu_rdata1, idu_exu_rdata2, idu_exu_csr_rdata,// Normal
    input      [31:0] exu_mtvec, exu_mepc // ecall/mret

);

    wire [31:0] src1, src2;
    wire [31:0] rdata1, rdata2;
    wire [31:0] snpc = idu_exu_pc + 4;
    wire [31:0] csr_rdata;
    reg  [31:0] alu_result;

    // ----- data forwarding -----
    wire [2:0] fwd_1; // 1拍与2拍 RAW 和 1拍load-use
    wire [2:0] fwd_2;
    wire [1:0] csr_fwd;
    wire load_use_stall;

    // raw 前递
    wire lsu_fwd_alu = exu_lsu_valid && exu_lsu_reg_w && (exu_lsu_rf_res == 2'b00); // rf_res选ALU
    wire wbu_fwd_alu = lsu_wbu_valid && lsu_wbu_reg_w && (lsu_wbu_rf_res == 2'b00);
    assign fwd_1[0] = (|idu_exu_raddr1 && idu_exu_raddr1 == exu_lsu_waddr && lsu_fwd_alu); // 读地址等于邻级写地址且不为0、当前rf_res来源为 ALU
    assign fwd_2[0] = (|idu_exu_raddr2 && idu_exu_raddr2 == exu_lsu_waddr && lsu_fwd_alu);
    assign fwd_1[1] = (|idu_exu_raddr1 && idu_exu_raddr1 == lsu_wbu_waddr && wbu_fwd_alu);
    assign fwd_2[1] = (|idu_exu_raddr2 && idu_exu_raddr2 == lsu_wbu_waddr && wbu_fwd_alu);

    // load-use 前递
    wire lsu_fwd_mem = exu_lsu_valid && exu_lsu_reg_w && (exu_lsu_rf_res == 2'b01); // rf_res选MEM
    wire wbu_fwd_mem = lsu_wbu_valid && lsu_wbu_reg_w && (lsu_wbu_rf_res == 2'b01);
    assign fwd_1[2] = (|idu_exu_raddr1 && idu_exu_raddr1 == lsu_wbu_waddr && wbu_fwd_mem); // rf_res选memory
    assign fwd_2[2] = (|idu_exu_raddr2 && idu_exu_raddr2 == lsu_wbu_waddr && wbu_fwd_mem);

    // 等 load 数据
    assign load_use_stall = (|idu_exu_raddr1 && idu_exu_raddr1 == exu_lsu_waddr && lsu_fwd_mem)
                         || (|idu_exu_raddr2 && idu_exu_raddr2 == exu_lsu_waddr && lsu_fwd_mem)
                         || (|idu_exu_raddr1 && idu_exu_raddr1 == lsu_wbu_waddr && lsu_load_inflight)
                         || (|idu_exu_raddr2 && idu_exu_raddr2 == lsu_wbu_waddr && lsu_load_inflight);

    assign csr_fwd[0] = (|idu_exu_csr_raddr && idu_exu_csr_raddr == exu_lsu_csr_waddr && exu_lsu_valid && exu_lsu_csr_we && exu_lsu_rf_res == 2'b10); // rf_res选CSR
    assign csr_fwd[1] = (|idu_exu_csr_raddr && idu_exu_csr_raddr == lsu_wbu_csr_waddr && lsu_wbu_valid && lsu_wbu_csr_we && lsu_wbu_rf_res == 2'b10);
    // ----------------------------

    // 前递值
    wire [31:0] lsu_fwd_data = exu_lsu_alu_result; // 一拍
    wire [31:0] wbu_fwd_data = lsu_wbu_alu_result; // 两拍

    assign rdata1 = fwd_1[0] ? lsu_fwd_data : 
                    fwd_1[1] ? wbu_fwd_data : 
                    fwd_1[2] ? lsu_wbu_mem_result : idu_exu_rdata1;
    assign rdata2 = fwd_2[0] ? lsu_fwd_data : 
                    fwd_2[1] ? wbu_fwd_data : 
                    fwd_2[2] ? lsu_wbu_mem_result : idu_exu_rdata2;
    assign csr_rdata = csr_fwd[0] ? exu_lsu_csr_wdata : 
                       csr_fwd[1] ? lsu_wbu_csr_wdata : idu_exu_csr_rdata;

    // 源操作数选择与处理
    assign src1 = idu_exu_alu_arc1 ? idu_exu_pc  : rdata1;
    assign src2 = idu_exu_alu_arc2 ? idu_exu_imm : rdata2;

    // branch
    wire eq  = (src1 == src2);
    wire lts = ($signed(src1) < $signed(src2));
    wire ltu = (src1 < src2);
    wire taken = (idu_exu_branch == 3'd0) ? !eq  :  // bne
                 (idu_exu_branch == 3'd1) ? eq   :  // beq
                 (idu_exu_branch == 3'd2) ? lts  :  // blt
                 (idu_exu_branch == 3'd3) ? !lts :  // bge
                 (idu_exu_branch == 3'd4) ? ltu  :  // bltu
                 (idu_exu_branch == 3'd5) ? !ltu :  // bgeu
                 1'b0;

    // module ALU
    always @(*) begin
        case (idu_exu_alu_op)
            4'd0:  alu_result = src1 + src2;
            4'd1:  alu_result = src1 - src2; // sub
            4'd2:  alu_result = idu_exu_imm; // lui
            4'd3:  alu_result = src1 << src2[4:0]; // sll/slli
            4'd4:  alu_result = src1 >> src2[4:0]; // srl/srli
            4'd5:  alu_result = $signed(src1) >>> src2[4:0]; // sra/srai
            4'd6:  alu_result = {31'b0, (lts)}; // slt/slti
            4'd7:  alu_result = {31'b0, (ltu)}; // sltiu
            4'd8:  alu_result = {31'b0, (ltu)}; // sltu
            4'd9:  alu_result = src1 ^ src2; // xor/xori
            4'd10: alu_result = src1 & src2; // and/andi
            4'd11: alu_result = src1 | src2; // or/ori
            4'd12: alu_result = taken ? idu_exu_target : snpc; // branch
            4'd13: alu_result = src1;       // csrrw
            4'd14: alu_result = src1 | csr_rdata; // csrrs
            default: alu_result = 0;
        endcase
    end

    // flush handle
    wire [31:0] trap_pc = idu_exu_csr_ecall ? exu_mtvec : exu_mepc;
    always @(*) begin
        if (reset) begin
            exu_flush    = 1'b0;
            exu_flush_pc = 32'b0;
        end 
        else if (idu_exu_valid && exu_idu_ready) begin
            // 正常跳转
            if (idu_exu_branch != 3'd6) begin // branch
                exu_flush    = !taken; // no_taken 不中就 flush
                exu_flush_pc = snpc; // 正常pc+4
            end
            else if (idu_exu_jump == 2'b01) begin // jalr
                exu_flush    = 1'b1; // 包冲刷
                exu_flush_pc = alu_result;
            end
            // 异常跳转
            else if ((idu_exu_csr_ecall || idu_exu_csr_mret)) begin
                exu_flush    = 1'b1;
                exu_flush_pc = trap_pc;
            end
            // fence.i 冲刷
            else if (idu_exu_fencei) begin
                exu_flush    = 1'b1;
                exu_flush_pc = snpc;
            end
            else begin
                exu_flush    = 1'b0;
                exu_flush_pc = 32'b0;
            end
        end
        else begin
            exu_flush    = 1'b0;
            exu_flush_pc = 32'b0;
        end
    end

    assign exu_idu_ready = (lsu_exu_ready | !exu_lsu_valid) && !load_use_stall; // stall 反压
    always @(posedge clock, posedge reset) begin
        if (reset) begin
            exu_lsu_valid <= 1'b0;
        end
        else if (idu_exu_valid && exu_idu_ready) begin
            exu_lsu_valid <= 1'b1;
        end
        else if (lsu_exu_ready) begin
            exu_lsu_valid <= 1'b0;
        end
    end

    always @(posedge clock, posedge reset) begin
        if (reset) begin
            exu_lsu_pc       <= 0;
            exu_lsu_snpc     <= 0;
            exu_lsu_inst     <= 0;
            exu_lsu_mem_w    <= 0;
            exu_lsu_mem_r    <= 0;
            exu_lsu_mem_addr <= 0;
            
            exu_lsu_reg_w      <= 0;
            exu_lsu_rf_res     <= 0;
            exu_lsu_waddr      <= 0;
            exu_lsu_alu_result <= 0;

            exu_lsu_csr_waddr  <= 0;
            exu_lsu_csr_we     <= 0;
            exu_lsu_csr_ecall  <= 0;
            exu_lsu_csr_mret   <= 0;
            exu_lsu_csr_wdata  <= 0;

        end
        else if (idu_exu_valid && exu_idu_ready) begin
            exu_lsu_pc       <= idu_exu_pc;
            exu_lsu_snpc     <= snpc;
            exu_lsu_inst     <= idu_exu_inst;
            exu_lsu_mem_w    <= idu_exu_mem_w;
            exu_lsu_mem_r    <= idu_exu_mem_r;
            exu_lsu_mem_addr <= alu_result; // ALU-访存地址
            exu_lsu_wdata    <= rdata2; // 直接传rs2寄存器的值

            exu_lsu_reg_w      <= idu_exu_reg_w;
            exu_lsu_rf_res     <= idu_exu_rf_res;
            exu_lsu_waddr      <= idu_exu_waddr; // rf 地址
            exu_lsu_alu_result <= alu_result; // ALU结果

            exu_lsu_csr_waddr  <= idu_exu_csr_waddr;
            exu_lsu_csr_we     <= idu_exu_csr_we;
            exu_lsu_csr_ecall  <= idu_exu_csr_ecall;
            exu_lsu_csr_mret   <= idu_exu_csr_mret;
            exu_lsu_csr_wdata  <= alu_result; // ALU-csr写数据
        end

    end

endmodule
module ysyx_26010027_LSU (
    input             clock,
    input             reset,

    input      [ 1:0] exu_lsu_mem_w,
    input      [ 2:0] exu_lsu_mem_r,
    input      [31:0] exu_lsu_mem_addr,
    input      [31:0] exu_lsu_wdata,

    // EXU - LSU
    input             exu_lsu_valid,
    output wire       lsu_exu_ready,
    input      [31:0] exu_lsu_pc,
    input      [31:0] exu_lsu_snpc,
    input      [31:0] exu_lsu_inst,
    input             exu_lsu_reg_w,
    input      [ 1:0] exu_lsu_rf_res,
    input      [ 4:0] exu_lsu_waddr,
    input      [31:0] exu_lsu_alu_result,

    input      [11:0] exu_lsu_csr_waddr,
    input             exu_lsu_csr_we,
    input             exu_lsu_csr_ecall,
    input             exu_lsu_csr_mret,
    input      [31:0] exu_lsu_csr_wdata,

    // LSU - WBU
    input             wbu_lsu_ready,
    output wire       lsu_wbu_valid,
    output reg [31:0] lsu_wbu_pc,
    output reg [31:0] lsu_wbu_snpc,
    output reg [31:0] lsu_wbu_inst,
    output reg        lsu_wbu_reg_w,
    output reg [ 1:0] lsu_wbu_rf_res,
    output reg [ 4:0] lsu_wbu_waddr,
    output reg [31:0] lsu_wbu_alu_result,
    output reg [31:0] lsu_wbu_mem_result,

    output reg [11:0] lsu_wbu_csr_waddr,
    output reg        lsu_wbu_csr_we,
    output reg        lsu_wbu_csr_ecall,
    output reg        lsu_wbu_csr_mret,
    output reg [31:0] lsu_wbu_csr_wdata,

    // 前递/停顿: LSU 中还在飞的 load
    output wire       lsu_load_inflight,

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
);

    // ----- 锁存 -----
    reg        l_busy;     // 被占用且可能未完成的访存事务
    reg [ 1:0] l_mem_w;
    reg [ 2:0] l_mem_r;
    reg [31:0] l_mem_addr;
    reg [31:0] l_wdata;
    reg        mem_done;    // 访存事务完成

    wire is_load  = (l_mem_r != 3'd5);
    wire is_store = (l_mem_w != 2'b11);
    wire mem_op   = is_load || is_store;

    // ----- state -----
    reg [2:0] state_w;
    reg [1:0] state_r;
    localparam W_IDLE = 3'b000;
    localparam W_WAIT = 3'b001;
    localparam W_RESP = 3'b010;
    localparam R_IDLE = 2'b00;
    localparam R_WAIT = 2'b01;

    wire load_q  = l_busy && is_load  && !mem_done; // 寄存访存信号 避免重复达成请求条件
    wire store_q = l_busy && is_store && !mem_done;

    // ----- 访存相关数据 -----
    // 数据移位信号 w/r
    wire [31:0] wdata_shifted = (l_mem_addr[1:0] == 2'b00) ? (l_wdata << 0) :
                                (l_mem_addr[1:0] == 2'b01) ? (l_wdata << 8) :
                                (l_mem_addr[1:0] == 2'b10) ? (l_wdata << 16) : (l_wdata << 24);

    wire [31:0] rdata_shifted = (l_mem_addr[1:0] == 2'b00) ? cpu_lsu_rdata :
                                (l_mem_addr[1:0] == 2'b01) ? (cpu_lsu_rdata >> 8) :
                                (l_mem_addr[1:0] == 2'b10) ? (cpu_lsu_rdata >> 16) : (cpu_lsu_rdata >> 24);

    assign lsu_cpu_awaddr  = l_mem_addr;
    assign lsu_cpu_araddr  = l_mem_addr;
    assign lsu_cpu_wdata   = wdata_shifted;
    assign lsu_cpu_wstrb   = (l_mem_w == 2'b00) ? 4'hF :
                             (l_mem_w == 2'b01) ? (4'h1 << l_mem_addr[1:0]) :
                             (l_mem_w == 2'b10) ? (4'h3 << l_mem_addr[1:0]) : 4'h0;
    assign lsu_cpu_awsize  = (l_mem_w == 2'b00) ? 3'b010 : // sw
                             (l_mem_w == 2'b10) ? 3'b001 : 3'b000; // sb/sh
    assign lsu_cpu_arsize  = (l_mem_r == 3'd0) ? 3'b010 : // lw
                             (l_mem_r == 3'd2 || l_mem_r == 3'd4) ? 3'b001 : 3'b000; // lb/lbu lh/lhu

    assign lsu_cpu_awid    = 4'h0;
    assign lsu_cpu_awlen   = 8'h0;
    assign lsu_cpu_awburst = 2'b01;
    assign lsu_cpu_wlast   = 1'b1;
    assign lsu_cpu_arid    = 4'h0;
    assign lsu_cpu_arlen   = 8'h0;
    assign lsu_cpu_arburst = 2'b01;

    assign lsu_cpu_awvalid = (state_w == W_IDLE) && store_q;
    assign lsu_cpu_wvalid  = (state_w == W_IDLE || state_w == W_WAIT) && store_q; // 同时请求
    assign lsu_cpu_arvalid = (state_r == R_IDLE) && load_q;
    assign lsu_cpu_rready  = (state_r == R_WAIT);
    assign lsu_cpu_bready  = (state_w == W_RESP);

    // 握手请求与响应信号
    wire handshake_aw = cpu_lsu_awready && lsu_cpu_awvalid;
    wire handshake_w  = cpu_lsu_wready  && lsu_cpu_wvalid;
    wire handshake_ar = cpu_lsu_arready && lsu_cpu_arvalid;
    wire handshake_r  = lsu_cpu_rready  && cpu_lsu_rvalid && (cpu_lsu_rresp == 2'b00);
    wire handshake_b  = cpu_lsu_bvalid  && lsu_cpu_bready && (cpu_lsu_bresp == 2'b00);

    // ----- W 状态机 -----
    always @(posedge clock, posedge reset) begin
        if (reset) state_w <= W_IDLE;
        else case (state_w)
            W_IDLE: if (handshake_aw && handshake_w) state_w <= W_RESP;
                    else if (handshake_aw) state_w <= W_WAIT;
            W_WAIT: if (handshake_w) state_w <= W_RESP;
            W_RESP: if (handshake_b) state_w <= W_IDLE;
            default: state_w <= W_IDLE;
        endcase
    end

    // ----- R 状态机 -----
    always @(posedge clock, posedge reset) begin
        if (reset) state_r <= R_IDLE;
        else case (state_r)
            R_IDLE: if (handshake_ar) state_r <= R_WAIT;
            R_WAIT: if (handshake_r)  state_r <= R_IDLE;
            default: state_r <= R_IDLE;
        endcase
    end

    // ----- Load 数据处理 -----
    wire [31:0] mem_rdata = (l_mem_r == 3'd0) ? rdata_shifted :
                            (l_mem_r == 3'd1) ? {{24{rdata_shifted[7]}}, rdata_shifted[7:0]} :
                            (l_mem_r == 3'd2) ? {{16{rdata_shifted[15]}}, rdata_shifted[15:0]} :
                            (l_mem_r == 3'd3) ? {24'b0, rdata_shifted[7:0]} :
                            (l_mem_r == 3'd4) ? {16'b0, rdata_shifted[15:0]} : 32'b0;

    // ----- 访存占用 -----
    always @(posedge clock, posedge reset) begin
        if (reset)
            l_busy <= 1'b0;
        else if (exu_lsu_valid && lsu_exu_ready)
            l_busy <= 1'b1; // 访存事务 忙
        else if (lsu_wbu_valid && wbu_lsu_ready)
            l_busy <= 1'b0;
    end

    // ----- 访存完成标志 -----
    always @(posedge clock, posedge reset) begin
        if (reset)
            mem_done <= 1'b0;
        else if (exu_lsu_valid && lsu_exu_ready)
            mem_done <= 1'b0; // 数据交接 标记进行中
        else if (handshake_r || handshake_b)
            mem_done <= 1'b1; // 捕捉返回标志 标记完成
    end
    
    assign lsu_exu_ready     = !l_busy; // 不忙 向上游要数据
    assign lsu_wbu_valid     = l_busy && (!mem_op || mem_done); // 忙 & (非访存或访存完成)
    assign lsu_load_inflight = l_busy && (is_load) && !mem_done; // 忙 & 未完成 load线还在飞

    // ----- 锁存 -----
    always @(posedge clock, posedge reset) begin
        if (reset) begin
            lsu_wbu_pc         <= 32'b0;
            lsu_wbu_snpc       <= 32'b0;
            lsu_wbu_inst       <= 32'b0;
            lsu_wbu_reg_w      <= 1'b0;
            lsu_wbu_rf_res     <= 2'b0;
            lsu_wbu_waddr      <= 5'b0;
            lsu_wbu_alu_result <= 32'b0;
            lsu_wbu_mem_result <= 32'b0;
            lsu_wbu_csr_waddr  <= 12'b0;
            lsu_wbu_csr_we     <= 1'b0;
            lsu_wbu_csr_ecall  <= 1'b0;
            lsu_wbu_csr_mret   <= 1'b0;
            lsu_wbu_csr_wdata  <= 32'b0;

            l_mem_w            <= 2'b11;
            l_mem_r            <= 3'd5;
            l_mem_addr         <= 32'b0;
            l_wdata            <= 32'b0;
        end else begin
            if (exu_lsu_valid && lsu_exu_ready) begin
                // 非访存相关数据透传
                lsu_wbu_pc         <= exu_lsu_pc;
                lsu_wbu_snpc       <= exu_lsu_snpc;
                lsu_wbu_inst       <= exu_lsu_inst;
                lsu_wbu_reg_w      <= exu_lsu_reg_w;
                lsu_wbu_rf_res     <= exu_lsu_rf_res;
                lsu_wbu_waddr      <= exu_lsu_waddr;
                lsu_wbu_alu_result <= exu_lsu_alu_result;

                lsu_wbu_csr_waddr  <= exu_lsu_csr_waddr;
                lsu_wbu_csr_we     <= exu_lsu_csr_we;
                lsu_wbu_csr_ecall  <= exu_lsu_csr_ecall;
                lsu_wbu_csr_mret   <= exu_lsu_csr_mret;
                lsu_wbu_csr_wdata  <= exu_lsu_csr_wdata;
                // 访存相关锁存
                l_mem_w            <= exu_lsu_mem_w;
                l_mem_r            <= exu_lsu_mem_r;
                l_mem_addr         <= exu_lsu_mem_addr;
                l_wdata            <= exu_lsu_wdata;
            end
            if (handshake_r)
                lsu_wbu_mem_result <= mem_rdata;
        end
    end

endmodule
module ysyx_26010027_WBU (
    input             clock,
    input             reset,

    input      [ 4:0] idu_wbu_raddr1, idu_wbu_raddr2, 
    input      [ 1:0] lsu_wbu_rf_res, // reg 的 wdata 选择

    output     [31:0] wbu_idu_rdata1,
    output     [31:0] wbu_idu_rdata2,
    output     [31:0] wbu_idu_csr_rdata,
    output     [31:0] csr_mtvec,
    output     [31:0] csr_mepc,

    input             lsu_wbu_valid,
    output            wbu_lsu_ready,
    input      [31:0] lsu_wbu_pc,
    input      [31:0] lsu_wbu_snpc,
    input      [31:0] lsu_wbu_inst,
    input             lsu_wbu_reg_w,
    input      [ 4:0] lsu_wbu_waddr,
    input      [31:0] lsu_wbu_alu_result,
    input      [31:0] lsu_wbu_mem_result,

    input      [11:0] csr_raddr,
    input      [11:0] csr_waddr,
    input      [31:0] csr_wdata,
    input             csr_we,
    input             csr_ecall,
    input             csr_mret

);

    wire [31:0] wdata;
    wire [ 4:0] waddr;

    assign wdata = (lsu_wbu_reg_w) ? ((lsu_wbu_rf_res == 2'b00 | lsu_wbu_rf_res == 2'b10) ? lsu_wbu_alu_result : // ALU | CSR
                   (lsu_wbu_rf_res == 2'b01) ? lsu_wbu_mem_result : // MEM
                   lsu_wbu_snpc) : 0; // SNPC
    assign waddr = (lsu_wbu_reg_w) ? lsu_wbu_waddr : 0;
    assign wbu_lsu_ready = lsu_wbu_valid;

    ysyx_26010027_GPR my_gpr (
        .clock (clock),
        .reset (reset),
        .waddr (waddr),
        .wdata (wdata),
        .wen   (lsu_wbu_reg_w),

        .raddr1(idu_wbu_raddr1),
        .raddr2(idu_wbu_raddr2),
        .rdata1(wbu_idu_rdata1),
        .rdata2(wbu_idu_rdata2)
    );

    ysyx_26010027_CSR my_csr (
        .clock       (clock),
        .reset       (reset),
        .csr_ecall   (csr_ecall),
        .csr_mret    (csr_mret),
        .csr_raddr   (csr_raddr),
        .csr_waddr   (csr_waddr),
        .csr_wdata   (csr_wdata),
        .csr_rdata   (wbu_idu_csr_rdata),
        .csr_mtvec   (csr_mtvec),
        .csr_mepc    (csr_mepc),
        .pc          (lsu_wbu_pc),
        .csr_we      (csr_we)

    );

endmodule
module ysyx_26010027_icache (
    input             clock,
    input             reset,
    input             flush_i,     // fence.i 清空 cache

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
    output [ 2:0] arb_arsize
);

`ifndef TOP_SOC // 注意 ----------------------------------------------------------------------------------------------------------------------------------------------------------------
    assign arb_arvalid = ifu_arvalid;
    assign arb_araddr  = ifu_araddr;
    assign arb_arlen   = 8'd0;
    assign arb_arsize  = 3'd2;
    assign arb_rready  = ifu_rready;
    assign ifu_arready = arb_arready;
    assign ifu_rvalid  = arb_rvalid;
    assign ifu_rdata   = arb_rdata;

`else
    // ----- cache parameters -----
    parameter BLOCK_SIZE = 8; // 块大小 8B
    parameter BLOCK_NUMS = 8; // cache 块数
    parameter WAYS       = 2;  // 组内的相联度

    parameter SET_NUMS   = BLOCK_NUMS / WAYS; // 组数
    parameter INDEX_W    = $clog2(SET_NUMS);
    parameter BLK_OFF_W  = $clog2(BLOCK_SIZE);
    parameter TAG_W      = 32 - INDEX_W - BLK_OFF_W;
    parameter BEATS      = BLOCK_SIZE / 4; // burst 拍数
    // 自适应位宽
    localparam BURST_W   = (BEATS == 1) ? 1 : $clog2(BEATS);
    localparam WAY_W     = (WAYS  == 1) ? 1 : $clog2(WAYS);
    localparam WORD_W    = (BEATS == 1) ? 1 : BLK_OFF_W - 2;
    localparam LAST_BEAT = BEATS - 1;   // 末拍拍号
    localparam [7:0] BURST_LEN = BEATS - 1; // arlen 用, 8bit 避免 lint

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

    reg [BURST_W-1:0] burst_count;
    reg [WAY_W-1:0]   repl_cnt [SET_NUMS-1:0];  //  RR 替换

    // ----- out to IFU -----
    reg [31:0] rdata_o;
    reg        rvalid_o;
    assign ifu_rvalid = rvalid_o;
    assign ifu_rdata  = rdata_o;
    assign ifu_arready = (state == IDLE) && ifu_arvalid;

    wire handshake_ar = arb_arvalid && arb_arready;
    wire handshake_r  = arb_rvalid  && arb_rready;
    wire [WORD_W-1:0] word_sel = ifu_araddr[BLK_OFF_W-1 : 2]; // 块内字选择

    integer    i;
    integer    j;

    // ----- FSM -----
    always @(posedge clock, posedge reset) begin
        if (reset) begin
            state       <= IDLE;
            arvalid_o   <= 1'b0;
            rvalid_o    <= 1'b0;
            rready_o    <= 1'b0;
            for (i = 0; i < SET_NUMS; i++) begin
                for (j = 0; j < WAYS; j++) begin
                    valid[i][j] <= 1'b0;
                    tag  [i][j] <= {TAG_W{1'b0}};
                    data [i][j] <= {BLOCK_SIZE*8{1'b0}};
                end
                repl_cnt[i] <= {WAY_W{1'b0}};
            end
        end else begin
            if (rvalid_o && ifu_rready) rvalid_o <= 1'b0;
            // fence.i 清空 cache
            if (flush_i) begin
                for (i = 0; i < SET_NUMS; i = i + 1)
                    for (j = 0; j < WAYS; j = j + 1)
                        valid[i][j] <= 1'b0;
            end
            case (state)
                IDLE: begin
                    if (ifu_arvalid) begin
                        if (hit) begin
                            // HIT
                            rvalid_o  <= 1'b1;
                            rdata_o   <= data[index_q][hit_way][word_sel*32 +: 32];
                        end else begin
                            // MISS
                            araddr_o   <= {ifu_araddr[31:BLK_OFF_W], {BLK_OFF_W{1'b0}}}; // 突发地址对齐
                            arvalid_o  <= 1'b1;
                            rready_o   <= 1'b1;
                            arlen_o    <= BURST_LEN; // BEATS-1
                            arsize_o   <= 3'd2;

                            state       <= WAIT;
                            burst_count <= {BURST_W{1'b0}};
                        end
                    end
                end
                WAIT: begin
                    if (handshake_ar) begin
                        arvalid_o <= 1'b0;
                        state     <= BURST;
                    end
                end
                BURST: begin
                    if (handshake_r) begin
                        // 每拍数据写入 cache line 对应位置
                        data[index_q][miss_way][burst_count*32 +: 32] <= arb_rdata;
                        // 返回 IFU 所需字数据
                        if (burst_count == word_sel) begin
                            rdata_o  <= arb_rdata;
                        end
                        // 最后一拍: 填 tag/valid, 记录延迟, 返回 IDLE
                        if (burst_count == LAST_BEAT) begin
                            tag[index_q][miss_way]   <= tag_q;
                            /*verilator lint_off WIDTHTRUNC*/                             
                            repl_cnt[index_q] <= miss_way + 1;

                            valid[index_q][miss_way] <= 1'b1;
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

`endif
endmodule

`define ysyx_26010027_RTC_BASE 32'h0200_0000
`define ysyx_26010027_RTC_END  32'h0200_ffff
module ysyx_26010027 (
`ifdef TOP_SOC
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

    input         io_interrupt,

`endif
    input         clock,
    input         reset
);

    // Arbiter 相关信号
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

    // ----- IFU -----
    // IFU -> IDU
    wire        ifu_idu_valid;
    wire        idu_ifu_ready;
    wire [31:0] ifu_idu_pc;
    wire [31:0] ifu_idu_inst;

    // IFU 侧 AXI（连接 icache）
    wire        cpu_ifu_arready;
    wire [31:0] ifu_cpu_araddr;
    wire        ifu_cpu_arvalid;
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

`ifdef TOP_SOC // 截断CLINT地址

    // CLINT 接口信号与地址译码
    wire            io_clint_arready;
    wire            io_clint_rvalid;
    wire     [31:0] io_clint_rdata;
    wire     [ 1:0] io_clint_rresp;
    wire            io_clint_awready;
    wire            io_clint_wready;
    wire            io_clint_bvalid;
    wire     [ 1:0] io_clint_bresp;

    // 地址译码
    wire addr_is_clint_ar = (arb_araddr >= `ysyx_26010027_RTC_BASE) && (arb_araddr <= `ysyx_26010027_RTC_END);

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
    assign arb_rid    = addr_is_clint_r ? 4'h0            : io_master_rid;
    assign arb_rlast  = addr_is_clint_r ? 1'b1            : io_master_rlast;

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

`else
`ifdef __ICARUS__
    reg [31:0] pmem_read_data;
    reg        pmem_rvalid;
    reg        pmem_wready;
    reg        pmem_bvalid;
    reg [ 1:0] pmem_bresp;
    reg [ 1:0] pmem_rresp;

    assign arb_arready = arb_arvalid;
    assign arb_awready = arb_awvalid;
    assign arb_rdata   = pmem_read_data;
    assign arb_rvalid  = pmem_rvalid;
    assign arb_wready  = pmem_wready;
    assign arb_bvalid  = pmem_bvalid;
    assign arb_bresp   = pmem_bresp;
    assign arb_rresp   = pmem_rresp;
    assign arb_rid     = 4'b0;
    assign arb_rlast   = 1'b1;
    assign arb_bid     = 4'b0;

    localparam MEM_BASE = 32'h8000_0000;
    localparam MEM_WORDS = 16*1024*1024;

    wire [31:0] mem_raddr = (arb_araddr - MEM_BASE) >> 2;
    wire [31:0] mem_waddr = (arb_awaddr - MEM_BASE) >> 2;
    reg  [31:0] ram [0:MEM_WORDS-1];
    initial begin
        $readmemh("rtt.hex", ram);
    end
    
    always @(posedge clock, posedge reset) begin
        if (reset) begin
            pmem_rvalid    <= 1'b0;
            pmem_wready    <= 1'b0;
            pmem_bvalid    <= 1'b0;
        end else begin
            if (arb_rvalid && arb_rready) pmem_rvalid <= 1'b0;
            if (arb_wvalid && arb_wready) pmem_wready <= 1'b0;
            if (arb_bvalid && arb_bready) pmem_bvalid <= 1'b0;

            if (arb_arvalid && !pmem_rvalid) begin
                pmem_read_data <= ram[mem_raddr];
                pmem_rvalid    <= 1'b1;
                pmem_rresp     <= 2'b0;
            end
            else if (arb_awvalid && !pmem_wready) begin
                case(arb_wstrb)
                    4'b0001: ram[mem_waddr] <= {ram[mem_waddr][31:8], arb_wdata[7:0]};
                    4'b0010: ram[mem_waddr] <= {ram[mem_waddr][31:16], arb_wdata[15:8], ram[mem_waddr][7:0]};
                    4'b0100: ram[mem_waddr] <= {ram[mem_waddr][31:24], arb_wdata[23:16], ram[mem_waddr][15:0]};
                    4'b1000: ram[mem_waddr] <= {arb_wdata[31:24], ram[mem_waddr][23:0]};
                    4'b0011: ram[mem_waddr] <= {ram[mem_waddr][31:16], arb_wdata[15:0]};
                    4'b1100: ram[mem_waddr] <= {arb_wdata[31:16], ram[mem_waddr][15:0]};
                    4'b1111: ram[mem_waddr] <= arb_wdata;
                    default: ram[mem_waddr] <= ram[mem_waddr];
                endcase
                pmem_wready <= 1'b1;
                pmem_bvalid <= 1'b1;
                pmem_bresp  <= 2'b0;
            end
        end
    end

    assign cpu_ifu_rresp = 2'b0;
    assign cpu_ifu_rid   = 4'b0;
    assign cpu_ifu_rlast = 1'b1;

`else

    // pmem (访问模拟内存)
    reg [31:0] pmem_read_data;
    reg        pmem_rvalid;
    reg        pmem_wready;
    reg        pmem_bvalid;
    reg [ 1:0] pmem_bresp;
    reg [ 1:0] pmem_rresp;

    assign arb_arready = arb_arvalid;
    assign arb_awready = arb_awvalid;
    assign arb_rdata   = pmem_read_data;
    assign arb_rvalid  = pmem_rvalid;
    assign arb_wready  = pmem_wready;
    assign arb_bvalid  = pmem_bvalid;
    assign arb_bresp   = pmem_bresp;
    assign arb_rresp   = pmem_rresp;
    assign arb_rid     = 4'b0;
    assign arb_rlast   = 1'b1;
    assign arb_bid     = 4'b0;

    always @(posedge clock, posedge reset) begin
        if (reset) begin
            pmem_rvalid    <= 1'b0;
            pmem_wready    <= 1'b0;
            pmem_bvalid    <= 1'b0;
        end else begin
            if (arb_rvalid && arb_rready) pmem_rvalid <= 1'b0;
            if (arb_wvalid && arb_wready) pmem_wready <= 1'b0;
            if (arb_bvalid && arb_bready) pmem_bvalid <= 1'b0;

            if (arb_arvalid && !pmem_rvalid) begin
                pmem_read_data <= pmem_read(arb_araddr);
                pmem_rvalid    <= 1'b1;
                pmem_rresp     <= 2'b0;
            end
            else if (arb_awvalid && !pmem_wready) begin
                pmem_write(arb_awaddr, arb_wdata, {{28{1'b0}}, arb_wstrb});
                pmem_wready <= 1'b1;
                pmem_bvalid <= 1'b1;
                pmem_bresp  <= 2'b0;
            end
        end
    end

    assign cpu_ifu_rresp = 2'b0;
    assign cpu_ifu_rid   = 4'b0;
    assign cpu_ifu_rlast = 1'b1;

`endif
`endif

    // --- icache -> arbiter ---
    wire        icache_arvalid;
    wire        icache_arready;
    wire [31:0] icache_araddr;
    wire [ 7:0] icache_arlen;
    wire [ 3:0] icache_arid = 4'b0;
    wire [ 2:0] icache_arsize;
    wire [ 1:0] icache_arburst = 2'b01; // 硬编码 INCR
    wire        icache_rvalid;
    wire        icache_rready;
    wire [31:0] icache_rdata;
    wire [ 1:0] icache_rresp;
    wire        icache_rlast;
    wire [ 3:0] icache_rid = 4'b0;

    // --- IDU -> EXU ---
    wire        exu_idu_ready;
    wire        idu_exu_valid;
    wire [31:0] idu_exu_pc;
    wire [31:0] idu_exu_inst;
    wire [31:0] idu_exu_imm;
    wire [31:0] idu_exu_target;
    wire [ 3:0] idu_exu_alu_op;
    wire [ 1:0] idu_exu_mem_w;
    wire [ 2:0] idu_exu_mem_r;
    wire        idu_exu_alu_arc1;
    wire        idu_exu_alu_arc2;
    wire        idu_exu_reg_w;
    wire [ 1:0] idu_exu_rf_res;
    wire [ 4:0] idu_exu_waddr;
    wire [ 1:0] idu_exu_jump;
    wire [ 2:0] idu_exu_branch;
    wire        idu_exu_fencei;

    wire [31:0] idu_exu_rdata1;
    wire [31:0] idu_exu_rdata2;
    wire [ 4:0] idu_exu_raddr1;
    wire [ 4:0] idu_exu_raddr2;

    wire [11:0] idu_exu_csr_raddr;
    wire [31:0] idu_exu_csr_rdata;
    wire [11:0] idu_exu_csr_waddr;
    wire        idu_exu_csr_we;
    wire        idu_exu_csr_ecall;
    wire        idu_exu_csr_mret;

    wire [11:0] idu_wbu_csr_raddr; 
    wire [ 4:0] idu_wbu_raddr1;
    wire [ 4:0] idu_wbu_raddr2;

    // EXU -> LSU
    wire        lsu_exu_ready;
    wire        exu_lsu_valid;
    wire [31:0] exu_lsu_pc;
    wire [31:0] exu_lsu_snpc;
    wire [31:0] exu_lsu_inst;
    wire [ 1:0] exu_lsu_mem_w;
    wire [ 2:0] exu_lsu_mem_r;
    wire [31:0] exu_lsu_mem_addr;
    wire [31:0] exu_lsu_wdata;
    wire        exu_lsu_reg_w;
    wire [ 1:0] exu_lsu_rf_res;
    wire [ 4:0] exu_lsu_waddr;
    wire [31:0] exu_lsu_alu_result;

    wire [11:0] exu_lsu_csr_waddr;
    wire        exu_lsu_csr_we;
    wire        exu_lsu_csr_ecall;
    wire        exu_lsu_csr_mret;
    wire [31:0] exu_lsu_csr_wdata;

    // flush
    wire        exu_flush;
    wire [31:0] exu_flush_pc;

    // --- LSU -> WBU ---
    wire        wbu_lsu_ready;
    wire        lsu_wbu_valid;
    wire [31:0] lsu_wbu_pc;
    wire [31:0] lsu_wbu_snpc;
    wire [31:0] lsu_wbu_inst;
    wire        lsu_wbu_reg_w;
    wire [ 1:0] lsu_wbu_rf_res;
    wire [ 4:0] lsu_wbu_waddr;
    wire [31:0] lsu_wbu_alu_result;
    wire [31:0] lsu_wbu_mem_result;
    wire        lsu_load_inflight;
    wire [11:0] lsu_wbu_csr_waddr;
    wire        lsu_wbu_csr_we;
    wire        lsu_wbu_csr_ecall;
    wire        lsu_wbu_csr_mret;
    wire [31:0] lsu_wbu_csr_wdata;

    // LSU 侧 AXI（连接 arbiter）
    wire        cpu_lsu_arready;
    wire [31:0] lsu_cpu_araddr;
    wire        lsu_cpu_arvalid;
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

    wire        cpu_lsu_awready;
    wire [31:0] lsu_cpu_awaddr;
    wire        lsu_cpu_awvalid;
    wire [ 3:0] lsu_cpu_awid;
    wire [ 7:0] lsu_cpu_awlen;
    wire [ 2:0] lsu_cpu_awsize;
    wire [ 1:0] lsu_cpu_awburst;

    wire        cpu_lsu_wready;
    wire [31:0] lsu_cpu_wdata;
    wire [ 3:0] lsu_cpu_wstrb;
    wire        lsu_cpu_wvalid;
    wire        lsu_cpu_wlast;

    wire        cpu_lsu_bvalid;
    wire        lsu_cpu_bready;
    wire [ 1:0] cpu_lsu_bresp;
    wire [ 3:0] cpu_lsu_bid;

    // --- WBU ---
    wire [31:0] wbu_idu_rdata1;
    wire [31:0] wbu_idu_rdata2;
    wire [31:0] wbu_idu_csr_rdata;
    wire [31:0] wbu_exu_mtvec;
    wire [31:0] wbu_exu_mepc;

    ysyx_26010027_icache my_icache (
        .clock       (clock),
        .reset       (reset),
        .flush_i     (idu_exu_fencei),

        .ifu_araddr  (ifu_cpu_araddr),
        .ifu_arvalid (ifu_cpu_arvalid),
        .ifu_arready (cpu_ifu_arready),
        .ifu_rdata   (cpu_ifu_rdata),
        .ifu_rvalid  (cpu_ifu_rvalid),
        .ifu_rready  (ifu_cpu_rready),

        .arb_araddr  (icache_araddr),
        .arb_arvalid (icache_arvalid),
        .arb_arready (icache_arready),
        .arb_rdata   (icache_rdata),
        .arb_rvalid  (icache_rvalid),
        .arb_rready  (icache_rready),
        .arb_arlen   (icache_arlen),
        .arb_arsize  (icache_arsize)
    );

    ysyx_26010027_IFU my_IFU (
        .clock          (clock),
        .reset          (reset),

        .ifu_idu_valid  (ifu_idu_valid),
        .idu_ifu_ready  (idu_ifu_ready),
        .ifu_idu_pc     (ifu_idu_pc),
        .ifu_idu_inst   (ifu_idu_inst),

        .exu_flush      (exu_flush),
        .exu_flush_pc   (exu_flush_pc),

        .cpu_ifu_arready(cpu_ifu_arready),
        .ifu_cpu_araddr (ifu_cpu_araddr),
        .ifu_cpu_arvalid(ifu_cpu_arvalid),
        .ifu_cpu_arid   (ifu_cpu_arid),
        .ifu_cpu_arlen  (ifu_cpu_arlen),
        .ifu_cpu_arsize (ifu_cpu_arsize),
        .ifu_cpu_arburst(ifu_cpu_arburst),

        .cpu_ifu_rvalid (cpu_ifu_rvalid),
        .ifu_cpu_rready (ifu_cpu_rready),
        .cpu_ifu_rdata  (cpu_ifu_rdata),
        .cpu_ifu_rresp  (cpu_ifu_rresp),
        .cpu_ifu_rid    (cpu_ifu_rid),
        .cpu_ifu_rlast  (cpu_ifu_rlast)
    );


    // ----- IDU -----
    ysyx_26010027_IDU my_IDU (
        .clock      (clock),
        .reset      (reset),

        .ifu_idu_valid (ifu_idu_valid),
        .idu_ifu_ready (idu_ifu_ready),
        .ifu_idu_pc    (ifu_idu_pc),
        .ifu_idu_inst  (ifu_idu_inst),

        .exu_idu_ready (exu_idu_ready),
        .idu_exu_valid (idu_exu_valid),
        .idu_exu_pc    (idu_exu_pc),
        .idu_exu_inst  (idu_exu_inst),
        .idu_exu_target(idu_exu_target),
        .idu_exu_imm   (idu_exu_imm),
        .idu_exu_alu_op(idu_exu_alu_op),
        .idu_exu_mem_w (idu_exu_mem_w),
        .idu_exu_mem_r (idu_exu_mem_r),
        .idu_exu_alu_arc1 (idu_exu_alu_arc1),
        .idu_exu_alu_arc2 (idu_exu_alu_arc2),
        .idu_exu_reg_w (idu_exu_reg_w),
        .idu_exu_rf_res(idu_exu_rf_res),
        .idu_exu_waddr (idu_exu_waddr),
        .idu_exu_jump  (idu_exu_jump),
        .idu_exu_branch(idu_exu_branch),
        .idu_exu_fencei(idu_exu_fencei),

        .exu_flush     (exu_flush),

        .idu_exu_raddr1(idu_exu_raddr1),
        .idu_exu_raddr2(idu_exu_raddr2),
        .idu_exu_rdata1(idu_exu_rdata1),
        .idu_exu_rdata2(idu_exu_rdata2),

        .idu_exu_csr_raddr(idu_exu_csr_raddr),
        .idu_exu_csr_rdata(idu_exu_csr_rdata),
        .idu_exu_csr_waddr(idu_exu_csr_waddr),
        .idu_exu_csr_we   (idu_exu_csr_we),
        .idu_exu_csr_ecall(idu_exu_csr_ecall),
        .idu_exu_csr_mret (idu_exu_csr_mret),

        .wbu_idu_csr_rdata(wbu_idu_csr_rdata),
        .wbu_idu_rdata1(wbu_idu_rdata1),
        .wbu_idu_rdata2(wbu_idu_rdata2),
        .idu_wbu_csr_raddr(idu_wbu_csr_raddr),
        .idu_wbu_raddr1(idu_wbu_raddr1),
        .idu_wbu_raddr2(idu_wbu_raddr2)

    );


    // ----- EXU -----
    ysyx_26010027_EXU my_EXU (
        .clock  (clock),
        .reset  (reset),

        .idu_exu_valid   (idu_exu_valid),
        .exu_idu_ready   (exu_idu_ready),
        .idu_exu_pc      (idu_exu_pc),
        .idu_exu_inst    (idu_exu_inst),
        .idu_exu_imm     (idu_exu_imm),
        .idu_exu_target  (idu_exu_target),
        .idu_exu_alu_op  (idu_exu_alu_op),
        .idu_exu_mem_w   (idu_exu_mem_w),
        .idu_exu_mem_r   (idu_exu_mem_r),
        .idu_exu_alu_arc1(idu_exu_alu_arc1),
        .idu_exu_alu_arc2(idu_exu_alu_arc2),
        .idu_exu_reg_w   (idu_exu_reg_w),
        .idu_exu_rf_res  (idu_exu_rf_res),
        .idu_exu_waddr   (idu_exu_waddr),
        .idu_exu_jump    (idu_exu_jump),
        .idu_exu_branch  (idu_exu_branch),
        .idu_exu_fencei  (idu_exu_fencei),
        .idu_exu_csr_waddr(idu_exu_csr_waddr),
        .idu_exu_csr_we  (idu_exu_csr_we),
        .idu_exu_csr_ecall(idu_exu_csr_ecall),
        .idu_exu_csr_mret(idu_exu_csr_mret),

        .lsu_exu_ready   (lsu_exu_ready),
        .exu_lsu_valid   (exu_lsu_valid),
        .exu_lsu_pc      (exu_lsu_pc),
        .exu_lsu_snpc     (exu_lsu_snpc),
        .exu_lsu_inst    (exu_lsu_inst),
        .exu_lsu_mem_w   (exu_lsu_mem_w),
        .exu_lsu_mem_r   (exu_lsu_mem_r),
        .exu_lsu_mem_addr(exu_lsu_mem_addr),
        .exu_lsu_wdata   (exu_lsu_wdata),
        .exu_lsu_reg_w   (exu_lsu_reg_w),
        .exu_lsu_rf_res  (exu_lsu_rf_res),
        .exu_lsu_waddr   (exu_lsu_waddr),
        .exu_lsu_alu_result(exu_lsu_alu_result),
        .exu_lsu_csr_waddr(exu_lsu_csr_waddr),
        .exu_lsu_csr_we  (exu_lsu_csr_we),
        .exu_lsu_csr_ecall(exu_lsu_csr_ecall),
        .exu_lsu_csr_mret(exu_lsu_csr_mret),
        .exu_lsu_csr_wdata(exu_lsu_csr_wdata),

        .exu_flush       (exu_flush),
        .exu_flush_pc    (exu_flush_pc),

        .lsu_wbu_valid   (lsu_wbu_valid),
        .lsu_wbu_reg_w   (lsu_wbu_reg_w),
        .lsu_wbu_csr_we  (lsu_wbu_csr_we),
        .lsu_wbu_rf_res  (lsu_wbu_rf_res),
        .idu_exu_raddr1  (idu_exu_raddr1),
        .idu_exu_raddr2  (idu_exu_raddr2),
        .idu_exu_csr_raddr(idu_exu_csr_raddr),
        .lsu_wbu_waddr   (lsu_wbu_waddr),
        .lsu_wbu_csr_waddr(lsu_wbu_csr_waddr),
        .lsu_wbu_pc      (lsu_wbu_pc),
        .lsu_wbu_alu_result(lsu_wbu_alu_result),
        .lsu_wbu_mem_result(lsu_wbu_mem_result),
        .lsu_wbu_csr_wdata(lsu_wbu_csr_wdata),
        .lsu_load_inflight(lsu_load_inflight),
        .idu_exu_rdata1  (idu_exu_rdata1),
        .idu_exu_rdata2  (idu_exu_rdata2),
        .idu_exu_csr_rdata(idu_exu_csr_rdata),
        .exu_mtvec       (wbu_exu_mtvec),
        .exu_mepc        (wbu_exu_mepc)
    );


    // ----- LSU -----
    ysyx_26010027_LSU my_LSU (
        .clock           (clock),
        .reset           (reset),

        .exu_lsu_mem_w   (exu_lsu_mem_w),
        .exu_lsu_mem_r   (exu_lsu_mem_r),
        .exu_lsu_mem_addr(exu_lsu_mem_addr),
        .exu_lsu_wdata   (exu_lsu_wdata),

        .exu_lsu_valid   (exu_lsu_valid),
        .lsu_exu_ready   (lsu_exu_ready),
        .exu_lsu_pc      (exu_lsu_pc),
        .exu_lsu_snpc     (exu_lsu_snpc),
        .exu_lsu_inst    (exu_lsu_inst),
        .exu_lsu_reg_w   (exu_lsu_reg_w),
        .exu_lsu_rf_res  (exu_lsu_rf_res),
        .exu_lsu_waddr   (exu_lsu_waddr),
        .exu_lsu_alu_result(exu_lsu_alu_result),
        .exu_lsu_csr_waddr(exu_lsu_csr_waddr),
        .exu_lsu_csr_we  (exu_lsu_csr_we),
        .exu_lsu_csr_ecall(exu_lsu_csr_ecall),
        .exu_lsu_csr_mret(exu_lsu_csr_mret),
        .exu_lsu_csr_wdata(exu_lsu_csr_wdata),

        .wbu_lsu_ready   (wbu_lsu_ready),
        .lsu_wbu_valid   (lsu_wbu_valid),
        .lsu_wbu_pc      (lsu_wbu_pc),
        .lsu_wbu_snpc    (lsu_wbu_snpc),
        .lsu_wbu_inst    (lsu_wbu_inst),
        .lsu_wbu_reg_w   (lsu_wbu_reg_w),
        .lsu_wbu_rf_res  (lsu_wbu_rf_res),
        .lsu_wbu_waddr   (lsu_wbu_waddr),
        .lsu_wbu_alu_result(lsu_wbu_alu_result),
        .lsu_wbu_mem_result(lsu_wbu_mem_result),
        .lsu_wbu_csr_waddr(lsu_wbu_csr_waddr),
        .lsu_wbu_csr_we  (lsu_wbu_csr_we),
        .lsu_wbu_csr_ecall(lsu_wbu_csr_ecall),
        .lsu_wbu_csr_mret(lsu_wbu_csr_mret),
        .lsu_wbu_csr_wdata(lsu_wbu_csr_wdata),
        .lsu_load_inflight(lsu_load_inflight),

        // AXI
        .cpu_lsu_arready (cpu_lsu_arready),
        .lsu_cpu_araddr  (lsu_cpu_araddr),
        .lsu_cpu_arvalid (lsu_cpu_arvalid),
        .lsu_cpu_arid    (lsu_cpu_arid),
        .lsu_cpu_arlen   (lsu_cpu_arlen),
        .lsu_cpu_arsize  (lsu_cpu_arsize),
        .lsu_cpu_arburst (lsu_cpu_arburst),

        .lsu_cpu_rready  (lsu_cpu_rready),
        .cpu_lsu_rvalid  (cpu_lsu_rvalid),
        .cpu_lsu_rdata   (cpu_lsu_rdata),
        .cpu_lsu_rresp   (cpu_lsu_rresp),
        .cpu_lsu_rid     (cpu_lsu_rid),
        .cpu_lsu_rlast   (cpu_lsu_rlast),

        .cpu_lsu_awready (cpu_lsu_awready),
        .lsu_cpu_awaddr  (lsu_cpu_awaddr),
        .lsu_cpu_awvalid (lsu_cpu_awvalid),
        .lsu_cpu_awid    (lsu_cpu_awid),
        .lsu_cpu_awlen   (lsu_cpu_awlen),
        .lsu_cpu_awsize  (lsu_cpu_awsize),
        .lsu_cpu_awburst (lsu_cpu_awburst),

        .cpu_lsu_wready  (cpu_lsu_wready),
        .lsu_cpu_wdata   (lsu_cpu_wdata),
        .lsu_cpu_wstrb   (lsu_cpu_wstrb),
        .lsu_cpu_wvalid  (lsu_cpu_wvalid),
        .lsu_cpu_wlast   (lsu_cpu_wlast),

        .cpu_lsu_bresp   (cpu_lsu_bresp),
        .cpu_lsu_bvalid  (cpu_lsu_bvalid),
        .lsu_cpu_bready  (lsu_cpu_bready),
        .cpu_lsu_bid     (cpu_lsu_bid)
    );


    // ----- WBU -----
    ysyx_26010027_WBU my_WBU (
        .clock  (clock),
        .reset  (reset),

        .idu_wbu_raddr1 (idu_wbu_raddr1),
        .idu_wbu_raddr2 (idu_wbu_raddr2),
        .lsu_wbu_rf_res (lsu_wbu_rf_res),

        .wbu_idu_rdata1 (wbu_idu_rdata1),
        .wbu_idu_rdata2 (wbu_idu_rdata2),
        .wbu_idu_csr_rdata(wbu_idu_csr_rdata),
        .csr_mtvec     (wbu_exu_mtvec),
        .csr_mepc      (wbu_exu_mepc),

        .lsu_wbu_valid  (lsu_wbu_valid),
        .wbu_lsu_ready  (wbu_lsu_ready),
        .lsu_wbu_pc     (lsu_wbu_pc),
        .lsu_wbu_snpc   (lsu_wbu_snpc),
        .lsu_wbu_inst   (lsu_wbu_inst),
        .lsu_wbu_reg_w  (lsu_wbu_reg_w),
        .lsu_wbu_waddr  (lsu_wbu_waddr),
        .lsu_wbu_alu_result(lsu_wbu_alu_result),
        .lsu_wbu_mem_result(lsu_wbu_mem_result),

        .csr_raddr (idu_wbu_csr_raddr),
        .csr_waddr (lsu_wbu_csr_waddr),
        .csr_wdata (lsu_wbu_csr_wdata),
        .csr_we    (lsu_wbu_csr_we),
        .csr_ecall (lsu_wbu_csr_ecall),
        .csr_mret  (lsu_wbu_csr_mret)
    );


    // ----- Arbiter -----

    reg [1:0] grant;

    localparam IFU_GRANT = 2'b01;
    localparam LSU_GRANT = 2'b10;

    // icache 与 LSU 共享总线访问权
    assign icache_arready = (grant == IFU_GRANT) ? arb_arready : 1'b0;
    assign icache_rvalid  = (grant == IFU_GRANT) ? arb_rvalid  : 1'b0;
    assign icache_rdata   = (grant == IFU_GRANT) ? arb_rdata   : 32'b0;
    assign icache_rresp   = (grant == IFU_GRANT) ? arb_rresp   : 2'b0;
    assign icache_rid     = (grant == IFU_GRANT) ? arb_rid     : 4'b0;
    assign icache_rlast   = (grant == IFU_GRANT) ? arb_rlast   : 1'b0;

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

    // lsu事务完成时握手信号
    wire handshake_lsu_r = cpu_lsu_rvalid && lsu_cpu_rready && (cpu_lsu_rresp == 2'b00);
    wire handshake_lsu_b = cpu_lsu_bvalid && lsu_cpu_bready && (cpu_lsu_bresp == 2'b00);

    // arbiter -> 下游总线
    assign arb_arvalid  = (grant == IFU_GRANT) ? icache_arvalid : lsu_cpu_arvalid;
    assign arb_araddr   = (grant == IFU_GRANT) ? icache_araddr  : lsu_cpu_araddr;
    assign arb_arid     = (grant == IFU_GRANT) ? icache_arid    : lsu_cpu_arid;
    assign arb_arlen    = (grant == IFU_GRANT) ? icache_arlen   : lsu_cpu_arlen;
    assign arb_arsize   = (grant == IFU_GRANT) ? icache_arsize  : lsu_cpu_arsize;
    assign arb_arburst  = (grant == IFU_GRANT) ? icache_arburst : lsu_cpu_arburst;
    assign arb_rready   = (grant == IFU_GRANT) ? icache_rready  : lsu_cpu_rready;

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
                    // IFU 空闲(未发请求且未等响应)且有 LSU 请求时让出总线, 否则 IFU 优先
                    if ((lsu_cpu_arvalid || lsu_cpu_awvalid) && !ifu_cpu_arvalid && !ifu_cpu_rready)
                        grant <= LSU_GRANT;
                    else grant <= IFU_GRANT;

                LSU_GRANT:
                    if (handshake_lsu_r || handshake_lsu_b)
                        grant <= IFU_GRANT;
                    else grant <= LSU_GRANT;
                default: grant <= IFU_GRANT;
            endcase
        end
    end

`ifndef __ICARUS__
    wire access_fault = (cpu_ifu_rvalid && ifu_cpu_rready && cpu_ifu_rresp != 2'b00)
                     || (cpu_lsu_rvalid && lsu_cpu_rready && cpu_lsu_rresp != 2'b00)
                     || (cpu_lsu_bvalid && lsu_cpu_bready && cpu_lsu_bresp != 2'b00);

    // 提交指令类型（统计用）
    wire [6:0] wbu_opcode = lsu_wbu_inst[6:0];
    wire wbu_load   = (wbu_opcode == 7'b0000011);
    wire wbu_store  = (wbu_opcode == 7'b0100011);
    wire wbu_csr    = (wbu_opcode == 7'b1110011);
    wire wbu_jump   = (wbu_opcode == 7'b1101111) || (wbu_opcode == 7'b1100111);
    wire wbu_branch = (wbu_opcode == 7'b1100011);
    wire wbu_alu    = (wbu_opcode == 7'b0110011) || (wbu_opcode == 7'b0010011) ||
                      (wbu_opcode == 7'b0010111) || (wbu_opcode == 7'b0110111);
    wire [31:0] hit_count    = 32'b0;
    wire [31:0] miss_count   = 32'b0;
    wire [31:0] miss_latency = 32'b0;

    always @(posedge clock, posedge reset) begin
        if (!reset) begin
            get_cpu_state({{31{1'b0}}, lsu_wbu_valid && wbu_load},
                          {{31{1'b0}}, lsu_wbu_valid && wbu_store},
                          {{31{1'b0}}, lsu_wbu_valid},
                          {{31{1'b0}}, lsu_wbu_valid && wbu_alu},
                          {{31{1'b0}}, lsu_wbu_valid && wbu_csr},
                          {{31{1'b0}}, lsu_wbu_valid && wbu_jump},
                          {{31{1'b0}}, lsu_wbu_valid && wbu_branch},
                          hit_count, miss_count, miss_latency);

            // 提交追踪
            // if (lsu_wbu_valid) cpu_trace(lsu_wbu_pc, lsu_wbu_inst);
            // // IFU->IDU 交付追踪
            // if (ifu_idu_valid && idu_ifu_ready) ifu_trace(ifu_idu_pc, ifu_idu_inst);

            // ftrace
            if (idu_exu_valid && exu_idu_ready && idu_exu_jump == 2'b01) begin
                ftrace_print(idu_exu_pc, exu_flush_pc, {27'b0, idu_exu_waddr}, {27'b0, idu_exu_inst[19:15]});
            end

            // ebreak
            if ((lsu_wbu_inst == 32'h00100073) || access_fault) begin
                finish_sim();
                $display("ebreak at PC = 0x%h Inst = 0x%h", lsu_wbu_pc, lsu_wbu_inst);
                if (access_fault) $display("![Access-FAULT]");
            end
        end
    end
`endif

endmodule
