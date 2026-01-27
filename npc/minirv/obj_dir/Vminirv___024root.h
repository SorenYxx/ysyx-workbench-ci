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
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*4:0*/ minirv__DOT__waddr;
    CData/*2:0*/ minirv__DOT__op_type;
    CData/*0:0*/ minirv__DOT__reg_w;
    CData/*0:0*/ minirv__DOT__mem_w;
    CData/*0:0*/ minirv__DOT__mem_r;
    CData/*6:0*/ minirv__DOT__my_IDU__DOT__opcode;
    CData/*2:0*/ minirv__DOT__my_IDU__DOT__funct3;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    VL_OUT(cur_pc,31,0);
    VL_OUT(cur_inst,31,0);
    IData/*31:0*/ minirv__DOT__inst;
    IData/*31:0*/ minirv__DOT__pc;
    IData/*31:0*/ minirv__DOT__imm;
    IData/*31:0*/ minirv__DOT__m_result;
    IData/*31:0*/ minirv__DOT__wdata;
    IData/*31:0*/ minirv__DOT__my_EXU__DOT__src1;
    IData/*31:0*/ minirv__DOT__my_EXU__DOT__src2;
    IData/*31:0*/ minirv__DOT__my_EXU__DOT__result;
    IData/*31:0*/ minirv__DOT__my_LSU__DOT____VdfgExtracted_hc5e5ffbe__0;
    IData/*31:0*/ minirv__DOT__my_WBU__DOT__n_pc;
    IData/*31:0*/ __Vfunc_pmem_read__2__Vfuncout;
    IData/*31:0*/ __Vfunc_pmem_read__3__Vfuncout;
    IData/*31:0*/ __Vfunc_pmem_read__6__Vfuncout;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_8;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> minirv__DOT__R__DOT__rf;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;

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
