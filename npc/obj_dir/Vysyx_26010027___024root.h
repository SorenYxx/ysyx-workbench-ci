// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_26010027.h for the primary calling header

#ifndef VERILATED_VYSYX_26010027___024ROOT_H_
#define VERILATED_VYSYX_26010027___024ROOT_H_  // guard

#include "verilated.h"
class Vysyx_26010027___024unit;


class Vysyx_26010027__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_26010027___024root final {
  public:
    // CELLS
    Vysyx_26010027___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ ysyx_26010027__DOT__arb_arvalid;
        CData/*0:0*/ ysyx_26010027__DOT__arb_awvalid;
        CData/*0:0*/ ysyx_26010027__DOT__pmem_rvalid;
        CData/*0:0*/ ysyx_26010027__DOT__pmem_wready;
        CData/*0:0*/ ysyx_26010027__DOT__pmem_bvalid;
        CData/*1:0*/ ysyx_26010027__DOT__pmem_bresp;
        CData/*1:0*/ ysyx_26010027__DOT__pmem_rresp;
        CData/*0:0*/ ysyx_26010027__DOT__ifu_idu_valid;
        CData/*0:0*/ ysyx_26010027__DOT__idu_exu_valid;
        CData/*3:0*/ ysyx_26010027__DOT__idu_exu_alu_op;
        CData/*1:0*/ ysyx_26010027__DOT__idu_exu_mem_w;
        CData/*2:0*/ ysyx_26010027__DOT__idu_exu_mem_r;
        CData/*0:0*/ ysyx_26010027__DOT__idu_exu_alu_arc1;
        CData/*0:0*/ ysyx_26010027__DOT__idu_exu_alu_arc2;
        CData/*0:0*/ ysyx_26010027__DOT__idu_exu_reg_w;
        CData/*1:0*/ ysyx_26010027__DOT__idu_exu_rf_res;
        CData/*4:0*/ ysyx_26010027__DOT__idu_exu_waddr;
        CData/*1:0*/ ysyx_26010027__DOT__idu_exu_jump;
        CData/*2:0*/ ysyx_26010027__DOT__idu_exu_branch;
        CData/*0:0*/ ysyx_26010027__DOT__idu_exu_fencei;
        CData/*4:0*/ ysyx_26010027__DOT__idu_exu_raddr1;
        CData/*4:0*/ ysyx_26010027__DOT__idu_exu_raddr2;
        CData/*0:0*/ ysyx_26010027__DOT__idu_exu_csr_we;
        CData/*0:0*/ ysyx_26010027__DOT__idu_exu_csr_ecall;
        CData/*0:0*/ ysyx_26010027__DOT__idu_exu_csr_mret;
        CData/*0:0*/ ysyx_26010027__DOT__exu_lsu_valid;
        CData/*1:0*/ ysyx_26010027__DOT__exu_lsu_mem_w;
        CData/*2:0*/ ysyx_26010027__DOT__exu_lsu_mem_r;
        CData/*0:0*/ ysyx_26010027__DOT__exu_lsu_reg_w;
        CData/*1:0*/ ysyx_26010027__DOT__exu_lsu_rf_res;
        CData/*4:0*/ ysyx_26010027__DOT__exu_lsu_waddr;
        CData/*0:0*/ ysyx_26010027__DOT__exu_lsu_csr_we;
        CData/*0:0*/ ysyx_26010027__DOT__exu_lsu_csr_ecall;
        CData/*0:0*/ ysyx_26010027__DOT__exu_lsu_csr_mret;
        CData/*0:0*/ ysyx_26010027__DOT__exu_flush;
        CData/*0:0*/ ysyx_26010027__DOT__lsu_wbu_reg_w;
        CData/*1:0*/ ysyx_26010027__DOT__lsu_wbu_rf_res;
        CData/*4:0*/ ysyx_26010027__DOT__lsu_wbu_waddr;
        CData/*0:0*/ ysyx_26010027__DOT__lsu_wbu_csr_we;
        CData/*0:0*/ ysyx_26010027__DOT__lsu_wbu_csr_ecall;
        CData/*0:0*/ ysyx_26010027__DOT__lsu_wbu_csr_mret;
        CData/*1:0*/ ysyx_26010027__DOT__grant;
        CData/*0:0*/ ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_0;
        CData/*0:0*/ ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_1;
        CData/*0:0*/ ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready;
        CData/*1:0*/ ysyx_26010027__DOT__my_IFU__DOT__state;
        CData/*0:0*/ ysyx_26010027__DOT__my_IFU__DOT__arvalid_q;
        CData/*0:0*/ ysyx_26010027__DOT__my_IFU__DOT__flush_ar_sent;
        CData/*0:0*/ ysyx_26010027__DOT__my_IFU__DOT__ar_flag;
        CData/*0:0*/ ysyx_26010027__DOT__my_IFU__DOT__handshake_ar;
        CData/*0:0*/ ysyx_26010027__DOT__my_IFU__DOT__handshake_r;
        CData/*0:0*/ ysyx_26010027__DOT__my_IFU__DOT__flush_flag;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__inst_I;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__inst_U;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__slti;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__slli;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__srli;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__srai;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__sltiu;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__xori;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__ori;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__andi;
    };
    struct {
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__lbu;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__lhu;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__lw;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__lh;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__lb;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__sub;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__sll;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__slt;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__sltu;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__srl;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__sra;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__r_xor;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__r_or;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__r_and;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__sw;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__sb;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__sh;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__bne;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__beq;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__blt;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__bge;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__bltu;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__bgeu;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__csrrw;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__csrrs;
        CData/*2:0*/ ysyx_26010027__DOT__my_IDU__DOT__branch;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__illegal;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_14;
        CData/*0:0*/ ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready;
        CData/*0:0*/ ysyx_26010027__DOT__my_EXU__DOT__lsu_exu_ready;
        CData/*0:0*/ ysyx_26010027__DOT__my_EXU__DOT__lsu_wbu_valid;
        CData/*0:0*/ ysyx_26010027__DOT__my_EXU__DOT__lsu_load_inflight;
        CData/*0:0*/ ysyx_26010027__DOT__my_EXU__DOT__lts;
        CData/*0:0*/ ysyx_26010027__DOT__my_EXU__DOT__ltu;
        CData/*0:0*/ ysyx_26010027__DOT__my_EXU__DOT__taken;
        CData/*0:0*/ ysyx_26010027__DOT__my_EXU__DOT__fwd_1__BRA__2__KET__;
        CData/*0:0*/ ysyx_26010027__DOT__my_EXU__DOT__fwd_1__BRA__1__KET__;
        CData/*0:0*/ ysyx_26010027__DOT__my_EXU__DOT__fwd_1__BRA__0__KET__;
        CData/*0:0*/ ysyx_26010027__DOT__my_EXU__DOT__fwd_2__BRA__2__KET__;
        CData/*0:0*/ ysyx_26010027__DOT__my_EXU__DOT__fwd_2__BRA__1__KET__;
        CData/*0:0*/ ysyx_26010027__DOT__my_EXU__DOT__fwd_2__BRA__0__KET__;
        CData/*0:0*/ ysyx_26010027__DOT__my_EXU__DOT__csr_fwd__BRA__1__KET__;
        CData/*0:0*/ ysyx_26010027__DOT__my_EXU__DOT__csr_fwd__BRA__0__KET__;
        CData/*0:0*/ ysyx_26010027__DOT__my_EXU__DOT__lsu_fwd_flag;
        CData/*0:0*/ ysyx_26010027__DOT__my_EXU__DOT__wbu_fwd_flag;
        CData/*0:0*/ ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_2;
        CData/*0:0*/ ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_3;
        CData/*0:0*/ ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_4;
        CData/*0:0*/ ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_5;
        CData/*0:0*/ ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_7;
        CData/*0:0*/ ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_8;
        CData/*0:0*/ ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_11;
        CData/*0:0*/ ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid;
        CData/*0:0*/ ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rvalid;
        CData/*1:0*/ ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp;
        CData/*0:0*/ ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid;
        CData/*0:0*/ ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_wvalid;
        CData/*1:0*/ ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp;
        CData/*0:0*/ ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bvalid;
        CData/*0:0*/ ysyx_26010027__DOT__my_LSU__DOT__l_busy;
        CData/*1:0*/ ysyx_26010027__DOT__my_LSU__DOT__l_mem_w;
        CData/*2:0*/ ysyx_26010027__DOT__my_LSU__DOT__l_mem_r;
        CData/*0:0*/ ysyx_26010027__DOT__my_LSU__DOT__mem_done;
    };
    struct {
        CData/*2:0*/ ysyx_26010027__DOT__my_LSU__DOT__state_w;
        CData/*1:0*/ ysyx_26010027__DOT__my_LSU__DOT__state_r;
        CData/*0:0*/ ysyx_26010027__DOT__my_LSU__DOT__store_q;
        CData/*0:0*/ ysyx_26010027__DOT__my_LSU__DOT__handshake_r;
        CData/*0:0*/ ysyx_26010027__DOT__my_LSU__DOT__handshake_b;
        CData/*4:0*/ ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__waddr;
        CData/*0:0*/ __VdfgRegularize_he50b618e_0_5;
        CData/*5:0*/ __Vtableidx7;
        CData/*0:0*/ __Vdly__ysyx_26010027__DOT__ifu_idu_valid;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
        SData/*11:0*/ ysyx_26010027__DOT__idu_exu_csr_raddr;
        SData/*11:0*/ ysyx_26010027__DOT__idu_exu_csr_waddr;
        SData/*11:0*/ ysyx_26010027__DOT__exu_lsu_csr_waddr;
        SData/*11:0*/ ysyx_26010027__DOT__lsu_wbu_csr_waddr;
        IData/*31:0*/ ysyx_26010027__DOT__pmem_read_data;
        IData/*31:0*/ ysyx_26010027__DOT__ifu_idu_pc;
        IData/*31:0*/ ysyx_26010027__DOT__idu_exu_pc;
        IData/*31:0*/ ysyx_26010027__DOT__idu_exu_inst;
        IData/*31:0*/ ysyx_26010027__DOT__idu_exu_imm;
        IData/*31:0*/ ysyx_26010027__DOT__idu_exu_target;
        IData/*31:0*/ ysyx_26010027__DOT__idu_exu_rdata1;
        IData/*31:0*/ ysyx_26010027__DOT__idu_exu_rdata2;
        IData/*31:0*/ ysyx_26010027__DOT__idu_exu_csr_rdata;
        IData/*31:0*/ ysyx_26010027__DOT__exu_lsu_pc;
        IData/*31:0*/ ysyx_26010027__DOT__exu_lsu_snpc;
        IData/*31:0*/ ysyx_26010027__DOT__exu_lsu_inst;
        IData/*31:0*/ ysyx_26010027__DOT__exu_lsu_mem_addr;
        IData/*31:0*/ ysyx_26010027__DOT__exu_lsu_wdata;
        IData/*31:0*/ ysyx_26010027__DOT__exu_lsu_alu_result;
        IData/*31:0*/ ysyx_26010027__DOT__exu_lsu_csr_wdata;
        IData/*31:0*/ ysyx_26010027__DOT__lsu_wbu_pc;
        IData/*31:0*/ ysyx_26010027__DOT__lsu_wbu_snpc;
        IData/*31:0*/ ysyx_26010027__DOT__lsu_wbu_inst;
        IData/*31:0*/ ysyx_26010027__DOT__lsu_wbu_alu_result;
        IData/*31:0*/ ysyx_26010027__DOT__lsu_wbu_mem_result;
        IData/*31:0*/ ysyx_26010027__DOT__lsu_wbu_csr_wdata;
        IData/*31:0*/ ysyx_26010027__DOT__my_IFU__DOT__ifu_idu_inst;
        IData/*31:0*/ ysyx_26010027__DOT__my_IFU__DOT__araddr_q;
        IData/*31:0*/ ysyx_26010027__DOT__my_IFU__DOT__imm_B;
        IData/*31:0*/ ysyx_26010027__DOT__my_IFU__DOT__imm_J;
        IData/*31:0*/ ysyx_26010027__DOT__my_IFU__DOT__next_pc;
        IData/*31:0*/ ysyx_26010027__DOT__my_IDU__DOT__imm;
        IData/*31:0*/ ysyx_26010027__DOT__my_EXU__DOT__src1;
        IData/*31:0*/ ysyx_26010027__DOT__my_EXU__DOT__src2;
        IData/*31:0*/ ysyx_26010027__DOT__my_EXU__DOT__rdata2;
        IData/*31:0*/ ysyx_26010027__DOT__my_EXU__DOT__alu_result;
        IData/*31:0*/ ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr;
        IData/*31:0*/ ysyx_26010027__DOT__my_LSU__DOT__l_wdata;
        IData/*31:0*/ ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted;
        IData/*31:0*/ ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__wdata;
        IData/*31:0*/ ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__i;
        IData/*31:0*/ ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mstatus;
        IData/*31:0*/ ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mtvec;
        IData/*31:0*/ ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mepc;
        IData/*31:0*/ ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mcause;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mc;
        VlUnpacked<IData/*31:0*/, 16> ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    };
    struct {
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vysyx_26010027__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vysyx_26010027___024root(Vysyx_26010027__Syms* symsp, const char* namep);
    ~Vysyx_26010027___024root();
    VL_UNCOPYABLE(Vysyx_26010027___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
