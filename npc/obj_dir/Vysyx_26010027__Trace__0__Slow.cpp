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
    tracep->declBit(c+182,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+184,0,"cur_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"cur_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ysyx_26010027", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+182,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+184,0,"cur_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"cur_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"io_master_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"io_master_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"io_master_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"io_master_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"io_master_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2,0,"io_master_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"io_master_rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+174,0,"io_master_awaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+78,0,"io_master_awvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"io_master_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"io_master_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"io_master_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+80,0,"io_master_wvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"io_master_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"io_master_bresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+5,0,"io_master_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"io_master_bready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"n_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"rdata1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"rdata2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"mem_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"csr_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"out_mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"out_mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
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
    tracep->declBus(c+177,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+100,0,"ebreak_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"ifu_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"lsu_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"ifu_rom_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"rom_ifu_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"ifu_rom_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+9,0,"rom_ifu_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"ifu_rom_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"rom_ifu_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"rom_ifu_rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+104,0,"lsu_ram_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"ram_lsu_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+174,0,"lsu_ram_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+12,0,"ram_lsu_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"lsu_ram_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"ram_lsu_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"ram_lsu_rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+105,0,"lsu_ram_awvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"ram_lsu_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+174,0,"lsu_ram_awaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+80,0,"lsu_ram_wvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"ram_lsu_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"lsu_ram_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"lsu_ram_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+16,0,"ram_lsu_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"lsu_ram_bready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"ram_lsu_bresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+18,0,"grant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+191,0,"IFU_GRANT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+192,0,"LSU_GRANT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+106,0,"handshake_ifu_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"handshake_lsu_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"handshake_lsu_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("R", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+193,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+182,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+177,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+95,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"raddr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+87,0,"raddr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+189,0,"rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+45+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("my_CSR", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+182,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"j_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+107,0,"csr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+174,0,"csr_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+94,0,"csr_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"ifu_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"csr_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"out_mepc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"out_mtvec",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"mvendorid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"marchid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"mstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"mcause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+23,0,"mc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+25,0,"mcycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"mcycleh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("my_EXU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+83,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+99,0,"b_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+96,0,"alu_arc1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"alu_arc2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+189,0,"src1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"src2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"csr_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"dnpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("my_IDU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+82,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+101,0,"ifu_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"lsu_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
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
    tracep->declBit(c+100,0,"ebreak_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+109,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+110,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+111,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+112,0,"inst_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"inst_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"inst_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"inst_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"inst_J",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"inst_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"I_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"I_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"I_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"slti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"sltiu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"xori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"ori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"i_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"ld_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"r_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"r_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"r_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"r_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"s_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"b_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"csrrw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"csrrs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"csrrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"mret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"csr_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"illegal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("my_IFU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+182,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"n_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"rom_ifu_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"ifu_rom_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+101,0,"ifu_rom_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"rom_ifu_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"ifu_rom_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"rom_ifu_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"rom_ifu_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+101,0,"ifu_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"lsu_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+197,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+191,0,"WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+40,0,"handshake_ifu_ar",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"handshake_ifu_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"lsu_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"inst_latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("my_LSU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+182,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"mem_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+93,0,"mem_r",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+174,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+37,0,"ram_lsu_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+174,0,"lsu_ram_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+104,0,"lsu_ram_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"lsu_ram_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"ram_lsu_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"ram_lsu_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"ram_lsu_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+174,0,"lsu_ram_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+105,0,"lsu_ram_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"ram_lsu_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"lsu_ram_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"lsu_ram_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+80,0,"lsu_ram_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"ram_lsu_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"ram_lsu_bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+16,0,"ram_lsu_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"lsu_ram_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"lsu_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"ifu_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"state_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+30,0,"state_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+198,0,"W_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+199,0,"W_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+200,0,"B_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+197,0,"R_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+191,0,"R_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+170,0,"ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"wdata_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"rdata_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"handshake_aw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"handshake_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"handshake_ar",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"handshake_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"handshake_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("my_SRAM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+182,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+186,0,"io_slave_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"io_slave_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"io_slave_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"io_slave_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"io_slave_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2,0,"io_slave_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"io_slave_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+174,0,"io_slave_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+78,0,"io_slave_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"io_slave_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"io_slave_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"io_slave_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+80,0,"io_slave_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"io_slave_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"io_slave_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+5,0,"io_slave_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"io_slave_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"handshake_ar",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"handshake_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"handshake_aw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"handshake_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"handshake_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"awaddr_latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,0,"w_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("my_WBU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+83,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+90,0,"rf_res",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+98,0,"j_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+99,0,"b_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+174,0,"alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"mem_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"csr_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"mepc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"mtvec",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+95,0,"reg_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+177,0,"wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"n_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
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
    bufp->fullCData(oldp+191,(1U),2);
    bufp->fullCData(oldp+192,(2U),2);
    bufp->fullIData(oldp+193,(5U),32);
    bufp->fullIData(oldp+194,(0x00000020U),32);
    bufp->fullIData(oldp+195,(0x79737978U),32);
    bufp->fullIData(oldp+196,(0x26010027U),32);
    bufp->fullCData(oldp+197,(0U),2);
    bufp->fullCData(oldp+198,(0U),3);
    bufp->fullCData(oldp+199,(1U),3);
    bufp->fullCData(oldp+200,(2U),3);
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
    bufp->fullIData(oldp+1,(vlSelfRef.ysyx_26010027__DOT__io_master_rdata),32);
    bufp->fullBit(oldp+2,(vlSelfRef.ysyx_26010027__DOT__io_master_rvalid));
    bufp->fullCData(oldp+3,(vlSelfRef.ysyx_26010027__DOT__io_master_rresp),2);
    bufp->fullCData(oldp+4,(vlSelfRef.ysyx_26010027__DOT__io_master_bresp),2);
    bufp->fullBit(oldp+5,(vlSelfRef.ysyx_26010027__DOT__io_master_bvalid));
    bufp->fullBit(oldp+6,((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w))));
    bufp->fullIData(oldp+7,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mepc),32);
    bufp->fullIData(oldp+8,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mtvec),32);
    bufp->fullBit(oldp+9,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__rom_ifu_rvalid));
    bufp->fullIData(oldp+10,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__rom_ifu_rdata),32);
    bufp->fullCData(oldp+11,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                               ? (IData)(vlSelfRef.ysyx_26010027__DOT__io_master_rresp)
                               : 0U)),2);
    bufp->fullBit(oldp+12,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ram_lsu_rvalid));
    bufp->fullBit(oldp+13,((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r))));
    bufp->fullIData(oldp+14,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                               ? vlSelfRef.ysyx_26010027__DOT__io_master_rdata
                               : 0U)),32);
    bufp->fullCData(oldp+15,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ram_lsu_rresp),2);
    bufp->fullBit(oldp+16,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__io_master_bvalid))));
    bufp->fullCData(oldp+17,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                               ? (IData)(vlSelfRef.ysyx_26010027__DOT__io_master_bresp)
                               : 0U)),2);
    bufp->fullCData(oldp+18,(vlSelfRef.ysyx_26010027__DOT__grant),2);
    bufp->fullBit(oldp+19,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ram_lsu_rvalid) 
                            & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r)) 
                               & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ram_lsu_rresp))))));
    bufp->fullBit(oldp+20,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__handshake_b));
    bufp->fullIData(oldp+21,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mstatus),32);
    bufp->fullIData(oldp+22,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mcause),32);
    bufp->fullQData(oldp+23,(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mc),64);
    bufp->fullIData(oldp+25,((IData)(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mc)),32);
    bufp->fullIData(oldp+26,((IData)((vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__mc 
                                      >> 0x00000020U))),32);
    bufp->fullBit(oldp+27,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__lsu_pending));
    bufp->fullIData(oldp+28,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst_latch),32);
    bufp->fullCData(oldp+29,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w),3);
    bufp->fullCData(oldp+30,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r),2);
    bufp->fullBit(oldp+31,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r)) 
                            & ((IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ram_lsu_rvalid) 
                               & (0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ram_lsu_rresp))))));
    bufp->fullBit(oldp+32,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_w)) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__io_master_bvalid))));
    bufp->fullIData(oldp+33,(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__awaddr_latch),32);
    bufp->fullBit(oldp+34,(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__w_pending));
    bufp->fullBit(oldp+35,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                             ? (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))
                             : (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r)))));
    bufp->fullBit(oldp+36,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_arvalid))));
    bufp->fullBit(oldp+37,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_arvalid))));
    bufp->fullBit(oldp+38,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_awready))));
    bufp->fullBit(oldp+39,(((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_wready))));
    bufp->fullBit(oldp+40,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state)) 
                            & ((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                               & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_arvalid)))));
    bufp->fullBit(oldp+41,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                             & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_awready)) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_awvalid))));
    bufp->fullBit(oldp+42,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                             & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_wready)) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_wvalid))));
    bufp->fullBit(oldp+43,((((2U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant)) 
                             & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_arvalid)) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_arvalid))));
    bufp->fullBit(oldp+44,((((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                              ? (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))
                              : (1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__state_r))) 
                            & (IData)(vlSelfRef.ysyx_26010027__DOT__io_master_rvalid))));
    bufp->fullIData(oldp+45,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[0]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[1]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[2]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[3]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[4]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[5]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[6]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[7]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[8]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[9]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[10]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[11]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[12]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[13]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[14]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[15]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[16]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[17]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[18]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[19]),32);
    bufp->fullIData(oldp+65,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[20]),32);
    bufp->fullIData(oldp+66,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[21]),32);
    bufp->fullIData(oldp+67,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[22]),32);
    bufp->fullIData(oldp+68,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[23]),32);
    bufp->fullIData(oldp+69,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[24]),32);
    bufp->fullIData(oldp+70,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[25]),32);
    bufp->fullIData(oldp+71,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[26]),32);
    bufp->fullIData(oldp+72,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[27]),32);
    bufp->fullIData(oldp+73,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[28]),32);
    bufp->fullIData(oldp+74,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[29]),32);
    bufp->fullIData(oldp+75,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[30]),32);
    bufp->fullIData(oldp+76,(vlSelfRef.ysyx_26010027__DOT__R__DOT__rf[31]),32);
    bufp->fullBit(oldp+77,(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_arvalid));
    bufp->fullBit(oldp+78,(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_awvalid));
    bufp->fullBit(oldp+79,(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_awready));
    bufp->fullBit(oldp+80,(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_wvalid));
    bufp->fullBit(oldp+81,(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_wready));
    bufp->fullIData(oldp+82,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst),32);
    bufp->fullIData(oldp+83,(vlSelfRef.ysyx_26010027__DOT__pc),32);
    bufp->fullIData(oldp+84,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm),32);
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
    bufp->fullBit(oldp+100,((0x00100073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    bufp->fullBit(oldp+101,((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))));
    bufp->fullBit(oldp+102,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__lsu_stall));
    bufp->fullBit(oldp+103,((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state))));
    bufp->fullBit(oldp+104,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_arvalid));
    bufp->fullBit(oldp+105,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__lsu_ram_awvalid));
    bufp->fullBit(oldp+106,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__handshake_ifu_r));
    bufp->fullSData(oldp+107,((0x00000fffU & vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__imm)),12);
    bufp->fullIData(oldp+108,(((IData)(4U) + vlSelfRef.ysyx_26010027__DOT__pc)),32);
    bufp->fullCData(oldp+109,((0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)),7);
    bufp->fullCData(oldp+110,((7U & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                     >> 0x0000000cU))),3);
    bufp->fullCData(oldp+111,((vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                               >> 0x00000019U)),7);
    bufp->fullBit(oldp+112,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_I));
    bufp->fullBit(oldp+113,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__inst_U));
    bufp->fullBit(oldp+114,((0x63U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
    bufp->fullBit(oldp+115,((0x23U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
    bufp->fullBit(oldp+116,((0x6fU == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
    bufp->fullBit(oldp+117,((0x33U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
    bufp->fullBit(oldp+118,((0x13U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
    bufp->fullBit(oldp+119,((3U == (0x0000007fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
    bufp->fullBit(oldp+120,((0x73U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
    bufp->fullBit(oldp+121,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__addi));
    bufp->fullBit(oldp+122,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slti));
    bufp->fullBit(oldp+123,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slli));
    bufp->fullBit(oldp+124,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srli));
    bufp->fullBit(oldp+125,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srai));
    bufp->fullBit(oldp+126,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltiu));
    bufp->fullBit(oldp+127,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__xori));
    bufp->fullBit(oldp+128,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ori));
    bufp->fullBit(oldp+129,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__andi));
    bufp->fullBit(oldp+130,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lbu));
    bufp->fullBit(oldp+131,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lhu));
    bufp->fullBit(oldp+132,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lw));
    bufp->fullBit(oldp+133,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lh));
    bufp->fullBit(oldp+134,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__lb));
    bufp->fullBit(oldp+135,((0x67U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
    bufp->fullBit(oldp+136,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__addi) 
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
    bufp->fullBit(oldp+137,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__ld_type));
    bufp->fullBit(oldp+138,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__add));
    bufp->fullBit(oldp+139,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sub));
    bufp->fullBit(oldp+140,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sll));
    bufp->fullBit(oldp+141,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slt));
    bufp->fullBit(oldp+142,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltu));
    bufp->fullBit(oldp+143,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srl));
    bufp->fullBit(oldp+144,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sra));
    bufp->fullBit(oldp+145,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_xor));
    bufp->fullBit(oldp+146,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_or));
    bufp->fullBit(oldp+147,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_and));
    bufp->fullBit(oldp+148,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__add) 
                             | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sub) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sll) 
                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__slt) 
                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sltu) 
                                         | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__srl) 
                                            | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sra) 
                                               | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_xor) 
                                                  | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_or) 
                                                     | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__r_and))))))))))));
    bufp->fullBit(oldp+149,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sw));
    bufp->fullBit(oldp+150,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sb));
    bufp->fullBit(oldp+151,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sh));
    bufp->fullBit(oldp+152,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sw) 
                             | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sb) 
                                | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__sh)))));
    bufp->fullBit(oldp+153,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne));
    bufp->fullBit(oldp+154,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq));
    bufp->fullBit(oldp+155,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt));
    bufp->fullBit(oldp+156,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge));
    bufp->fullBit(oldp+157,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu));
    bufp->fullBit(oldp+158,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu));
    bufp->fullBit(oldp+159,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bne) 
                             | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__beq) 
                                | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__blt) 
                                   | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bge) 
                                      | ((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bltu) 
                                         | (IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__bgeu))))))));
    bufp->fullBit(oldp+160,((0x37U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
    bufp->fullBit(oldp+161,((0x17U == (0x0000007fU 
                                       & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst))));
    bufp->fullBit(oldp+162,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrw));
    bufp->fullBit(oldp+163,(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__csrrs));
    bufp->fullBit(oldp+164,((IData)((0x00003073U == 
                                     (0x0000707fU & vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)))));
    bufp->fullBit(oldp+165,((0x00000073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    bufp->fullBit(oldp+166,((0x30200073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)));
    bufp->fullBit(oldp+167,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_CSR__DOT__csr_we) 
                             | ((0x00000073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst) 
                                | (0x30200073U == vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst)))));
    bufp->fullBit(oldp+168,((1U & (~ (((IData)(vlSelfRef.ysyx_26010027__DOT__my_IDU__DOT__addi) 
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
    bufp->fullCData(oldp+169,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__state),2);
    bufp->fullBit(oldp+170,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__ren));
    bufp->fullBit(oldp+171,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__wen));
    bufp->fullBit(oldp+172,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_awvalid) 
                             & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_awready))));
    bufp->fullBit(oldp+173,(((IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_wvalid) 
                             & (IData)(vlSelfRef.ysyx_26010027__DOT__my_SRAM__DOT__io_slave_wready))));
    bufp->fullIData(oldp+174,(vlSelfRef.ysyx_26010027__DOT__alu_result),32);
    bufp->fullIData(oldp+175,(vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__n_pc),32);
    bufp->fullIData(oldp+176,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2),32);
    bufp->fullIData(oldp+177,(vlSelfRef.ysyx_26010027__DOT__wdata),32);
    bufp->fullIData(oldp+178,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs1),32);
    bufp->fullIData(oldp+179,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__rs2),32);
    bufp->fullIData(oldp+180,(vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__result),32);
    bufp->fullIData(oldp+181,(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted),32);
    bufp->fullBit(oldp+182,(vlSelfRef.clock));
    bufp->fullBit(oldp+183,(vlSelfRef.reset));
    bufp->fullIData(oldp+184,(vlSelfRef.cur_pc),32);
    bufp->fullIData(oldp+185,(vlSelfRef.cur_inst),32);
    bufp->fullIData(oldp+186,(((1U == (IData)(vlSelfRef.ysyx_26010027__DOT__grant))
                                ? vlSelfRef.ysyx_26010027__DOT__pc
                                : vlSelfRef.ysyx_26010027__DOT__alu_result)),32);
    bufp->fullIData(oldp+187,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_w))
                                ? vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2
                                : VL_SHIFTL_III(32,32,32, vlSelfRef.ysyx_26010027__DOT__my_EXU__DOT__src2, 
                                                VL_SHIFTL_III(32,32,32, 
                                                              (3U 
                                                               & vlSelfRef.ysyx_26010027__DOT__alu_result), 3U)))),32);
    bufp->fullCData(oldp+188,(((0U == (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_w))
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
    bufp->fullIData(oldp+189,(((0U == (0x0000001fU 
                                       & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                          >> 0x0000000fU)))
                                ? 0U : vlSelfRef.ysyx_26010027__DOT__R__DOT__rf
                               [(0x0000001fU & (vlSelfRef.ysyx_26010027__DOT__my_IFU__DOT__inst 
                                                >> 0x0000000fU))])),32);
    bufp->fullIData(oldp+190,(((4U & (IData)(vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__mem_r))
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
                                            << 8U) 
                                           | (0x000000ffU 
                                              & vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted))
                                        : vlSelfRef.ysyx_26010027__DOT__my_LSU__DOT__rdata_shifted)))),32);
}
