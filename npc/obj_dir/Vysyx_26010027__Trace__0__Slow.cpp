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
    tracep->declBit(c+335,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"nothing",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ysyx_26010027", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"nothing",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"n_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+94,0,"arb_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"arb_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"arb_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"arb_arid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+97,0,"arb_arlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+74,0,"arb_arsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+343,0,"arb_arburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+81,0,"arb_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"arb_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"arb_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+344,0,"arb_rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+345,0,"arb_rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+346,0,"arb_rlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"arb_awvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"arb_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"arb_awaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+347,0,"arb_awid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+348,0,"arb_awlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+101,0,"arb_awsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+343,0,"arb_awburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+102,0,"arb_wvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"arb_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+103,0,"arb_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"arb_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+349,0,"arb_wlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"arb_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"arb_bready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"arb_bresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+350,0,"arb_bid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+82,0,"pmem_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+351,0,"pmem_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+81,0,"pmem_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"pmem_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"pmem_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"pmem_bresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+106,0,"ifu_idu_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"idu_ifu_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"ifu_idu_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"ifu_idu_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+109,0,"cpu_ifu_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"ifu_cpu_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+111,0,"ifu_cpu_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+347,0,"ifu_cpu_arid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+348,0,"ifu_cpu_arlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+352,0,"ifu_cpu_arsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+343,0,"ifu_cpu_arburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+112,0,"cpu_ifu_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"ifu_cpu_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"cpu_ifu_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+353,0,"cpu_ifu_rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+354,0,"cpu_ifu_rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+355,0,"cpu_ifu_rlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"icache_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"icache_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"icache_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"icache_arlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+356,0,"icache_arid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+119,0,"icache_arsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+343,0,"icache_arburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+86,0,"icache_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"icache_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+327,0,"icache_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+357,0,"icache_rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+358,0,"icache_rlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+359,0,"icache_rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+121,0,"hit_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"miss_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"miss_latency",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+124,0,"exu_idu_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"idu_exu_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+126,0,"idu_exu_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"idu_exu_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"idu_exu_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"idu_exu_alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"idu_exu_mem_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"idu_exu_mem_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+5,0,"idu_exu_alu_arc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"idu_exu_alu_arc2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"idu_exu_reg_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"idu_exu_rf_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+128,0,"idu_exu_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+129,0,"idu_exu_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"idu_exu_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+10,0,"idu_wbu_csr_raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+11,0,"idu_exu_csr_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+12,0,"idu_exu_csr_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"idu_exu_csr_ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"idu_exu_csr_mret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"idu_wbu_raddr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"idu_wbu_raddr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+130,0,"fence_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"lsu_exu_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"exu_lsu_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"exu_lsu_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"exu_lsu_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"exu_lsu_mem_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+17,0,"exu_lsu_mem_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+136,0,"exu_lsu_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"exu_lsu_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"exu_lsu_reg_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"exu_lsu_rf_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+20,0,"exu_lsu_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+21,0,"exu_lsu_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"exu_lsu_csr_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+23,0,"exu_lsu_csr_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"exu_lsu_csr_ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"exu_lsu_csr_mret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"exu_lsu_csr_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+338,0,"exu_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+339,0,"exu_flush_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+138,0,"wbu_lsu_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"lsu_wbu_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"lsu_wbu_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"lsu_wbu_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"lsu_wbu_reg_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"lsu_wbu_rf_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+29,0,"lsu_wbu_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+30,0,"lsu_wbu_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"lsu_wbu_mem_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+139,0,"lsu_load_inflight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"lsu_wbu_csr_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+33,0,"lsu_wbu_csr_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"lsu_wbu_csr_ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"lsu_wbu_csr_mret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"lsu_wbu_csr_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+140,0,"cpu_lsu_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"lsu_cpu_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+141,0,"lsu_cpu_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+347,0,"lsu_cpu_arid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+348,0,"lsu_cpu_arlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+37,0,"lsu_cpu_arsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+343,0,"lsu_cpu_arburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+328,0,"cpu_lsu_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"lsu_cpu_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"cpu_lsu_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"cpu_lsu_rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+144,0,"cpu_lsu_rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+145,0,"cpu_lsu_rlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"cpu_lsu_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"lsu_cpu_awaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+147,0,"lsu_cpu_awvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+347,0,"lsu_cpu_awid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+348,0,"lsu_cpu_awlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+101,0,"lsu_cpu_awsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+343,0,"lsu_cpu_awburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+88,0,"cpu_lsu_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+103,0,"lsu_cpu_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"lsu_cpu_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+102,0,"lsu_cpu_wvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"lsu_cpu_wlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"cpu_lsu_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"lsu_cpu_bready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+330,0,"cpu_lsu_bresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+148,0,"cpu_lsu_bid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+38,0,"wbu_exu_rdata1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"wbu_exu_rdata2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"wbu_exu_csr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"wbu_exu_mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"wbu_exu_mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"grant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+343,0,"IFU_GRANT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+360,0,"LSU_GRANT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+150,0,"handshake_ifu_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"handshake_lsu_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"handshake_lsu_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"access_fault",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+151,0,"wbu_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+152,0,"wbu_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"wbu_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"wbu_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"wbu_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"wbu_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"wbu_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("my_EXU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"idu_exu_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"exu_idu_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+126,0,"idu_exu_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"idu_exu_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"idu_exu_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"idu_exu_alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"idu_exu_mem_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"idu_exu_mem_r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+5,0,"idu_exu_alu_arc1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"idu_exu_alu_arc2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"idu_exu_reg_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"idu_exu_rf_res",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+128,0,"idu_exu_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+129,0,"idu_exu_jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"idu_exu_branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+11,0,"idu_exu_csr_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+12,0,"idu_exu_csr_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"idu_exu_csr_ecall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"idu_exu_csr_mret",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"lsu_exu_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"exu_lsu_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"exu_lsu_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"exu_lsu_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"exu_lsu_mem_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+17,0,"exu_lsu_mem_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+136,0,"exu_lsu_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"exu_lsu_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"exu_lsu_reg_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"exu_lsu_rf_res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+20,0,"exu_lsu_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+21,0,"exu_lsu_alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"exu_lsu_csr_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+23,0,"exu_lsu_csr_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"exu_lsu_csr_ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"exu_lsu_csr_mret",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"exu_lsu_csr_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+338,0,"exu_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+339,0,"exu_flush_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+138,0,"lsu_wbu_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"lsu_load_inflight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"lsu_wbu_reg_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"lsu_wbu_csr_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"lsu_wbu_rf_res",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+15,0,"idu_wbu_raddr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"idu_wbu_raddr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"idu_wbu_csr_raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+29,0,"lsu_wbu_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+32,0,"lsu_wbu_csr_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+91,0,"lsu_wbu_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"lsu_wbu_alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"lsu_wbu_mem_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"lsu_wbu_csr_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"wbu_exu_rdata1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"wbu_exu_rdata2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"wbu_exu_csr_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"exu_mtvec",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"exu_mepc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"src1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,0,"src2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"rdata1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"rdata2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"mid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"snpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"csr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,0,"lsu_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"wbu_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,0,"raw_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+167,0,"raw_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+77,0,"load_use_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"load_use_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"load_use_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+168,0,"csr_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+169,0,"lsu_fwd_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"wbu_fwd_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"trap_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"dnpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("my_IDU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"ifu_idu_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"idu_ifu_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"ifu_idu_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"ifu_idu_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+124,0,"exu_idu_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"idu_exu_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+126,0,"idu_exu_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"idu_exu_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"idu_exu_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"idu_exu_alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"idu_exu_mem_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"idu_exu_mem_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+5,0,"idu_exu_alu_arc1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"idu_exu_alu_arc2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"idu_exu_reg_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"idu_exu_rf_res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+128,0,"idu_exu_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+129,0,"idu_exu_jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"idu_exu_branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+338,0,"exu_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"idu_wbu_csr_raddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+11,0,"idu_exu_csr_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+12,0,"idu_exu_csr_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"idu_exu_csr_ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"idu_exu_csr_mret",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"idu_wbu_raddr1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"idu_wbu_raddr2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+130,0,"fence_i",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+173,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+174,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+175,0,"inst_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"inst_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"inst_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"inst_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"inst_J",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"inst_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"I_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"I_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"I_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"slti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"sltiu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"xori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"ori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"i_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"ld_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"r_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"r_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"r_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"r_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"s_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"b_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"csrrw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"csrrs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"csrrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"csr_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"csr_ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"csr_mret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+231,0,"csr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+232,0,"illegal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+233,0,"jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+234,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+235,0,"rf_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+236,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+237,0,"alu_arc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"alu_arc2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"reg_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"csr_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"csr_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+241,0,"mem_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+242,0,"mem_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+243,0,"ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+244,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"raddr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+246,0,"raddr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+247,0,"waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("my_IFU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"ifu_idu_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"idu_ifu_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"ifu_idu_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"ifu_idu_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+338,0,"exu_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+339,0,"exu_flush_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+109,0,"cpu_ifu_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"ifu_cpu_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+111,0,"ifu_cpu_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+347,0,"ifu_cpu_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+348,0,"ifu_cpu_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+352,0,"ifu_cpu_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+343,0,"ifu_cpu_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+112,0,"cpu_ifu_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"ifu_cpu_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"cpu_ifu_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+353,0,"cpu_ifu_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+354,0,"cpu_ifu_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+355,0,"cpu_ifu_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+248,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+361,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+343,0,"WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+111,0,"arvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"araddr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+44,0,"flush_ar_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"ar_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"handshake_ar",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"handshake_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+252,0,"imm_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"imm_J",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+177,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+255,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+256,0,"flush_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("my_LSU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"exu_lsu_mem_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+17,0,"exu_lsu_mem_r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+136,0,"exu_lsu_mem_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"exu_lsu_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+132,0,"exu_lsu_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"lsu_exu_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"exu_lsu_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"exu_lsu_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"exu_lsu_reg_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"exu_lsu_rf_res",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+20,0,"exu_lsu_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+21,0,"exu_lsu_alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"exu_lsu_csr_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+23,0,"exu_lsu_csr_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"exu_lsu_csr_ecall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"exu_lsu_csr_mret",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"exu_lsu_csr_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+138,0,"wbu_lsu_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"lsu_wbu_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"lsu_wbu_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"lsu_wbu_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"lsu_wbu_reg_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"lsu_wbu_rf_res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+29,0,"lsu_wbu_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+30,0,"lsu_wbu_alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"lsu_wbu_mem_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"lsu_wbu_csr_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+33,0,"lsu_wbu_csr_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"lsu_wbu_csr_ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"lsu_wbu_csr_mret",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"lsu_wbu_csr_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+139,0,"lsu_load_inflight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"cpu_lsu_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"lsu_cpu_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+141,0,"lsu_cpu_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+347,0,"lsu_cpu_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+348,0,"lsu_cpu_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+37,0,"lsu_cpu_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+343,0,"lsu_cpu_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+142,0,"lsu_cpu_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+328,0,"cpu_lsu_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"cpu_lsu_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"cpu_lsu_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+144,0,"cpu_lsu_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+145,0,"cpu_lsu_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"lsu_cpu_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+147,0,"lsu_cpu_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+347,0,"lsu_cpu_awid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+348,0,"lsu_cpu_awlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+101,0,"lsu_cpu_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+343,0,"lsu_cpu_awburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+146,0,"cpu_lsu_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+103,0,"lsu_cpu_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"lsu_cpu_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+102,0,"lsu_cpu_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"lsu_cpu_wlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"cpu_lsu_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+330,0,"cpu_lsu_bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+329,0,"cpu_lsu_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"lsu_cpu_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"cpu_lsu_bid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+257,0,"l_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+258,0,"l_mem_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+45,0,"l_mem_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+100,0,"l_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+259,0,"l_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"mem_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"is_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"is_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"mem_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+261,0,"state_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+262,0,"state_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+362,0,"W_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+363,0,"W_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+352,0,"W_RESP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+361,0,"R_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+343,0,"R_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+139,0,"load_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"store_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+103,0,"wdata_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+332,0,"rdata_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+264,0,"handshake_aw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"handshake_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"handshake_ar",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+333,0,"handshake_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+334,0,"handshake_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+342,0,"mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("my_WBU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"idu_wbu_raddr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"idu_wbu_raddr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+28,0,"lsu_wbu_rf_res",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+38,0,"wbu_exu_rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"wbu_exu_rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"wbu_exu_csr_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"csr_mtvec",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"csr_mepc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+138,0,"lsu_wbu_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"wbu_lsu_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"lsu_wbu_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"lsu_wbu_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"lsu_wbu_reg_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"lsu_wbu_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+30,0,"lsu_wbu_alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"lsu_wbu_mem_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"csr_raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+32,0,"csr_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+36,0,"csr_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+33,0,"csr_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"csr_ecall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"csr_mret",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+266,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("my_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"csr_ecall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"csr_mret",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"csr_raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+32,0,"csr_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+36,0,"csr_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"csr_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"csr_mtvec",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"csr_mepc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+33,0,"csr_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+364,0,"mvendorid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+365,0,"marchid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"mstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"mcause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+51,0,"mc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+53,0,"mcycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"mcycleh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("my_gpr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+366,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+367,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+335,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+266,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"raddr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"raddr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+38,0,"rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+55+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+71,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("my_icache", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"ifu_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"ifu_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"ifu_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+112,0,"ifu_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"ifu_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"ifu_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+115,0,"arb_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"arb_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"arb_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+86,0,"arb_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"arb_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+327,0,"arb_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"arb_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+119,0,"arb_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+121,0,"hit_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"miss_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"miss_latency",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+368,0,"BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+369,0,"BLOCK_NUMS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+366,0,"WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+370,0,"SET_NUMS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+371,0,"INDEX_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+366,0,"BLK_OFF_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+372,0,"TAG_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+366,0,"BEATS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+370,0,"BURST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+370,0,"WAY_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+370,0,"WORD_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+373,0,"LAST_BEAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+374,0,"BURST_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+267,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+271,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+275,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+276,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+277,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+278,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+279,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+280,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+281,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+282,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+283,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+287,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+291,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+295,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+299,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+303,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+307,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+311,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+315,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+361,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+343,0,"WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+360,0,"BURST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+316,0,"index_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+317,0,"tag_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBit(c+318,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+319,0,"hit_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+320,0,"miss_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+375,0,"nway",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+117,0,"araddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+115,0,"arvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"rready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"arlen_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+119,0,"arsize_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+321,0,"burst_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("repl_cnt", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+322+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+114,0,"rdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+112,0,"rvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"handshake_ar",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"handshake_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+325,0,"word_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+326,0,"miss_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+73,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
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
    bufp->fullCData(oldp+343,(1U),2);
    bufp->fullCData(oldp+344,(vlSelfRef.ysyx_26010027__DOT__arb_rresp),2);
    bufp->fullCData(oldp+345,(vlSelfRef.ysyx_26010027__DOT__arb_rid),4);
    bufp->fullBit(oldp+346,(vlSelfRef.ysyx_26010027__DOT__arb_rlast));
    bufp->fullCData(oldp+347,(0U),4);
    bufp->fullCData(oldp+348,(0U),8);
    bufp->fullBit(oldp+349,(1U));
    bufp->fullCData(oldp+350,(vlSelfRef.ysyx_26010027__DOT__arb_bid),4);
    bufp->fullIData(oldp+351,(vlSelfRef.ysyx_26010027__DOT__pmem_write_data),32);
    bufp->fullCData(oldp+352,(2U),3);
    bufp->fullCData(oldp+353,(vlSelfRef.ysyx_26010027__DOT__cpu_ifu_rresp),2);
    bufp->fullCData(oldp+354,(vlSelfRef.ysyx_26010027__DOT__cpu_ifu_rid),4);
    bufp->fullBit(oldp+355,(vlSelfRef.ysyx_26010027__DOT__cpu_ifu_rlast));
    bufp->fullCData(oldp+356,(vlSelfRef.ysyx_26010027__DOT__icache_arid),4);
    bufp->fullCData(oldp+357,(vlSelfRef.ysyx_26010027__DOT__icache_rresp),2);
    bufp->fullBit(oldp+358,(vlSelfRef.ysyx_26010027__DOT__icache_rlast));
    bufp->fullCData(oldp+359,(vlSelfRef.ysyx_26010027__DOT__icache_rid),4);
    bufp->fullCData(oldp+360,(2U),2);
    bufp->fullCData(oldp+361,(0U),2);
    bufp->fullCData(oldp+362,(0U),3);
    bufp->fullCData(oldp+363,(1U),3);
    bufp->fullIData(oldp+364,(0x79737978U),32);
    bufp->fullIData(oldp+365,(0x018ce1abU),32);
    bufp->fullIData(oldp+366,(4U),32);
    bufp->fullIData(oldp+367,(0x00000020U),32);
    bufp->fullIData(oldp+368,(0x00000010U),32);
    bufp->fullIData(oldp+369,(8U),32);
    bufp->fullIData(oldp+370,(2U),32);
    bufp->fullIData(oldp+371,(1U),32);
    bufp->fullIData(oldp+372,(0x0000001bU),32);
    bufp->fullIData(oldp+373,(3U),32);
    bufp->fullCData(oldp+374,(3U),8);
    bufp->fullIData(oldp+375,(4U),32);
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
    bufp->fullIData(oldp+1,(vlSelfRef.ysyx_26010027__DOT__idu_exu_imm),32);
    bufp->fullCData(oldp+2,(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_op),4);
    bufp->fullCData(oldp+3,(vlSelfRef.ysyx_26010027__DOT__idu_exu_mem_w),2);
    bufp->fullCData(oldp+4,(vlSelfRef.ysyx_26010027__DOT__idu_exu_mem_r),3);
    bufp->fullBit(oldp+5,(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc1));
    bufp->fullBit(oldp+6,(vlSelfRef.ysyx_26010027__DOT__idu_exu_alu_arc2));
    bufp->fullBit(oldp+7,(vlSelfRef.ysyx_26010027__DOT__idu_exu_reg_w));
    bufp->fullCData(oldp+8,(vlSelfRef.ysyx_26010027__DOT__idu_exu_rf_res),2);
    bufp->fullCData(oldp+9,(vlSelfRef.ysyx_26010027__DOT__idu_exu_branch),3);
    bufp->fullSData(oldp+10,(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr),12);
    bufp->fullSData(oldp+11,(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_waddr),12);
    bufp->fullBit(oldp+12,(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_we));
    bufp->fullBit(oldp+13,(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_ecall));
    bufp->fullBit(oldp+14,(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_mret));
    bufp->fullCData(oldp+15,(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1),5);
    bufp->fullCData(oldp+16,(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2),5);
    bufp->fullCData(oldp+17,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_r),3);
    bufp->fullBit(oldp+18,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_reg_w));
    bufp->fullCData(oldp+19,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res),2);
    bufp->fullCData(oldp+20,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_waddr),5);
    bufp->fullIData(oldp+21,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_alu_result),32);
    bufp->fullSData(oldp+22,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_waddr),12);
    bufp->fullBit(oldp+23,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_we));
    bufp->fullBit(oldp+24,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_ecall));
    bufp->fullBit(oldp+25,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_mret));
    bufp->fullIData(oldp+26,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_wdata),32);
    bufp->fullBit(oldp+27,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_reg_w));
    bufp->fullCData(oldp+28,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_rf_res),2);
    bufp->fullCData(oldp+29,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_waddr),5);
    bufp->fullIData(oldp+30,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_alu_result),32);
    bufp->fullIData(oldp+31,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_mem_result),32);
    bufp->fullSData(oldp+32,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_waddr),12);
    bufp->fullBit(oldp+33,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_we));
    bufp->fullBit(oldp+34,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_ecall));
    bufp->fullBit(oldp+35,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_mret));
    bufp->fullIData(oldp+36,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_wdata),32);
    bufp->fullCData(oldp+37,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
                               ? 2U : (((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)) 
                                        | (4U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)))
                                        ? 1U : 0U))),3);
    bufp->fullIData(oldp+38,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1))
                               ? 0U : vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf
                              [(0x0000000fU & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1))])),32);
    bufp->fullIData(oldp+39,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2))
                               ? 0U : vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf
                              [(0x0000000fU & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2))])),32);
    bufp->fullIData(oldp+40,(((0x0f11U == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr))
                               ? 0x79737978U : ((0x0f12U 
                                                 == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr))
                                                 ? 0x018ce1abU
                                                 : 
                                                ((0x0b00U 
                                                  == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr))
                                                  ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mc)
                                                  : 
                                                 ((0x0b80U 
                                                   == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr))
                                                   ? (IData)(
                                                             (vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mc 
                                                              >> 0x00000020U))
                                                   : 
                                                  ((0x0300U 
                                                    == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr))
                                                    ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mstatus
                                                    : 
                                                   (((0x0305U 
                                                      == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr)) 
                                                     & (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_ecall))
                                                     ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mtvec
                                                     : 
                                                    (((0x0341U 
                                                       == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr)) 
                                                      & (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_mret))
                                                      ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mepc
                                                      : 
                                                     ((0x0342U 
                                                       == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr))
                                                       ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mcause
                                                       : 0U))))))))),32);
    bufp->fullIData(oldp+41,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mtvec),32);
    bufp->fullIData(oldp+42,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mepc),32);
    bufp->fullIData(oldp+43,(((IData)(vlSelfRef.ysyx_26010027__DOT__idu_exu_csr_ecall)
                               ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mtvec
                               : vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mepc)),32);
    bufp->fullBit(oldp+44,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__flush_ar_sent));
    bufp->fullCData(oldp+45,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r),3);
    bufp->fullBit(oldp+46,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_done));
    bufp->fullBit(oldp+47,((5U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))));
    bufp->fullCData(oldp+48,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__waddr),5);
    bufp->fullIData(oldp+49,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mstatus),32);
    bufp->fullIData(oldp+50,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mcause),32);
    bufp->fullQData(oldp+51,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mc),64);
    bufp->fullIData(oldp+53,((IData)(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mc)),32);
    bufp->fullIData(oldp+54,((IData)((vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mc 
                                      >> 0x00000020U))),32);
    bufp->fullIData(oldp+55,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[0]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[1]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[2]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[3]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[4]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[5]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[6]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[7]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[8]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[9]),32);
    bufp->fullIData(oldp+65,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[10]),32);
    bufp->fullIData(oldp+66,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[11]),32);
    bufp->fullIData(oldp+67,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[12]),32);
    bufp->fullIData(oldp+68,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[13]),32);
    bufp->fullIData(oldp+69,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[14]),32);
    bufp->fullIData(oldp+70,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf[15]),32);
    bufp->fullIData(oldp+71,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__i),32);
    bufp->fullIData(oldp+72,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__i),32);
    bufp->fullIData(oldp+73,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__j),32);
    bufp->fullCData(oldp+74,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                               ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__arsize_o)
                               : ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
                                   ? 2U : (((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)) 
                                            | (4U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)))
                                            ? 1U : 0U)))),3);
    bufp->fullIData(oldp+75,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_1__BRA__0__KET__)
                               ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_fwd
                               : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_1__BRA__1__KET__)
                                   ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__wbu_fwd
                                   : (((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_5) 
                                       & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_7))
                                       ? vlSelfRef.ysyx_26010027__DOT__lsu_wbu_mem_result
                                       : ((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1))
                                           ? 0U : vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__rf
                                          [(0x0000000fU 
                                            & (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1))]))))),32);
    bufp->fullIData(oldp+76,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_fwd__BRA__0__KET__)
                               ? vlSelfRef.ysyx_26010027__DOT__exu_lsu_csr_wdata
                               : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_fwd__BRA__1__KET__)
                                   ? vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_wdata
                                   : ((0x0f11U == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr))
                                       ? 0x79737978U
                                       : ((0x0f12U 
                                           == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr))
                                           ? 0x018ce1abU
                                           : ((0x0b00U 
                                               == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr))
                                               ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mc)
                                               : ((0x0b80U 
                                                   == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr))
                                                   ? (IData)(
                                                             (vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mc 
                                                              >> 0x00000020U))
                                                   : 
                                                  ((0x0300U 
                                                    == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr))
                                                    ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mstatus
                                                    : 
                                                   (((0x0305U 
                                                      == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr)) 
                                                     & (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_ecall))
                                                     ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mtvec
                                                     : 
                                                    (((0x0341U 
                                                       == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr)) 
                                                      & (IData)(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_csr_mret))
                                                      ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mepc
                                                      : 
                                                     ((0x0342U 
                                                       == (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_csr_raddr))
                                                       ? vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_csr__DOT__mcause
                                                       : 0U))))))))))),32);
    bufp->fullBit(oldp+77,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_5) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_7))));
    bufp->fullBit(oldp+78,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_7) 
                            & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_7))));
    bufp->fullBit(oldp+79,((((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1)) 
                             & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_17) 
                                & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res)) 
                                   & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_9)))) 
                            | (((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2)) 
                                & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_17) 
                                   & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__exu_lsu_rf_res)) 
                                      & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_10)))) 
                               | (((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr1)) 
                                   & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_load_inflight) 
                                      & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_4))) 
                                  | ((0U != (IData)(vlSelfRef.ysyx_26010027__DOT__idu_wbu_raddr2)) 
                                     & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_load_inflight) 
                                        & (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT____VdfgRegularize_h52da6e6e_0_6))))))));
    bufp->fullBit(oldp+80,(((5U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r)) 
                            | (3U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w)))));
    bufp->fullBit(oldp+81,(vlSelfRef.ysyx_26010027__DOT__pmem_rvalid));
    bufp->fullIData(oldp+82,(vlSelfRef.ysyx_26010027__DOT__pmem_read_data),32);
    bufp->fullBit(oldp+83,(vlSelfRef.ysyx_26010027__DOT__pmem_wready));
    bufp->fullBit(oldp+84,(vlSelfRef.ysyx_26010027__DOT__pmem_bvalid));
    bufp->fullCData(oldp+85,(vlSelfRef.ysyx_26010027__DOT__pmem_bresp),2);
    bufp->fullBit(oldp+86,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_rvalid))));
    bufp->fullIData(oldp+87,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                               ? vlSelfRef.ysyx_26010027__DOT__pmem_read_data
                               : 0U)),32);
    bufp->fullBit(oldp+88,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_wready))));
    bufp->fullBit(oldp+89,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                             & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_wready)) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_wvalid))));
    bufp->fullBit(oldp+90,((((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                             & (IData)(vlSelfRef.ysyx_26010027__DOT__pmem_rvalid)) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__rready_o))));
    bufp->fullIData(oldp+91,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_pc),32);
    bufp->fullIData(oldp+92,(vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst),32);
    bufp->fullIData(oldp+93,(vlSelfRef.ysyx_26010027__DOT__ifu_idu_pc),32);
    bufp->fullBit(oldp+94,(vlSelfRef.ysyx_26010027__DOT__arb_arvalid));
    bufp->fullIData(oldp+95,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                               ? vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__araddr_o
                               : vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr)),32);
    bufp->fullCData(oldp+96,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                               ? (IData)(vlSelfRef.ysyx_26010027__DOT__icache_arid)
                               : 0U)),4);
    bufp->fullCData(oldp+97,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                               ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__arlen_o)
                               : 0U)),8);
    bufp->fullBit(oldp+98,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                             ? (IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__rready_o)
                             : (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r)))));
    bufp->fullBit(oldp+99,(vlSelfRef.ysyx_26010027__DOT__arb_awvalid));
    bufp->fullIData(oldp+100,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr),32);
    bufp->fullCData(oldp+101,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
                                ? 2U : ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
                                         ? 1U : 0U))),3);
    bufp->fullBit(oldp+102,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_wvalid));
    bufp->fullIData(oldp+103,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
                                ? vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_wdata
                                : VL_SHIFTL_III(32,32,32, vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_wdata, 
                                                VL_SHIFTL_III(32,32,32, 
                                                              (3U 
                                                               & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr), 3U)))),32);
    bufp->fullCData(oldp+104,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
                                ? 0x0000000fU : (0x0000000fU 
                                                 & ((1U 
                                                     == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
                                                     ? 
                                                    ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr))
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))
                                                      ? 
                                                     ((IData)(3U) 
                                                      << 
                                                      (3U 
                                                       & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_addr))
                                                      : 0U))))),4);
    bufp->fullBit(oldp+105,((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w))));
    bufp->fullBit(oldp+106,(vlSelfRef.ysyx_26010027__DOT__ifu_idu_valid));
    bufp->fullBit(oldp+107,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__idu_ifu_ready));
    bufp->fullIData(oldp+108,(vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst),32);
    bufp->fullBit(oldp+109,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__state)) 
                             & (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__arvalid_q))));
    bufp->fullIData(oldp+110,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__araddr_q),32);
    bufp->fullBit(oldp+111,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__arvalid_q));
    bufp->fullBit(oldp+112,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__rvalid_o));
    bufp->fullBit(oldp+113,((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))));
    bufp->fullIData(oldp+114,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__rdata_o),32);
    bufp->fullBit(oldp+115,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__arvalid_o));
    bufp->fullBit(oldp+116,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                             & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid))));
    bufp->fullIData(oldp+117,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__araddr_o),32);
    bufp->fullCData(oldp+118,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__arlen_o),8);
    bufp->fullCData(oldp+119,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__arsize_o),3);
    bufp->fullBit(oldp+120,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__rready_o));
    bufp->fullIData(oldp+121,(vlSelfRef.ysyx_26010027__DOT__hit_count),32);
    bufp->fullIData(oldp+122,(vlSelfRef.ysyx_26010027__DOT__miss_count),32);
    bufp->fullIData(oldp+123,(vlSelfRef.ysyx_26010027__DOT__miss_latency),32);
    bufp->fullBit(oldp+124,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__exu_idu_ready));
    bufp->fullBit(oldp+125,(vlSelfRef.ysyx_26010027__DOT__idu_exu_valid));
    bufp->fullIData(oldp+126,(vlSelfRef.ysyx_26010027__DOT__idu_exu_pc),32);
    bufp->fullIData(oldp+127,(vlSelfRef.ysyx_26010027__DOT__idu_exu_inst),32);
    bufp->fullCData(oldp+128,(vlSelfRef.ysyx_26010027__DOT__idu_exu_waddr),5);
    bufp->fullCData(oldp+129,(vlSelfRef.ysyx_26010027__DOT__idu_exu_jump),2);
    bufp->fullBit(oldp+130,((0x0000100fU == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    bufp->fullBit(oldp+131,((1U & (~ (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy)))));
    bufp->fullBit(oldp+132,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_valid));
    bufp->fullIData(oldp+133,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_pc),32);
    bufp->fullIData(oldp+134,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_inst),32);
    bufp->fullCData(oldp+135,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_w),2);
    bufp->fullIData(oldp+136,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_mem_addr),32);
    bufp->fullIData(oldp+137,(vlSelfRef.ysyx_26010027__DOT__exu_lsu_wdata),32);
    bufp->fullBit(oldp+138,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_wbu_valid));
    bufp->fullBit(oldp+139,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_load_inflight));
    bufp->fullBit(oldp+140,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                             & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid))));
    bufp->fullBit(oldp+141,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid));
    bufp->fullBit(oldp+142,((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r))));
    bufp->fullCData(oldp+143,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp),2);
    bufp->fullCData(oldp+144,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                ? (IData)(vlSelfRef.ysyx_26010027__DOT__arb_rid)
                                : 0U)),4);
    bufp->fullBit(oldp+145,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                             & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_rlast))));
    bufp->fullBit(oldp+146,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                             & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_awvalid))));
    bufp->fullBit(oldp+147,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid));
    bufp->fullCData(oldp+148,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                ? (IData)(vlSelfRef.ysyx_26010027__DOT__arb_bid)
                                : 0U)),4);
    bufp->fullCData(oldp+149,(vlSelfRef.ysyx_26010027__DOT__grant),2);
    bufp->fullBit(oldp+150,(((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_2) 
                             & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__cpu_ifu_rresp)))));
    bufp->fullCData(oldp+151,((0x0000007fU & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)),7);
    bufp->fullBit(oldp+152,((3U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst))));
    bufp->fullBit(oldp+153,((0x23U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst))));
    bufp->fullBit(oldp+154,((0x73U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst))));
    bufp->fullBit(oldp+155,(((0x6fU == (0x0000007fU 
                                        & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)) 
                             | (0x67U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)))));
    bufp->fullBit(oldp+156,((0x63U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst))));
    bufp->fullBit(oldp+157,(((0x33U == (0x0000007fU 
                                        & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)) 
                             | ((0x13U == (0x0000007fU 
                                           & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)) 
                                | ((0x17U == (0x0000007fU 
                                              & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)) 
                                   | (0x37U == (0x0000007fU 
                                                & vlSelfRef.ysyx_26010027__DOT__lsu_wbu_inst)))))));
    bufp->fullIData(oldp+158,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src1),32);
    bufp->fullIData(oldp+159,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2),32);
    bufp->fullIData(oldp+160,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rdata2),32);
    bufp->fullIData(oldp+161,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__mid),32);
    bufp->fullIData(oldp+162,(((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__idu_exu_pc)),32);
    bufp->fullIData(oldp+163,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__result),32);
    bufp->fullIData(oldp+164,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_fwd),32);
    bufp->fullIData(oldp+165,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__wbu_fwd),32);
    bufp->fullCData(oldp+166,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_1__BRA__1__KET__) 
                                << 1U) | (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_1__BRA__0__KET__))),2);
    bufp->fullCData(oldp+167,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_2__BRA__1__KET__) 
                                << 1U) | (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__raw_2__BRA__0__KET__))),2);
    bufp->fullCData(oldp+168,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_fwd__BRA__1__KET__) 
                                << 1U) | (IData)(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__csr_fwd__BRA__0__KET__))),2);
    bufp->fullBit(oldp+169,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__lsu_fwd_flag));
    bufp->fullBit(oldp+170,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__wbu_fwd_flag));
    bufp->fullIData(oldp+171,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__dnpc),32);
    bufp->fullCData(oldp+172,((0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)),7);
    bufp->fullCData(oldp+173,((7U & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                     >> 0x0000000cU))),3);
    bufp->fullCData(oldp+174,((vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                               >> 0x00000019U)),7);
    bufp->fullBit(oldp+175,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I));
    bufp->fullBit(oldp+176,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U));
    bufp->fullBit(oldp+177,((0x63U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
    bufp->fullBit(oldp+178,((0x23U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
    bufp->fullBit(oldp+179,((0x6fU == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
    bufp->fullBit(oldp+180,((0x33U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
    bufp->fullBit(oldp+181,((0x13U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
    bufp->fullBit(oldp+182,((3U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
    bufp->fullBit(oldp+183,((0x73U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
    bufp->fullBit(oldp+184,((IData)((0x00000013U == 
                                     (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
    bufp->fullBit(oldp+185,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slti));
    bufp->fullBit(oldp+186,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slli));
    bufp->fullBit(oldp+187,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srli));
    bufp->fullBit(oldp+188,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srai));
    bufp->fullBit(oldp+189,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltiu));
    bufp->fullBit(oldp+190,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__xori));
    bufp->fullBit(oldp+191,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ori));
    bufp->fullBit(oldp+192,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__andi));
    bufp->fullBit(oldp+193,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu));
    bufp->fullBit(oldp+194,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu));
    bufp->fullBit(oldp+195,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw));
    bufp->fullBit(oldp+196,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh));
    bufp->fullBit(oldp+197,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb));
    bufp->fullBit(oldp+198,((0x67U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
    bufp->fullBit(oldp+199,(((IData)((0x00000013U == 
                                      (0x0000707fU 
                                       & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))) 
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
                                                                        & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))))))))))))))))));
    bufp->fullBit(oldp+200,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu) 
                             | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw) 
                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh) 
                                      | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb)))))));
    bufp->fullBit(oldp+201,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
                             & (0U == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                       >> 0x00000019U)))));
    bufp->fullBit(oldp+202,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sub));
    bufp->fullBit(oldp+203,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sll));
    bufp->fullBit(oldp+204,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slt));
    bufp->fullBit(oldp+205,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltu));
    bufp->fullBit(oldp+206,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srl));
    bufp->fullBit(oldp+207,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sra));
    bufp->fullBit(oldp+208,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_xor));
    bufp->fullBit(oldp+209,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_or));
    bufp->fullBit(oldp+210,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_and));
    bufp->fullBit(oldp+211,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_11) 
                              & (0U == (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                        >> 0x00000019U))) 
                             | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sub) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sll) 
                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slt) 
                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltu) 
                                         | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srl) 
                                            | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sra) 
                                               | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_xor) 
                                                  | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_or) 
                                                     | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_and))))))))))));
    bufp->fullBit(oldp+212,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sw));
    bufp->fullBit(oldp+213,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sb));
    bufp->fullBit(oldp+214,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sh));
    bufp->fullBit(oldp+215,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sw) 
                             | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sb) 
                                | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sh)))));
    bufp->fullBit(oldp+216,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne));
    bufp->fullBit(oldp+217,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq));
    bufp->fullBit(oldp+218,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt));
    bufp->fullBit(oldp+219,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge));
    bufp->fullBit(oldp+220,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu));
    bufp->fullBit(oldp+221,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu));
    bufp->fullBit(oldp+222,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne) 
                             | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt) 
                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge) 
                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu) 
                                         | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu))))))));
    bufp->fullBit(oldp+223,((0x37U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
    bufp->fullBit(oldp+224,((0x17U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))));
    bufp->fullBit(oldp+225,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw));
    bufp->fullBit(oldp+226,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrs));
    bufp->fullBit(oldp+227,((IData)((0x00003073U == 
                                     (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
    bufp->fullBit(oldp+228,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_15) 
                             | ((0x00000073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst) 
                                | (0x30200073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
    bufp->fullBit(oldp+229,((0x00000073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    bufp->fullBit(oldp+230,((0x30200073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    bufp->fullSData(oldp+231,((0x00000fffU & vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm)),12);
    bufp->fullBit(oldp+232,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__illegal));
    bufp->fullCData(oldp+233,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__jump)
                                ? 1U : ((0x00000073U 
                                         == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)
                                         ? 2U : ((0x30200073U 
                                                  == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)
                                                  ? 3U
                                                  : 0U)))),2);
    bufp->fullCData(oldp+234,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__branch),3);
    bufp->fullCData(oldp+235,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu) 
                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw) 
                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh) 
                                         | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb)))))
                                ? 1U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT____VdfgRegularize_hbaaf0796_0_15)
                                         ? 2U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__jump)
                                                  ? 3U
                                                  : 0U)))),2);
    bufp->fullCData(oldp+236,((((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sub) 
                                | (0x63U == (0x0000007fU 
                                             & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))
                                ? 1U : ((0x37U == (0x0000007fU 
                                                   & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))
                                         ? 2U : (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sll) 
                                                  | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slli))
                                                  ? 3U
                                                  : 
                                                 (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srl) 
                                                   | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srli))
                                                   ? 4U
                                                   : 
                                                  (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sra) 
                                                    | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srai))
                                                    ? 5U
                                                    : 
                                                   (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slt) 
                                                     | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slti))
                                                     ? 6U
                                                     : 
                                                    ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltiu)
                                                      ? 7U
                                                      : 
                                                     ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltu)
                                                       ? 8U
                                                       : 
                                                      (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_xor) 
                                                        | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__xori))
                                                        ? 9U
                                                        : 
                                                       (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_and) 
                                                         | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__andi))
                                                         ? 0x0aU
                                                         : 
                                                        (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_or) 
                                                          | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ori))
                                                          ? 0x0bU
                                                          : 
                                                         ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw)
                                                           ? 0x0cU
                                                           : 
                                                          ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrs)
                                                            ? 0x0dU
                                                            : 0U)))))))))))))),4);
    bufp->fullBit(oldp+237,(((0x6fU == (0x0000007fU 
                                        & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                             | (0x17U == (0x0000007fU 
                                          & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))));
    bufp->fullBit(oldp+238,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I) 
                             | ((0x23U == (0x0000007fU 
                                           & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                                | ((0x17U == (0x0000007fU 
                                              & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                                   | (0x6fU == (0x0000007fU 
                                                & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)))))));
    bufp->fullBit(oldp+239,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I) 
                             | ((0x33U == (0x0000007fU 
                                           & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                                | ((0x6fU == (0x0000007fU 
                                              & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)) 
                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U) 
                                      | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw)))))));
    bufp->fullBit(oldp+240,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrs) 
                             | (IData)((0x00003073U 
                                        == (0x0000707fU 
                                            & vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst))))));
    bufp->fullCData(oldp+241,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sw)
                                ? 0U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sb)
                                         ? 1U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sh)
                                                  ? 2U
                                                  : 3U)))),2);
    bufp->fullCData(oldp+242,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw)
                                ? 0U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb)
                                         ? 1U : ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh)
                                                  ? 2U
                                                  : 
                                                 ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu)
                                                   ? 3U
                                                   : 
                                                  ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu)
                                                    ? 4U
                                                    : 5U)))))),3);
    bufp->fullBit(oldp+243,((0x00100073U == vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst)));
    bufp->fullIData(oldp+244,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__imm),32);
    bufp->fullCData(oldp+245,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                              >> 0x0000000fU))),5);
    bufp->fullCData(oldp+246,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                              >> 0x00000014U))),5);
    bufp->fullCData(oldp+247,((0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__ifu_idu_inst 
                                              >> 7U))),5);
    bufp->fullCData(oldp+248,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state),2);
    bufp->fullBit(oldp+249,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__ar_flag));
    bufp->fullBit(oldp+250,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_ar));
    bufp->fullBit(oldp+251,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_r));
    bufp->fullIData(oldp+252,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_B),32);
    bufp->fullIData(oldp+253,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__imm_J),32);
    bufp->fullBit(oldp+254,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__jump));
    bufp->fullIData(oldp+255,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__next_pc),32);
    bufp->fullBit(oldp+256,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__flush_flag));
    bufp->fullBit(oldp+257,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_busy));
    bufp->fullCData(oldp+258,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w),2);
    bufp->fullIData(oldp+259,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_wdata),32);
    bufp->fullBit(oldp+260,((3U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_w))));
    bufp->fullCData(oldp+261,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w),3);
    bufp->fullCData(oldp+262,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r),2);
    bufp->fullBit(oldp+263,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__store_q));
    bufp->fullBit(oldp+264,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                              & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_awvalid)) 
                             & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_awvalid))));
    bufp->fullBit(oldp+265,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                              & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid)) 
                             & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_cpu_arvalid))));
    bufp->fullIData(oldp+266,(vlSelfRef.ysyx_26010027__DOT__my_WBU__DOT__my_gpr__DOT__wdata),32);
    bufp->fullBit(oldp+267,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
                            [0U][0U]));
    bufp->fullBit(oldp+268,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
                            [0U][1U]));
    bufp->fullBit(oldp+269,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
                            [0U][2U]));
    bufp->fullBit(oldp+270,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
                            [0U][3U]));
    bufp->fullBit(oldp+271,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
                            [1U][0U]));
    bufp->fullBit(oldp+272,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
                            [1U][1U]));
    bufp->fullBit(oldp+273,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
                            [1U][2U]));
    bufp->fullBit(oldp+274,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__valid
                            [1U][3U]));
    bufp->fullIData(oldp+275,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                              [0U][0U]),27);
    bufp->fullIData(oldp+276,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                              [0U][1U]),27);
    bufp->fullIData(oldp+277,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                              [0U][2U]),27);
    bufp->fullIData(oldp+278,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                              [0U][3U]),27);
    bufp->fullIData(oldp+279,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                              [1U][0U]),27);
    bufp->fullIData(oldp+280,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                              [1U][1U]),27);
    bufp->fullIData(oldp+281,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                              [1U][2U]),27);
    bufp->fullIData(oldp+282,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__tag
                              [1U][3U]),27);
    bufp->fullWData(oldp+283,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data
                              [0U][0U]),128);
    bufp->fullWData(oldp+287,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data
                              [0U][1U]),128);
    bufp->fullWData(oldp+291,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data
                              [0U][2U]),128);
    bufp->fullWData(oldp+295,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data
                              [0U][3U]),128);
    bufp->fullWData(oldp+299,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data
                              [1U][0U]),128);
    bufp->fullWData(oldp+303,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data
                              [1U][1U]),128);
    bufp->fullWData(oldp+307,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data
                              [1U][2U]),128);
    bufp->fullWData(oldp+311,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__data
                              [1U][3U]),128);
    bufp->fullCData(oldp+315,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__state),2);
    bufp->fullBit(oldp+316,((1U & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__araddr_q 
                                   >> 4U))));
    bufp->fullIData(oldp+317,((vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__araddr_q 
                               >> 5U)),27);
    bufp->fullBit(oldp+318,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__hit));
    bufp->fullIData(oldp+319,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__hit_way),32);
    bufp->fullIData(oldp+320,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__miss_way),32);
    bufp->fullCData(oldp+321,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__burst_count),2);
    bufp->fullCData(oldp+322,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[0]),2);
    bufp->fullCData(oldp+323,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__repl_cnt[1]),2);
    bufp->fullBit(oldp+324,((((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                              & (IData)(vlSelfRef.ysyx_26010027__DOT__arb_arvalid)) 
                             & (IData)(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__arvalid_o))));
    bufp->fullCData(oldp+325,((3U & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__araddr_q 
                                     >> 2U))),2);
    bufp->fullIData(oldp+326,(vlSelfRef.ysyx_26010027__DOT__my_icache__DOT__miss_cycle),32);
    bufp->fullIData(oldp+327,(vlSelfRef.ysyx_26010027__DOT__icache_rdata),32);
    bufp->fullBit(oldp+328,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rvalid));
    bufp->fullBit(oldp+329,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bvalid));
    bufp->fullCData(oldp+330,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp),2);
    bufp->fullBit(oldp+331,(((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_4) 
                             & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp)))));
    bufp->fullIData(oldp+332,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted),32);
    bufp->fullBit(oldp+333,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_r));
    bufp->fullBit(oldp+334,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_b));
    bufp->fullBit(oldp+335,(vlSelfRef.clock));
    bufp->fullBit(oldp+336,(vlSelfRef.reset));
    bufp->fullBit(oldp+337,(vlSelfRef.nothing));
    bufp->fullBit(oldp+338,(vlSelfRef.ysyx_26010027__DOT__exu_flush));
    bufp->fullIData(oldp+339,(vlSelfRef.ysyx_26010027__DOT__exu_flush_pc),32);
    bufp->fullBit(oldp+340,(((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_3) 
                             & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp)))));
    bufp->fullBit(oldp+341,((((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_2) 
                              & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__cpu_ifu_rresp))) 
                             | (((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_3) 
                                 & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_rresp))) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT____VdfgRegularize_hcab2a8af_0_4) 
                                   & (0U != (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__cpu_lsu_bresp)))))));
    bufp->fullIData(oldp+342,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
                                ? vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted
                                : ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted 
                                                       >> 7U)))) 
                                        << 8U) | (0x000000ffU 
                                                  & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted))
                                    : ((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted 
                                                           >> 0x0000000fU)))) 
                                            << 0x00000010U) 
                                           | (0x0000ffffU 
                                              & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted))
                                        : ((3U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
                                            ? (0x000000ffU 
                                               & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted)
                                            : ((4U 
                                                == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__l_mem_r))
                                                ? (0x0000ffffU 
                                                   & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted)
                                                : 0U)))))),32);
}
