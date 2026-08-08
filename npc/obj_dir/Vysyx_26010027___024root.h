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
        VL_OUT8(nothing,0,0);
        CData/*4:0*/ ysyx_26010027__DOT__waddr;
        CData/*2:0*/ ysyx_26010027__DOT__b_type;
        CData/*0:0*/ ysyx_26010027__DOT__arb_arvalid;
        CData/*1:0*/ ysyx_26010027__DOT__arb_rresp;
        CData/*3:0*/ ysyx_26010027__DOT__arb_rid;
        CData/*0:0*/ ysyx_26010027__DOT__arb_rlast;
        CData/*0:0*/ ysyx_26010027__DOT__arb_awvalid;
        CData/*3:0*/ ysyx_26010027__DOT__arb_bid;
        CData/*0:0*/ ysyx_26010027__DOT__pmem_rvalid;
        CData/*0:0*/ ysyx_26010027__DOT__pmem_wready;
        CData/*0:0*/ ysyx_26010027__DOT__pmem_bvalid;
        CData/*1:0*/ ysyx_26010027__DOT__pmem_bresp;
        CData/*1:0*/ ysyx_26010027__DOT__grant;
        CData/*0:0*/ ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_2;
        CData/*0:0*/ ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_3;
        CData/*0:0*/ ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_4;
        CData/*0:0*/ ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rvalid;
        CData/*1:0*/ ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rresp;
        CData/*0:0*/ ysyx_26010027__DOT__my_IFU__DOT__lsu_stall;
        CData/*1:0*/ ysyx_26010027__DOT__my_IFU__DOT__state;
        CData/*0:0*/ ysyx_26010027__DOT__my_IFU__DOT__handshake_ar;
        CData/*0:0*/ ysyx_26010027__DOT__my_IFU__DOT__handshake_r;
        CData/*0:0*/ ysyx_26010027__DOT__my_IFU__DOT__lsu_pending;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__reg_w;
        CData/*1:0*/ ysyx_26010027__DOT__my_IDU__DOT__rf_res;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__inst_I;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__inst_U;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__addi;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__slti;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__slli;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__srli;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__srai;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__sltiu;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__xori;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__ori;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__andi;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__lbu;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__lhu;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__lw;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__lh;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__lb;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__ld_type;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__add;
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
    };
    struct {
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__csrrw;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT__csrrs;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_4;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_12;
        CData/*0:0*/ ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_13;
        CData/*3:0*/ ysyx_26010027__DOT__my_EXU__DOT__alu_op;
        CData/*1:0*/ ysyx_26010027__DOT__my_LSU__DOT__mem_w;
        CData/*2:0*/ ysyx_26010027__DOT__my_LSU__DOT__mem_r;
        CData/*0:0*/ ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid;
        CData/*0:0*/ ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rvalid;
        CData/*1:0*/ ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp;
        CData/*0:0*/ ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid;
        CData/*0:0*/ ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_wvalid;
        CData/*1:0*/ ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp;
        CData/*0:0*/ ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bvalid;
        CData/*2:0*/ ysyx_26010027__DOT__my_LSU__DOT__state_w;
        CData/*1:0*/ ysyx_26010027__DOT__my_LSU__DOT__state_r;
        CData/*0:0*/ ysyx_26010027__DOT__my_LSU__DOT__ren;
        CData/*0:0*/ ysyx_26010027__DOT__my_LSU__DOT__wen;
        CData/*0:0*/ ysyx_26010027__DOT__my_LSU__DOT__handshake_r;
        CData/*0:0*/ ysyx_26010027__DOT__my_LSU__DOT__handshake_b;
        CData/*0:0*/ ysyx_26010027__DOT__my_LSU__DOT____VdfgRegularize_hc408d56f_0_0;
        CData/*1:0*/ ysyx_26010027__DOT__my_CSR__DOT__j_type;
        CData/*0:0*/ ysyx_26010027__DOT__my_CSR__DOT__csr_we;
        CData/*5:0*/ __Vtableidx3;
        CData/*1:0*/ __Vdly__ysyx_26010027__DOT__grant;
        CData/*1:0*/ __Vdly__ysyx_26010027__DOT__my_IFU__DOT__state;
        CData/*0:0*/ __Vdly__ysyx_26010027__DOT__my_IFU__DOT__lsu_pending;
        CData/*2:0*/ __Vdly__ysyx_26010027__DOT__my_LSU__DOT__state_w;
        CData/*1:0*/ __Vdly__ysyx_26010027__DOT__my_LSU__DOT__state_r;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
        IData/*31:0*/ ysyx_26010027__DOT__pc;
        IData/*31:0*/ ysyx_26010027__DOT__alu_result;
        IData/*31:0*/ ysyx_26010027__DOT__wdata;
        IData/*31:0*/ ysyx_26010027__DOT__pmem_read_data;
        IData/*31:0*/ ysyx_26010027__DOT__pmem_write_data;
        IData/*31:0*/ ysyx_26010027__DOT__R__DOT__i;
        IData/*31:0*/ ysyx_26010027__DOT__my_IFU__DOT__n_pc;
        IData/*31:0*/ ysyx_26010027__DOT__my_IFU__DOT__inst;
        IData/*31:0*/ ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rdata;
        IData/*31:0*/ ysyx_26010027__DOT__my_IFU__DOT__inst_latch;
        IData/*31:0*/ ysyx_26010027__DOT__my_EXU__DOT__src2;
        IData/*31:0*/ ysyx_26010027__DOT__my_EXU__DOT__imm;
        IData/*31:0*/ ysyx_26010027__DOT__my_EXU__DOT__csr_result;
        IData/*31:0*/ ysyx_26010027__DOT__my_EXU__DOT__rs1;
        IData/*31:0*/ ysyx_26010027__DOT__my_EXU__DOT__rs2;
        IData/*31:0*/ ysyx_26010027__DOT__my_EXU__DOT__result;
        IData/*31:0*/ ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted;
        IData/*31:0*/ ysyx_26010027__DOT__my_CSR__DOT__mstatus;
        IData/*31:0*/ ysyx_26010027__DOT__my_CSR__DOT__mtvec;
        IData/*31:0*/ ysyx_26010027__DOT__my_CSR__DOT__mepc;
        IData/*31:0*/ ysyx_26010027__DOT__my_CSR__DOT__mcause;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ ysyx_26010027__DOT__my_CSR__DOT__mc;
        VlUnpacked<IData/*31:0*/, 32> ysyx_26010027__DOT__R__DOT__rf;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
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
