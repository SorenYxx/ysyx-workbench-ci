// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vminirv.h for the primary calling header

#ifndef VERILATED_VMINIRV___024ROOT_H_
#define VERILATED_VMINIRV___024ROOT_H_  // guard

#include "verilated.h"
class Vminirv___024unit;


class Vminirv__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vminirv___024root final {
  public:
    // CELLS
    Vminirv___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*2:0*/ minirv__DOT__b_type;
        CData/*4:0*/ minirv__DOT__R__DOT__waddr;
        CData/*0:0*/ minirv__DOT__R__DOT__wen;
        CData/*2:0*/ minirv__DOT__my_IDU__DOT__mem_r;
        CData/*1:0*/ minirv__DOT__my_IDU__DOT__rf_res;
        CData/*3:0*/ minirv__DOT__my_IDU__DOT__alu_op;
        CData/*1:0*/ minirv__DOT__my_IDU__DOT__j_type;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__ebreak_type;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__inst_I;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__inst_U;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__addi;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__slti;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__slli;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__srli;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__srai;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__sltiu;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__xori;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__ori;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__andi;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__lbu;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__lhu;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__lw;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__lh;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__lb;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__ld_type;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__add;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__sub;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__sll;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__slt;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__sltu;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__srl;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__sra;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__r_xor;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__r_or;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__r_and;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__sw;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__sb;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__sh;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__bne;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__beq;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__blt;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__bge;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__bltu;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__bgeu;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__csrrw;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__csrrs;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT__mret;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_4;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_11;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_12;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_13;
        CData/*0:0*/ minirv__DOT__my_IDU__DOT____VdfgRegularize_h52656aab_0_14;
        CData/*5:0*/ __Vtableidx1;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
        VL_OUT(cur_pc,31,0);
        VL_OUT(cur_inst,31,0);
        IData/*31:0*/ minirv__DOT__inst;
        IData/*31:0*/ minirv__DOT__alu_result;
        IData/*31:0*/ minirv__DOT__wdata;
        IData/*31:0*/ minirv__DOT__pc;
    };
    struct {
        IData/*31:0*/ minirv__DOT__n_pc;
        IData/*31:0*/ minirv__DOT__R__DOT__rdata2;
        IData/*31:0*/ minirv__DOT__my_IDU__DOT__imm;
        IData/*31:0*/ minirv__DOT__my_EXU__DOT__rs1;
        IData/*31:0*/ minirv__DOT__my_EXU__DOT__rs2;
        IData/*31:0*/ minirv__DOT__my_EXU__DOT__result;
        IData/*31:0*/ minirv__DOT__my_LSU__DOT__rdata;
        IData/*31:0*/ minirv__DOT__my_LSU__DOT__data_s;
        IData/*31:0*/ __Vfunc_pmem_read__3__Vfuncout;
        IData/*31:0*/ __Vfunc_csr_read__5__Vfuncout;
        IData/*31:0*/ __Vfunc_isa_raise_intr__6__Vfuncout;
        IData/*31:0*/ __Vfunc_csr_read__7__Vfuncout;
        IData/*31:0*/ __Vfunc_csr_read__9__Vfuncout;
        IData/*31:0*/ __Vfunc_pmem_read__11__Vfuncout;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> minirv__DOT__R__DOT__rf;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vminirv__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vminirv___024root(Vminirv__Syms* symsp, const char* namep);
    ~Vminirv___024root();
    VL_UNCOPYABLE(Vminirv___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
