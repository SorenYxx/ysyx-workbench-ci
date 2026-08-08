// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vysyx_26010027__Syms.h"


VL_ATTR_COLD void Vysyx_26010027___024root__trace_init_sub__TOP__0(Vysyx_26010027___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root__trace_init_sub__TOP__0\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+188,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"nothing",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ysyx_26010027", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+188,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"nothing",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"n_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"rdata1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"rdata2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"mem_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"csr_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"out_mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"out_mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+87,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+88,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+89,0,"waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+90,0,"rf_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+91,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+92,0,"mem_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+93,0,"mem_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+94,0,"csr_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"reg_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"alu_arc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"alu_arc2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"j_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+99,0,"b_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+100,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+101,0,"ebreak_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"ifu_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"lsu_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"arb_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"arb_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"arb_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"arb_arid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+196,0,"arb_arlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+68,0,"arb_arsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+197,0,"arb_arburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+43,0,"arb_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"arb_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"arb_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+198,0,"arb_rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+199,0,"arb_rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+200,0,"arb_rlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"arb_awvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"arb_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"arb_awaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"arb_awid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+196,0,"arb_awlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+106,0,"arb_awsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+197,0,"arb_awburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+107,0,"arb_wvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"arb_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"arb_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"arb_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+201,0,"arb_wlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"arb_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"arb_bready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"arb_bresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+202,0,"arb_bid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+44,0,"pmem_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"pmem_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"pmem_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"pmem_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"pmem_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"pmem_bresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+51,0,"ifu_cpu_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"cpu_ifu_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"ifu_cpu_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"ifu_cpu_arid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+196,0,"ifu_cpu_arlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+204,0,"ifu_cpu_arsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+197,0,"ifu_cpu_arburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+110,0,"cpu_ifu_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"ifu_cpu_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"cpu_ifu_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"cpu_ifu_rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+54,0,"cpu_ifu_rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+55,0,"cpu_ifu_rlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"lsu_cpu_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"cpu_lsu_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"lsu_cpu_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"lsu_cpu_arid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+196,0,"lsu_cpu_arlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+113,0,"lsu_cpu_arsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+197,0,"lsu_cpu_arburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+114,0,"cpu_lsu_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"lsu_cpu_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+192,0,"cpu_lsu_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"cpu_lsu_rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+58,0,"cpu_lsu_rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+59,0,"cpu_lsu_rlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"lsu_cpu_awvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"cpu_lsu_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"lsu_cpu_awaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"lsu_cpu_awid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+196,0,"lsu_cpu_awlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+106,0,"lsu_cpu_awsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+197,0,"lsu_cpu_awburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+107,0,"lsu_cpu_wvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"cpu_lsu_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"lsu_cpu_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"lsu_cpu_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+201,0,"lsu_cpu_wlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"cpu_lsu_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"lsu_cpu_bready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"cpu_lsu_bresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+60,0,"cpu_lsu_bid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+61,0,"grant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+197,0,"IFU_GRANT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+205,0,"LSU_GRANT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+72,0,"handshake_ifu_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"handshake_lsu_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"handshake_lsu_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"access_fault",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("R", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+206,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+207,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+100,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+95,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"raddr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+87,0,"raddr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+191,0,"rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+3+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+35,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("my_CSR", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+188,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"j_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+119,0,"csr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+83,0,"csr_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+94,0,"csr_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"ifu_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"csr_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"out_mepc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"out_mtvec",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"mvendorid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"marchid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"mstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"mcause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+38,0,"mc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+40,0,"mcycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"mcycleh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("my_EXU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+48,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+99,0,"b_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+96,0,"alu_arc1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"alu_arc2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+191,0,"src1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"src2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"csr_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"snpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("my_IDU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+79,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+102,0,"ifu_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"lsu_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+87,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+88,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+95,0,"reg_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"rf_res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+91,0,"alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+94,0,"csr_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"mem_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+93,0,"mem_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+96,0,"alu_arc1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"alu_arc2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"j_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+99,0,"b_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+101,0,"ebreak_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+124,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+125,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+126,0,"inst_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"inst_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"inst_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"inst_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"inst_J",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"inst_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"I_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"I_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"I_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"slti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"sltiu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"xori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"ori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"i_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"ld_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"r_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"r_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"r_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"r_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"s_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"b_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"csrrw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"csrrs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"csrrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"mret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"csr_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"illegal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("my_IFU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+188,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"n_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"cpu_ifu_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"ifu_cpu_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+51,0,"ifu_cpu_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+195,0,"ifu_cpu_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+196,0,"ifu_cpu_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+204,0,"ifu_cpu_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+197,0,"ifu_cpu_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+110,0,"cpu_ifu_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"ifu_cpu_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"cpu_ifu_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"cpu_ifu_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+54,0,"cpu_ifu_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+55,0,"cpu_ifu_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"ifu_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"lsu_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+210,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+197,0,"WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+75,0,"handshake_ar",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"handshake_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"lsu_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"inst_latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("my_LSU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+188,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"mem_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+93,0,"mem_r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+83,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+70,0,"cpu_lsu_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"lsu_cpu_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+112,0,"lsu_cpu_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+195,0,"lsu_cpu_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+196,0,"lsu_cpu_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+113,0,"lsu_cpu_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+197,0,"lsu_cpu_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+56,0,"lsu_cpu_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"cpu_lsu_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+192,0,"cpu_lsu_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"cpu_lsu_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+58,0,"cpu_lsu_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+59,0,"cpu_lsu_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"lsu_cpu_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+115,0,"lsu_cpu_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+195,0,"lsu_cpu_awid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+196,0,"lsu_cpu_awlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+106,0,"lsu_cpu_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+197,0,"lsu_cpu_awburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+71,0,"cpu_lsu_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"lsu_cpu_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"lsu_cpu_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+107,0,"lsu_cpu_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"lsu_cpu_wlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"cpu_lsu_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"cpu_lsu_bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+116,0,"cpu_lsu_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"lsu_cpu_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"cpu_lsu_bid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+103,0,"lsu_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"ifu_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"state_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+66,0,"state_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+211,0,"W_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+212,0,"W_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+204,0,"W_RESP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+210,0,"R_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+197,0,"R_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+183,0,"ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"wdata_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"rdata_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"handshake_aw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"handshake_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"handshake_ar",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"handshake_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"handshake_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("my_WBU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+48,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+90,0,"rf_res",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+98,0,"j_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+99,0,"b_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+83,0,"alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"mem_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"csr_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"mepc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"mtvec",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+95,0,"reg_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+100,0,"wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"n_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vysyx_26010027___024root__trace_init_top(Vysyx_26010027___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root__trace_init_top\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_26010027___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_26010027___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vysyx_26010027___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vysyx_26010027___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vysyx_26010027___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vysyx_26010027___024root__trace_register(Vysyx_26010027___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root__trace_register\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vysyx_26010027___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vysyx_26010027___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vysyx_26010027___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vysyx_26010027___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_26010027___024root__trace_const_0_sub_0(Vysyx_26010027___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vysyx_26010027___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root__trace_const_0\n"); );
    // Body
    Vysyx_26010027___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_26010027___024root*>(voidSelf);
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vysyx_26010027___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_26010027___024root__trace_const_0_sub_0(Vysyx_26010027___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root__trace_const_0_sub_0\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+195,(0U),4);
    bufp->fullCData(oldp+196,(0U),8);
    bufp->fullCData(oldp+197,(1U),2);
    bufp->fullCData(oldp+198,(vlSelfRef.ysyx_26010027__DOT__arb_rresp),2);
    bufp->fullCData(oldp+199,(vlSelfRef.ysyx_26010027__DOT__arb_rid),4);
    bufp->fullBit(oldp+200,(vlSelfRef.ysyx_26010027__DOT__arb_rlast));
    bufp->fullBit(oldp+201,(1U));
    bufp->fullCData(oldp+202,(vlSelfRef.ysyx_26010027__DOT__arb_bid),4);
    bufp->fullIData(oldp+203,(vlSelfRef.ysyx_26010027__DOT__pmem_write_data),32);
    bufp->fullCData(oldp+204,(2U),3);
    bufp->fullCData(oldp+205,(2U),2);
    bufp->fullIData(oldp+206,(5U),32);
    bufp->fullIData(oldp+207,(0x00000020U),32);
    bufp->fullIData(oldp+208,(0x79737978U),32);
    bufp->fullIData(oldp+209,(0x018ce1abU),32);
    bufp->fullCData(oldp+210,(0U),2);
    bufp->fullCData(oldp+211,(0U),3);
    bufp->fullCData(oldp+212,(1U),3);
}

VL_ATTR_COLD void Vysyx_26010027___024root__trace_full_0_sub_0(Vysyx_26010027___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vysyx_26010027___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root__trace_full_0\n"); );
    // Body
    Vysyx_26010027___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_26010027___024root*>(voidSelf);
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vysyx_26010027___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_26010027___024root__trace_full_0_sub_0(Vysyx_26010027___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_26010027___024root__trace_full_0_sub_0\n"); );
    Vysyx_26010027__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+1,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mepc),32);
    bufp->fullIData(oldp+2,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mtvec),32);
    bufp->fullIData(oldp+3,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[0]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[1]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[2]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[3]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[4]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[5]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[6]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[7]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[8]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[9]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[10]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[11]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[12]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[13]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[14]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[15]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[16]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[17]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[18]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[19]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[20]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[21]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[22]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[23]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[24]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[25]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[26]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[27]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[28]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[29]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[30]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[31]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.ysyx_26010027__DOT__R__DOT__i),32);
    bufp->fullIData(oldp+36,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mstatus),32);
    bufp->fullIData(oldp+37,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mcause),32);
    bufp->fullQData(oldp+38,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mc),64);
    bufp->fullIData(oldp+40,((IData)(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mc)),32);
    bufp->fullIData(oldp+41,((IData)((vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mc 
                                      >> 0x00000020U))),32);
    bufp->fullIData(oldp+42,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst_latch),32);
    bufp->fullBit(oldp+43,(vlSelfRef.ysyx_26010027__DOT__pmem_rvalid));
    bufp->fullIData(oldp+44,(vlSelfRef.ysyx_26010027__DOT__pmem_read_data),32);
    bufp->fullBit(oldp+45,(vlSelfRef.ysyx_26010027__DOT__pmem_wready));
    bufp->fullBit(oldp+46,(vlSelfRef.ysyx_26010027__DOT__pmem_bvalid));
    bufp->fullCData(oldp+47,(vlSelfRef.ysyx_26010027__DOT__pmem_bresp),2);
    bufp->fullIData(oldp+48,(vlSelfRef.ysyx_26010027__DOT__pc),32);
    bufp->fullBit(oldp+49,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                             ? (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))
                             : (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r)))));
    bufp->fullBit(oldp+50,((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w))));
    bufp->fullBit(oldp+51,((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))));
    bufp->fullBit(oldp+52,((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))));
    bufp->fullCData(oldp+53,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rresp),2);
    bufp->fullCData(oldp+54,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                               ? (IData)(vlSelfRef.ysyx_26010027__DOT__arb_rid)
                               : 0U)),4);
    bufp->fullBit(oldp+55,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_rlast))));
    bufp->fullBit(oldp+56,((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r))));
    bufp->fullCData(oldp+57,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp),2);
    bufp->fullCData(oldp+58,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                               ? (IData)(vlSelfRef.ysyx_26010027__DOT__arb_rid)
                               : 0U)),4);
    bufp->fullBit(oldp+59,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_rlast))));
    bufp->fullCData(oldp+60,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                               ? (IData)(vlSelfRef.ysyx_26010027__DOT__arb_bid)
                               : 0U)),4);
    bufp->fullCData(oldp+61,(vlSelfRef.ysyx_26010027__DOT__grant),2);
    bufp->fullIData(oldp+62,(((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__pc)),32);
    bufp->fullCData(oldp+63,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state),2);
    bufp->fullBit(oldp+64,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__lsu_pending));
    bufp->fullCData(oldp+65,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w),3);
    bufp->fullCData(oldp+66,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r),2);
    bufp->fullIData(oldp+67,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                               ? vlSelfRef.ysyx_26010027__DOT__pc
                               : vlSelfRef.ysyx_26010027__DOT__alu_result)),32);
    bufp->fullCData(oldp+68,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                               ? 2U : ((0U == (3U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r)))
                                        ? 2U : ((2U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r)))
                                                 ? 1U
                                                 : 0U)))),3);
    bufp->fullBit(oldp+69,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid))));
    bufp->fullBit(oldp+70,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid))));
    bufp->fullBit(oldp+71,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_awvalid))));
    bufp->fullBit(oldp+72,(((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_2) 
                            & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rresp)))));
    bufp->fullBit(oldp+73,(((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_3) 
                            & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp)))));
    bufp->fullBit(oldp+74,((((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_2) 
                             & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rresp))) 
                            | (((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_3) 
                                & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp))) 
                               | ((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_4) 
                                  & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp)))))));
    bufp->fullBit(oldp+75,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)) 
                            & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid)))));
    bufp->fullBit(oldp+76,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rvalid) 
                            & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)) 
                               & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rresp))))));
    bufp->fullBit(oldp+77,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                             & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_awvalid)) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid))));
    bufp->fullBit(oldp+78,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                             & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid)) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid))));
    bufp->fullIData(oldp+79,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst),32);
    bufp->fullIData(oldp+80,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__n_pc),32);
    bufp->fullIData(oldp+81,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm),32);
    bufp->fullIData(oldp+82,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2),32);
    bufp->fullIData(oldp+83,(vlSelfRef.ysyx_26010027__DOT__alu_result),32);
    bufp->fullIData(oldp+84,(((4U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r))
                               ? ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r))
                                   ? 0U : ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r))
                                            ? 0U : 
                                           (0x0000ffffU 
                                            & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted)))
                               : ((2U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r))
                                   ? ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r))
                                       ? (0x000000ffU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted)
                                       : (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted 
                                                          >> 0x0000000fU)))) 
                                           << 0x00000010U) 
                                          | (0x0000ffffU 
                                             & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted)))
                                   : ((1U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted 
                                                          >> 7U)))) 
                                           << 8U) | 
                                          (0x000000ffU 
                                           & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted))
                                       : vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted)))),32);
    bufp->fullIData(oldp+85,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_result),32);
    bufp->fullCData(oldp+86,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                             >> 0x0000000fU))),5);
    bufp->fullCData(oldp+87,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                             >> 0x00000014U))),5);
    bufp->fullCData(oldp+88,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                             >> 7U))),5);
    bufp->fullCData(oldp+89,(vlSelfRef.ysyx_26010027__DOT__waddr),5);
    bufp->fullCData(oldp+90,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__rf_res),2);
    bufp->fullCData(oldp+91,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__alu_op),4);
    bufp->fullCData(oldp+92,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_w),2);
    bufp->fullCData(oldp+93,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r),3);
    bufp->fullBit(oldp+94,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__csr_we));
    bufp->fullBit(oldp+95,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__reg_w));
    bufp->fullBit(oldp+96,(((0x6fU == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
                            | (0x17U == (0x0000007fU 
                                         & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)))));
    bufp->fullBit(oldp+97,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I) 
                            | ((0x23U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
                               | ((0x17U == (0x0000007fU 
                                             & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
                                  | (0x6fU == (0x0000007fU 
                                               & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)))))));
    bufp->fullCData(oldp+98,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__j_type),2);
    bufp->fullCData(oldp+99,(vlSelfRef.ysyx_26010027__DOT__b_type),3);
    bufp->fullIData(oldp+100,(vlSelfRef.ysyx_26010027__DOT__wdata),32);
    bufp->fullBit(oldp+101,((0x00100073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    bufp->fullBit(oldp+102,((1U & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT____VdfgRegularize_hc408d56f_0_0)))));
    bufp->fullBit(oldp+103,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__lsu_stall));
    bufp->fullBit(oldp+104,(vlSelfRef.ysyx_26010027__DOT__arb_arvalid));
    bufp->fullBit(oldp+105,(vlSelfRef.ysyx_26010027__DOT__arb_awvalid));
    bufp->fullCData(oldp+106,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_w))
                                ? 2U : ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_w))
                                         ? 1U : 0U))),3);
    bufp->fullBit(oldp+107,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_wvalid));
    bufp->fullIData(oldp+108,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_w))
                                ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2
                                : VL_SHIFTL_III(32,32,32, vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2, 
                                                VL_SHIFTL_III(32,32,32, 
                                                              (3U 
                                                               & vlSelfRef.ysyx_26010027__DOT__alu_result), 3U)))),32);
    bufp->fullCData(oldp+109,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_w))
                                ? 0x0000000fU : (0x0000000fU 
                                                 & ((1U 
                                                     == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_w))
                                                     ? 
                                                    ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & vlSelfRef.ysyx_26010027__DOT__alu_result))
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_w))
                                                      ? 
                                                     ((IData)(3U) 
                                                      << 
                                                      (3U 
                                                       & vlSelfRef.ysyx_26010027__DOT__alu_result))
                                                      : 0U))))),4);
    bufp->fullBit(oldp+110,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rvalid));
    bufp->fullIData(oldp+111,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__cpu_ifu_rdata),32);
    bufp->fullBit(oldp+112,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid));
    bufp->fullCData(oldp+113,(((0U == (3U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r)))
                                ? 2U : ((2U == (3U 
                                                & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r)))
                                         ? 1U : 0U))),3);
    bufp->fullBit(oldp+114,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rvalid));
    bufp->fullBit(oldp+115,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid));
    bufp->fullBit(oldp+116,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bvalid));
    bufp->fullCData(oldp+117,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp),2);
    bufp->fullBit(oldp+118,(((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_4) 
                             & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp)))));
    bufp->fullSData(oldp+119,((0x00000fffU & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm)),12);
    bufp->fullIData(oldp+120,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1),32);
    bufp->fullIData(oldp+121,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2),32);
    bufp->fullIData(oldp+122,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__result),32);
    bufp->fullCData(oldp+123,((0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)),7);
    bufp->fullCData(oldp+124,((7U & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                     >> 0x0000000cU))),3);
    bufp->fullCData(oldp+125,((vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                               >> 0x00000019U)),7);
    bufp->fullBit(oldp+126,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I));
    bufp->fullBit(oldp+127,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U));
    bufp->fullBit(oldp+128,((0x63U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
    bufp->fullBit(oldp+129,((0x23U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
    bufp->fullBit(oldp+130,((0x6fU == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
    bufp->fullBit(oldp+131,((0x33U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
    bufp->fullBit(oldp+132,((0x13U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
    bufp->fullBit(oldp+133,((3U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
    bufp->fullBit(oldp+134,((0x73U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
    bufp->fullBit(oldp+135,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__addi));
    bufp->fullBit(oldp+136,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slti));
    bufp->fullBit(oldp+137,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slli));
    bufp->fullBit(oldp+138,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srli));
    bufp->fullBit(oldp+139,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srai));
    bufp->fullBit(oldp+140,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltiu));
    bufp->fullBit(oldp+141,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__xori));
    bufp->fullBit(oldp+142,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ori));
    bufp->fullBit(oldp+143,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__andi));
    bufp->fullBit(oldp+144,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu));
    bufp->fullBit(oldp+145,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu));
    bufp->fullBit(oldp+146,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw));
    bufp->fullBit(oldp+147,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh));
    bufp->fullBit(oldp+148,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb));
    bufp->fullBit(oldp+149,((0x67U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
    bufp->fullBit(oldp+150,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__addi) 
                             | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slti) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slli) 
                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srli) 
                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srai) 
                                         | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltiu) 
                                            | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__xori) 
                                               | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ori) 
                                                  | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__andi) 
                                                     | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu) 
                                                        | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu) 
                                                           | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw) 
                                                              | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh) 
                                                                 | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb) 
                                                                    | (0x67U 
                                                                       == 
                                                                       (0x0000007fU 
                                                                        & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))))))))))))))))));
    bufp->fullBit(oldp+151,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ld_type));
    bufp->fullBit(oldp+152,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__add));
    bufp->fullBit(oldp+153,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sub));
    bufp->fullBit(oldp+154,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sll));
    bufp->fullBit(oldp+155,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slt));
    bufp->fullBit(oldp+156,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltu));
    bufp->fullBit(oldp+157,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srl));
    bufp->fullBit(oldp+158,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sra));
    bufp->fullBit(oldp+159,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_xor));
    bufp->fullBit(oldp+160,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_or));
    bufp->fullBit(oldp+161,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_and));
    bufp->fullBit(oldp+162,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__add) 
                             | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sub) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sll) 
                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slt) 
                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltu) 
                                         | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srl) 
                                            | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sra) 
                                               | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_xor) 
                                                  | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_or) 
                                                     | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_and))))))))))));
    bufp->fullBit(oldp+163,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sw));
    bufp->fullBit(oldp+164,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sb));
    bufp->fullBit(oldp+165,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sh));
    bufp->fullBit(oldp+166,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sw) 
                             | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sb) 
                                | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sh)))));
    bufp->fullBit(oldp+167,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne));
    bufp->fullBit(oldp+168,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq));
    bufp->fullBit(oldp+169,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt));
    bufp->fullBit(oldp+170,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge));
    bufp->fullBit(oldp+171,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu));
    bufp->fullBit(oldp+172,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu));
    bufp->fullBit(oldp+173,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne) 
                             | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt) 
                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge) 
                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu) 
                                         | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu))))))));
    bufp->fullBit(oldp+174,((0x37U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
    bufp->fullBit(oldp+175,((0x17U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
    bufp->fullBit(oldp+176,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw));
    bufp->fullBit(oldp+177,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrs));
    bufp->fullBit(oldp+178,((IData)((0x00003073U == 
                                     (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)))));
    bufp->fullBit(oldp+179,((0x00000073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    bufp->fullBit(oldp+180,((0x30200073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    bufp->fullBit(oldp+181,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__csr_we) 
                             | ((0x00000073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst) 
                                | (0x30200073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)))));
    bufp->fullBit(oldp+182,((1U & (~ (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__addi) 
                                       | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slti) 
                                          | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slli) 
                                             | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srli) 
                                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srai) 
                                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltiu) 
                                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__xori) 
                                                         | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ori) 
                                                            | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__andi) 
                                                               | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu) 
                                                                  | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu) 
                                                                     | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw) 
                                                                        | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh) 
                                                                           | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb) 
                                                                              | (0x67U 
                                                                                == 
                                                                                (0x0000007fU 
                                                                                & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)))))))))))))))) 
                                      | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__add) 
                                          | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sub) 
                                             | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sll) 
                                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slt) 
                                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltu) 
                                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srl) 
                                                         | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sra) 
                                                            | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_xor) 
                                                               | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_or) 
                                                                  | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_and)))))))))) 
                                         | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sw) 
                                             | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sb) 
                                                | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sh))) 
                                            | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne) 
                                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq) 
                                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt) 
                                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge) 
                                                         | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu) 
                                                            | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu)))))) 
                                               | ((0x37U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
                                                  | (((0x17U 
                                                       == 
                                                       (0x0000007fU 
                                                        & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)) 
                                                      | (0x6fU 
                                                         == 
                                                         (0x0000007fU 
                                                          & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))) 
                                                     | (((IData)(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__csr_we) 
                                                         | ((0x00000073U 
                                                             == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst) 
                                                            | (0x30200073U 
                                                               == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))) 
                                                        | (0x00100073U 
                                                           == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))))))))))));
    bufp->fullBit(oldp+183,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ren));
    bufp->fullBit(oldp+184,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__wen));
    bufp->fullIData(oldp+185,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted),32);
    bufp->fullBit(oldp+186,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_r));
    bufp->fullBit(oldp+187,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_b));
    bufp->fullBit(oldp+188,(vlSelfRef.clock));
    bufp->fullBit(oldp+189,(vlSelfRef.reset));
    bufp->fullBit(oldp+190,(vlSelfRef.nothing));
    bufp->fullIData(oldp+191,(((0U == (0x0000001fU 
                                       & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                          >> 0x0000000fU)))
                                ? 0U : vlSelfRef.ysyx_26010027__DOT__R__DOT__rf
                               [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                >> 0x0000000fU))])),32);
    bufp->fullIData(oldp+192,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                ? vlSelfRef.ysyx_26010027__DOT__pmem_read_data
                                : 0U)),32);
    bufp->fullBit(oldp+193,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                             & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_wready))));
    bufp->fullBit(oldp+194,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                              & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_wready)) 
                             & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_wvalid))));
}
