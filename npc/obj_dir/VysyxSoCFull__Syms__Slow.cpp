// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VysyxSoCFull__pch.h"

VysyxSoCFull__Syms::VysyxSoCFull__Syms(VerilatedContext* contextp, const char* namep, VysyxSoCFull* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(1068);
    // Setup sub module instances
    TOP____024unit.ctor(this, "$unit");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscopep_ysyxSoCFull__asic__axi42apb = new VerilatedScope{this, "ysyxSoCFull.asic.axi42apb", "axi42apb", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_ysyxSoCFull__asic__axi4frag = new VerilatedScope{this, "ysyxSoCFull.asic.axi4frag", "axi4frag", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_ysyxSoCFull__asic__axi4xbar_1 = new VerilatedScope{this, "ysyxSoCFull.asic.axi4xbar_1", "axi4xbar_1", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_ysyxSoCFull__asic__axi4yank = new VerilatedScope{this, "ysyxSoCFull.asic.axi4yank", "axi4yank", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_ysyxSoCFull__asic__axi4yank__unnamedblk1 = new VerilatedScope{this, "ysyxSoCFull.asic.axi4yank.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_ysyxSoCFull__asic__lmrom = new VerilatedScope{this, "ysyxSoCFull.asic.lmrom", "lmrom", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_ysyxSoCFull__flash = new VerilatedScope{this, "ysyxSoCFull.flash", "flash", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_ysyxSoCFull__flash__flash_cmd_i = new VerilatedScope{this, "ysyxSoCFull.flash.flash_cmd_i", "flash_cmd_i", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    // Setup export functions - final: 0
    // Setup export functions - final: 1
}

VysyxSoCFull__Syms::~VysyxSoCFull__Syms() {
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_ysyxSoCFull__asic__axi42apb, __Vscopep_ysyxSoCFull__asic__axi42apb = nullptr);
    VL_DO_CLEAR(delete __Vscopep_ysyxSoCFull__asic__axi4frag, __Vscopep_ysyxSoCFull__asic__axi4frag = nullptr);
    VL_DO_CLEAR(delete __Vscopep_ysyxSoCFull__asic__axi4xbar_1, __Vscopep_ysyxSoCFull__asic__axi4xbar_1 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_ysyxSoCFull__asic__axi4yank, __Vscopep_ysyxSoCFull__asic__axi4yank = nullptr);
    VL_DO_CLEAR(delete __Vscopep_ysyxSoCFull__asic__axi4yank__unnamedblk1, __Vscopep_ysyxSoCFull__asic__axi4yank__unnamedblk1 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_ysyxSoCFull__asic__lmrom, __Vscopep_ysyxSoCFull__asic__lmrom = nullptr);
    VL_DO_CLEAR(delete __Vscopep_ysyxSoCFull__flash, __Vscopep_ysyxSoCFull__flash = nullptr);
    VL_DO_CLEAR(delete __Vscopep_ysyxSoCFull__flash__flash_cmd_i, __Vscopep_ysyxSoCFull__flash__flash_cmd_i = nullptr);
    // Tear down sub module instances
    TOP____024unit.dtor();
}
