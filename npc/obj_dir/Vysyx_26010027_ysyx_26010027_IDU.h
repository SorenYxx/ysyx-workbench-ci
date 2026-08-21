// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_26010027.h for the primary calling header

#ifndef VERILATED_VYSYX_26010027_YSYX_26010027_IDU_H_
#define VERILATED_VYSYX_26010027_YSYX_26010027_IDU_H_  // guard

#include "verilated.h"


class Vysyx_26010027__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_26010027_ysyx_26010027_IDU final {
public:
// Anonymous structures to workaround compiler member-count bugs
struct {
VL_IN8(__PVT__clock,0,0);
VL_IN8(__PVT__reset,0,0);
VL_IN8(__PVT__ifu_idu_valid,0,0);
VL_OUT8(__PVT__idu_ifu_ready,0,0);
VL_IN8(__PVT__exu_idu_ready,0,0);
VL_OUT8(__PVT__idu_exu_valid,0,0);
VL_OUT8(__PVT__idu_exu_alu_op,3,0);
VL_OUT8(__PVT__idu_exu_mem_w,1,0);
VL_OUT8(__PVT__idu_exu_mem_r,2,0);
VL_OUT8(__PVT__idu_exu_alu_arc1,0,0);
VL_OUT8(__PVT__idu_exu_alu_arc2,0,0);
VL_OUT8(__PVT__idu_exu_reg_w,0,0);
VL_OUT8(__PVT__idu_exu_rf_res,1,0);
VL_OUT8(__PVT__idu_exu_waddr,4,0);
VL_OUT8(__PVT__idu_exu_jump,1,0);
VL_OUT8(__PVT__idu_exu_branch,2,0);
VL_OUT8(__PVT__idu_exu_fencei,0,0);
VL_IN8(__PVT__exu_flush,0,0);
VL_OUT8(__PVT__idu_exu_csr_we,0,0);
VL_OUT8(__PVT__idu_exu_csr_ecall,0,0);
VL_OUT8(__PVT__idu_exu_csr_mret,0,0);
VL_OUT8(__PVT__idu_wbu_raddr1,4,0);
VL_OUT8(__PVT__idu_wbu_raddr2,4,0);
CData/*6:0*/ __PVT__opcode;
CData/*2:0*/ __PVT__funct3;
CData/*6:0*/ __PVT__funct7;
CData/*0:0*/ __PVT__inst_I;
CData/*0:0*/ __PVT__inst_U;
CData/*0:0*/ __PVT__inst_B;
CData/*0:0*/ __PVT__inst_S;
CData/*0:0*/ __PVT__inst_J;
CData/*0:0*/ __PVT__inst_R;
CData/*0:0*/ __PVT__I_a;
CData/*0:0*/ __PVT__I_b;
CData/*0:0*/ __PVT__I_c;
CData/*0:0*/ __PVT__addi;
CData/*0:0*/ __PVT__slti;
CData/*0:0*/ __PVT__slli;
CData/*0:0*/ __PVT__srli;
CData/*0:0*/ __PVT__srai;
CData/*0:0*/ __PVT__sltiu;
CData/*0:0*/ __PVT__xori;
CData/*0:0*/ __PVT__ori;
CData/*0:0*/ __PVT__andi;
CData/*0:0*/ __PVT__lbu;
CData/*0:0*/ __PVT__lhu;
CData/*0:0*/ __PVT__lw;
CData/*0:0*/ __PVT__lh;
CData/*0:0*/ __PVT__lb;
CData/*0:0*/ __PVT__jalr;
CData/*0:0*/ __PVT__i_inst;
CData/*0:0*/ __PVT__ld_type;
CData/*0:0*/ __PVT__add;
CData/*0:0*/ __PVT__sub;
CData/*0:0*/ __PVT__sll;
CData/*0:0*/ __PVT__slt;
CData/*0:0*/ __PVT__sltu;
CData/*0:0*/ __PVT__srl;
CData/*0:0*/ __PVT__sra;
CData/*0:0*/ __PVT__r_xor;
CData/*0:0*/ __PVT__r_or;
CData/*0:0*/ __PVT__r_and;
CData/*0:0*/ __PVT__r_inst;
CData/*0:0*/ __PVT__sw;
};
struct {
CData/*0:0*/ __PVT__sb;
CData/*0:0*/ __PVT__sh;
CData/*0:0*/ __PVT__s_inst;
CData/*0:0*/ __PVT__bne;
CData/*0:0*/ __PVT__beq;
CData/*0:0*/ __PVT__blt;
CData/*0:0*/ __PVT__bge;
CData/*0:0*/ __PVT__bltu;
CData/*0:0*/ __PVT__bgeu;
CData/*0:0*/ __PVT__b_inst;
CData/*0:0*/ __PVT__lui;
CData/*0:0*/ __PVT__auipc;
CData/*0:0*/ __PVT__jal;
CData/*0:0*/ __PVT__csrrw;
CData/*0:0*/ __PVT__csrrs;
CData/*0:0*/ __PVT__csrrc;
CData/*0:0*/ __PVT__csr_inst;
CData/*0:0*/ __PVT__csr_ecall;
CData/*0:0*/ __PVT__csr_mret;
CData/*1:0*/ __PVT__jump;
CData/*2:0*/ __PVT__branch;
CData/*1:0*/ __PVT__rf_res;
CData/*3:0*/ __PVT__alu_op;
CData/*0:0*/ __PVT__alu_arc1;
CData/*0:0*/ __PVT__alu_arc2;
CData/*0:0*/ __PVT__reg_w;
CData/*1:0*/ __PVT__mem_w;
CData/*2:0*/ __PVT__mem_r;
CData/*0:0*/ __PVT__fence_i;
CData/*0:0*/ __PVT__ebreak;
CData/*4:0*/ __PVT__raddr1;
CData/*4:0*/ __PVT__raddr2;
CData/*4:0*/ __PVT__waddr;
CData/*0:0*/ __PVT__illegal;
CData/*0:0*/ __Vdly__idu_exu_valid;
CData/*3:0*/ __Vdly__idu_exu_alu_op;
CData/*1:0*/ __Vdly__idu_exu_mem_w;
CData/*2:0*/ __Vdly__idu_exu_mem_r;
CData/*0:0*/ __Vdly__idu_exu_alu_arc1;
CData/*0:0*/ __Vdly__idu_exu_alu_arc2;
CData/*0:0*/ __Vdly__idu_exu_reg_w;
CData/*1:0*/ __Vdly__idu_exu_rf_res;
CData/*4:0*/ __Vdly__idu_exu_waddr;
CData/*1:0*/ __Vdly__idu_exu_jump;
CData/*2:0*/ __Vdly__idu_exu_branch;
CData/*0:0*/ __Vdly__idu_exu_fencei;
CData/*0:0*/ __Vdly__idu_exu_csr_we;
CData/*0:0*/ __Vdly__idu_exu_csr_ecall;
CData/*0:0*/ __Vdly__idu_exu_csr_mret;
CData/*4:0*/ __Vdly__idu_wbu_raddr1;
CData/*4:0*/ __Vdly__idu_wbu_raddr2;
VL_OUT16(__PVT__idu_wbu_csr_raddr,11,0);
VL_OUT16(__PVT__idu_exu_csr_waddr,11,0);
SData/*11:0*/ __PVT__csr_addr;
SData/*11:0*/ __Vdly__idu_wbu_csr_raddr;
SData/*11:0*/ __Vdly__idu_exu_csr_waddr;
VL_IN(__PVT__ifu_idu_pc,31,0);
VL_IN(__PVT__ifu_idu_inst,31,0);
VL_OUT(__PVT__idu_exu_pc,31,0);
VL_OUT(__PVT__idu_exu_inst,31,0);
VL_OUT(__PVT__idu_exu_target,31,0);
VL_OUT(__PVT__idu_exu_imm,31,0);
IData/*31:0*/ __PVT__inst;
IData/*31:0*/ __PVT__imm;
};
struct {
IData/*31:0*/ __PVT__target;
IData/*31:0*/ __Vdly__idu_exu_pc;
IData/*31:0*/ __Vdly__idu_exu_inst;
IData/*31:0*/ __Vdly__idu_exu_target;
IData/*31:0*/ __Vdly__idu_exu_imm;
};
Vysyx_26010027__Syms* vlSymsp;
const char* vlNamep;
Vysyx_26010027_ysyx_26010027_IDU() = default;
~Vysyx_26010027_ysyx_26010027_IDU() = default;
void ctor(Vysyx_26010027__Syms* symsp, const char* namep);
void dtor();
VL_UNCOPYABLE(Vysyx_26010027_ysyx_26010027_IDU);
void __Vconfigure(bool first);
};


#endif  // guard
