// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+166,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"GPIO",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+166,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"GPIO",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+168,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"data_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"ins_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"ins_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"ins_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"rs0_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"rs0_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"exec_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+10,0,"immediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"reg_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"data_mem_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+13,0,"data_mem_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"data_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"data_mem_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"data_mem_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"data_mem_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"data_mem_reg_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"data_mem_reg_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+20,0,"data_mem_reg_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+21,0,"jump_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"jump_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"ins_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"tmpGPIO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"fd_ins",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"ins_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+174,0,"data_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("DRAM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+166,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"data_width",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+13,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+16,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"GPIO",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 64; ++i) {
        tracep->declBus(c+25+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+89,0,"word_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+90,0,"is_mmio_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("DU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+166,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"fd_ins",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"exec_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+91,0,"rs0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+92,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+93,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"immediate",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("EU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+166,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"PC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"exec_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+6,0,"rs0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"immediate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"ins_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"mem_reg_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"reg_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+20,0,"reg_width",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+13,0,"mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"mem_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"mem_width",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+15,0,"mem_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"jump_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"jump_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"target_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"signed_addr_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"unsigned_addr_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"addr_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"jump_addr_precalc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("FU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+166,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"ins_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+21,0,"jump_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"jump_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"ins_ram_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"ins_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"ins_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("IRAM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+166,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 33; ++i) {
        tracep->declBus(c+100+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+133,0,"word_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_file", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+166,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"rs0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+92,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+93,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"rd_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"rs0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"mem_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"reg_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+20,0,"data_width",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+17,0,"mem_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+134+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+168,(vlSelfRef.top__DOT__PC),32);
    bufp->fullIData(oldp+169,(vlSelfRef.top__DOT__data_in),32);
    bufp->fullIData(oldp+170,(vlSelfRef.top__DOT__data_out),32);
    bufp->fullIData(oldp+171,(vlSelfRef.top__DOT__data_addr),32);
    bufp->fullIData(oldp+172,(vlSelfRef.top__DOT__ins_in),32);
    bufp->fullCData(oldp+173,(vlSelfRef.top__DOT__ins_we),4);
    bufp->fullCData(oldp+174,(vlSelfRef.top__DOT__data_we),4);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.top__DOT__ins_out),32);
    bufp->fullIData(oldp+2,(vlSelfRef.top__DOT__FU__DOT__PC),32);
    bufp->fullIData(oldp+3,((0x1fU & (vlSelfRef.top__DOT__ins_out 
                                      >> 0xfU))),32);
    bufp->fullIData(oldp+4,((0x1fU & (vlSelfRef.top__DOT__ins_out 
                                      >> 0x14U))),32);
    bufp->fullIData(oldp+5,((0x1fU & (vlSelfRef.top__DOT__ins_out 
                                      >> 7U))),32);
    bufp->fullIData(oldp+6,(vlSelfRef.top__DOT__rs0_data),32);
    bufp->fullIData(oldp+7,(vlSelfRef.top__DOT__rs1_data),32);
    bufp->fullIData(oldp+8,(vlSelfRef.top__DOT__rd_data),32);
    bufp->fullCData(oldp+9,(vlSelfRef.top__DOT__exec_type),6);
    bufp->fullIData(oldp+10,(vlSelfRef.top__DOT__immediate),32);
    bufp->fullBit(oldp+11,(vlSelfRef.top__DOT__reg_we));
    bufp->fullCData(oldp+12,(vlSelfRef.top__DOT__data_mem_width),3);
    bufp->fullCData(oldp+13,(vlSelfRef.top__DOT__data_mem_we),4);
    bufp->fullIData(oldp+14,(vlSelfRef.top__DOT__data_mem_addr),32);
    bufp->fullBit(oldp+15,(vlSelfRef.top__DOT__data_mem_sign));
    bufp->fullIData(oldp+16,(vlSelfRef.top__DOT__data_mem_in),32);
    bufp->fullIData(oldp+17,(vlSelfRef.top__DOT__data_mem_out),32);
    bufp->fullBit(oldp+18,(vlSelfRef.top__DOT__data_mem_reg_we));
    bufp->fullCData(oldp+19,(vlSelfRef.top__DOT__data_mem_reg_addr),5);
    bufp->fullCData(oldp+20,(vlSelfRef.top__DOT__data_mem_reg_width),3);
    bufp->fullBit(oldp+21,(vlSelfRef.top__DOT__jump_en));
    bufp->fullIData(oldp+22,(vlSelfRef.top__DOT__jump_addr),32);
    bufp->fullBit(oldp+23,(vlSelfRef.top__DOT__ins_ready));
    bufp->fullIData(oldp+24,(vlSelfRef.top__DOT__tmpGPIO),32);
    bufp->fullIData(oldp+25,(vlSelfRef.top__DOT__DRAM__DOT__mem[0]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.top__DOT__DRAM__DOT__mem[1]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.top__DOT__DRAM__DOT__mem[2]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.top__DOT__DRAM__DOT__mem[3]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.top__DOT__DRAM__DOT__mem[4]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.top__DOT__DRAM__DOT__mem[5]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.top__DOT__DRAM__DOT__mem[6]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.top__DOT__DRAM__DOT__mem[7]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.top__DOT__DRAM__DOT__mem[8]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.top__DOT__DRAM__DOT__mem[9]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.top__DOT__DRAM__DOT__mem[10]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.top__DOT__DRAM__DOT__mem[11]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.top__DOT__DRAM__DOT__mem[12]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.top__DOT__DRAM__DOT__mem[13]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.top__DOT__DRAM__DOT__mem[14]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.top__DOT__DRAM__DOT__mem[15]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.top__DOT__DRAM__DOT__mem[16]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.top__DOT__DRAM__DOT__mem[17]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.top__DOT__DRAM__DOT__mem[18]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.top__DOT__DRAM__DOT__mem[19]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.top__DOT__DRAM__DOT__mem[20]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.top__DOT__DRAM__DOT__mem[21]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.top__DOT__DRAM__DOT__mem[22]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.top__DOT__DRAM__DOT__mem[23]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.top__DOT__DRAM__DOT__mem[24]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.top__DOT__DRAM__DOT__mem[25]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.top__DOT__DRAM__DOT__mem[26]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.top__DOT__DRAM__DOT__mem[27]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.top__DOT__DRAM__DOT__mem[28]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.top__DOT__DRAM__DOT__mem[29]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.top__DOT__DRAM__DOT__mem[30]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.top__DOT__DRAM__DOT__mem[31]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.top__DOT__DRAM__DOT__mem[32]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.top__DOT__DRAM__DOT__mem[33]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.top__DOT__DRAM__DOT__mem[34]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.top__DOT__DRAM__DOT__mem[35]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.top__DOT__DRAM__DOT__mem[36]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.top__DOT__DRAM__DOT__mem[37]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.top__DOT__DRAM__DOT__mem[38]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.top__DOT__DRAM__DOT__mem[39]),32);
    bufp->fullIData(oldp+65,(vlSelfRef.top__DOT__DRAM__DOT__mem[40]),32);
    bufp->fullIData(oldp+66,(vlSelfRef.top__DOT__DRAM__DOT__mem[41]),32);
    bufp->fullIData(oldp+67,(vlSelfRef.top__DOT__DRAM__DOT__mem[42]),32);
    bufp->fullIData(oldp+68,(vlSelfRef.top__DOT__DRAM__DOT__mem[43]),32);
    bufp->fullIData(oldp+69,(vlSelfRef.top__DOT__DRAM__DOT__mem[44]),32);
    bufp->fullIData(oldp+70,(vlSelfRef.top__DOT__DRAM__DOT__mem[45]),32);
    bufp->fullIData(oldp+71,(vlSelfRef.top__DOT__DRAM__DOT__mem[46]),32);
    bufp->fullIData(oldp+72,(vlSelfRef.top__DOT__DRAM__DOT__mem[47]),32);
    bufp->fullIData(oldp+73,(vlSelfRef.top__DOT__DRAM__DOT__mem[48]),32);
    bufp->fullIData(oldp+74,(vlSelfRef.top__DOT__DRAM__DOT__mem[49]),32);
    bufp->fullIData(oldp+75,(vlSelfRef.top__DOT__DRAM__DOT__mem[50]),32);
    bufp->fullIData(oldp+76,(vlSelfRef.top__DOT__DRAM__DOT__mem[51]),32);
    bufp->fullIData(oldp+77,(vlSelfRef.top__DOT__DRAM__DOT__mem[52]),32);
    bufp->fullIData(oldp+78,(vlSelfRef.top__DOT__DRAM__DOT__mem[53]),32);
    bufp->fullIData(oldp+79,(vlSelfRef.top__DOT__DRAM__DOT__mem[54]),32);
    bufp->fullIData(oldp+80,(vlSelfRef.top__DOT__DRAM__DOT__mem[55]),32);
    bufp->fullIData(oldp+81,(vlSelfRef.top__DOT__DRAM__DOT__mem[56]),32);
    bufp->fullIData(oldp+82,(vlSelfRef.top__DOT__DRAM__DOT__mem[57]),32);
    bufp->fullIData(oldp+83,(vlSelfRef.top__DOT__DRAM__DOT__mem[58]),32);
    bufp->fullIData(oldp+84,(vlSelfRef.top__DOT__DRAM__DOT__mem[59]),32);
    bufp->fullIData(oldp+85,(vlSelfRef.top__DOT__DRAM__DOT__mem[60]),32);
    bufp->fullIData(oldp+86,(vlSelfRef.top__DOT__DRAM__DOT__mem[61]),32);
    bufp->fullIData(oldp+87,(vlSelfRef.top__DOT__DRAM__DOT__mem[62]),32);
    bufp->fullIData(oldp+88,(vlSelfRef.top__DOT__DRAM__DOT__mem[63]),32);
    bufp->fullCData(oldp+89,((0xffU & (vlSelfRef.top__DOT__data_mem_addr 
                                       >> 2U))),8);
    bufp->fullBit(oldp+90,((0x100U <= vlSelfRef.top__DOT__data_mem_addr)));
    bufp->fullCData(oldp+91,((0x1fU & (vlSelfRef.top__DOT__ins_out 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+92,((0x1fU & (vlSelfRef.top__DOT__ins_out 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+93,((0x1fU & (vlSelfRef.top__DOT__ins_out 
                                       >> 7U))),5);
    bufp->fullIData(oldp+94,(vlSelfRef.top__DOT__EU__DOT__target_addr),32);
    bufp->fullIData(oldp+95,((0xfffff000U & vlSelfRef.top__DOT__immediate)),32);
    bufp->fullIData(oldp+96,(vlSelfRef.top__DOT__EU__DOT__signed_addr_load),32);
    bufp->fullIData(oldp+97,(vlSelfRef.top__DOT__EU__DOT__unsigned_addr_load),32);
    bufp->fullIData(oldp+98,(vlSelfRef.top__DOT__EU__DOT__addr_store),32);
    bufp->fullIData(oldp+99,(vlSelfRef.top__DOT__EU__DOT__jump_addr_precalc),32);
    bufp->fullIData(oldp+100,(vlSelfRef.top__DOT__IRAM__DOT__mem[0]),32);
    bufp->fullIData(oldp+101,(vlSelfRef.top__DOT__IRAM__DOT__mem[1]),32);
    bufp->fullIData(oldp+102,(vlSelfRef.top__DOT__IRAM__DOT__mem[2]),32);
    bufp->fullIData(oldp+103,(vlSelfRef.top__DOT__IRAM__DOT__mem[3]),32);
    bufp->fullIData(oldp+104,(vlSelfRef.top__DOT__IRAM__DOT__mem[4]),32);
    bufp->fullIData(oldp+105,(vlSelfRef.top__DOT__IRAM__DOT__mem[5]),32);
    bufp->fullIData(oldp+106,(vlSelfRef.top__DOT__IRAM__DOT__mem[6]),32);
    bufp->fullIData(oldp+107,(vlSelfRef.top__DOT__IRAM__DOT__mem[7]),32);
    bufp->fullIData(oldp+108,(vlSelfRef.top__DOT__IRAM__DOT__mem[8]),32);
    bufp->fullIData(oldp+109,(vlSelfRef.top__DOT__IRAM__DOT__mem[9]),32);
    bufp->fullIData(oldp+110,(vlSelfRef.top__DOT__IRAM__DOT__mem[10]),32);
    bufp->fullIData(oldp+111,(vlSelfRef.top__DOT__IRAM__DOT__mem[11]),32);
    bufp->fullIData(oldp+112,(vlSelfRef.top__DOT__IRAM__DOT__mem[12]),32);
    bufp->fullIData(oldp+113,(vlSelfRef.top__DOT__IRAM__DOT__mem[13]),32);
    bufp->fullIData(oldp+114,(vlSelfRef.top__DOT__IRAM__DOT__mem[14]),32);
    bufp->fullIData(oldp+115,(vlSelfRef.top__DOT__IRAM__DOT__mem[15]),32);
    bufp->fullIData(oldp+116,(vlSelfRef.top__DOT__IRAM__DOT__mem[16]),32);
    bufp->fullIData(oldp+117,(vlSelfRef.top__DOT__IRAM__DOT__mem[17]),32);
    bufp->fullIData(oldp+118,(vlSelfRef.top__DOT__IRAM__DOT__mem[18]),32);
    bufp->fullIData(oldp+119,(vlSelfRef.top__DOT__IRAM__DOT__mem[19]),32);
    bufp->fullIData(oldp+120,(vlSelfRef.top__DOT__IRAM__DOT__mem[20]),32);
    bufp->fullIData(oldp+121,(vlSelfRef.top__DOT__IRAM__DOT__mem[21]),32);
    bufp->fullIData(oldp+122,(vlSelfRef.top__DOT__IRAM__DOT__mem[22]),32);
    bufp->fullIData(oldp+123,(vlSelfRef.top__DOT__IRAM__DOT__mem[23]),32);
    bufp->fullIData(oldp+124,(vlSelfRef.top__DOT__IRAM__DOT__mem[24]),32);
    bufp->fullIData(oldp+125,(vlSelfRef.top__DOT__IRAM__DOT__mem[25]),32);
    bufp->fullIData(oldp+126,(vlSelfRef.top__DOT__IRAM__DOT__mem[26]),32);
    bufp->fullIData(oldp+127,(vlSelfRef.top__DOT__IRAM__DOT__mem[27]),32);
    bufp->fullIData(oldp+128,(vlSelfRef.top__DOT__IRAM__DOT__mem[28]),32);
    bufp->fullIData(oldp+129,(vlSelfRef.top__DOT__IRAM__DOT__mem[29]),32);
    bufp->fullIData(oldp+130,(vlSelfRef.top__DOT__IRAM__DOT__mem[30]),32);
    bufp->fullIData(oldp+131,(vlSelfRef.top__DOT__IRAM__DOT__mem[31]),32);
    bufp->fullIData(oldp+132,(vlSelfRef.top__DOT__IRAM__DOT__mem[32]),32);
    bufp->fullCData(oldp+133,((0xffU & (vlSelfRef.top__DOT__FU__DOT__PC 
                                        >> 2U))),8);
    bufp->fullIData(oldp+134,(vlSelfRef.top__DOT__reg_file__DOT__regs[0]),32);
    bufp->fullIData(oldp+135,(vlSelfRef.top__DOT__reg_file__DOT__regs[1]),32);
    bufp->fullIData(oldp+136,(vlSelfRef.top__DOT__reg_file__DOT__regs[2]),32);
    bufp->fullIData(oldp+137,(vlSelfRef.top__DOT__reg_file__DOT__regs[3]),32);
    bufp->fullIData(oldp+138,(vlSelfRef.top__DOT__reg_file__DOT__regs[4]),32);
    bufp->fullIData(oldp+139,(vlSelfRef.top__DOT__reg_file__DOT__regs[5]),32);
    bufp->fullIData(oldp+140,(vlSelfRef.top__DOT__reg_file__DOT__regs[6]),32);
    bufp->fullIData(oldp+141,(vlSelfRef.top__DOT__reg_file__DOT__regs[7]),32);
    bufp->fullIData(oldp+142,(vlSelfRef.top__DOT__reg_file__DOT__regs[8]),32);
    bufp->fullIData(oldp+143,(vlSelfRef.top__DOT__reg_file__DOT__regs[9]),32);
    bufp->fullIData(oldp+144,(vlSelfRef.top__DOT__reg_file__DOT__regs[10]),32);
    bufp->fullIData(oldp+145,(vlSelfRef.top__DOT__reg_file__DOT__regs[11]),32);
    bufp->fullIData(oldp+146,(vlSelfRef.top__DOT__reg_file__DOT__regs[12]),32);
    bufp->fullIData(oldp+147,(vlSelfRef.top__DOT__reg_file__DOT__regs[13]),32);
    bufp->fullIData(oldp+148,(vlSelfRef.top__DOT__reg_file__DOT__regs[14]),32);
    bufp->fullIData(oldp+149,(vlSelfRef.top__DOT__reg_file__DOT__regs[15]),32);
    bufp->fullIData(oldp+150,(vlSelfRef.top__DOT__reg_file__DOT__regs[16]),32);
    bufp->fullIData(oldp+151,(vlSelfRef.top__DOT__reg_file__DOT__regs[17]),32);
    bufp->fullIData(oldp+152,(vlSelfRef.top__DOT__reg_file__DOT__regs[18]),32);
    bufp->fullIData(oldp+153,(vlSelfRef.top__DOT__reg_file__DOT__regs[19]),32);
    bufp->fullIData(oldp+154,(vlSelfRef.top__DOT__reg_file__DOT__regs[20]),32);
    bufp->fullIData(oldp+155,(vlSelfRef.top__DOT__reg_file__DOT__regs[21]),32);
    bufp->fullIData(oldp+156,(vlSelfRef.top__DOT__reg_file__DOT__regs[22]),32);
    bufp->fullIData(oldp+157,(vlSelfRef.top__DOT__reg_file__DOT__regs[23]),32);
    bufp->fullIData(oldp+158,(vlSelfRef.top__DOT__reg_file__DOT__regs[24]),32);
    bufp->fullIData(oldp+159,(vlSelfRef.top__DOT__reg_file__DOT__regs[25]),32);
    bufp->fullIData(oldp+160,(vlSelfRef.top__DOT__reg_file__DOT__regs[26]),32);
    bufp->fullIData(oldp+161,(vlSelfRef.top__DOT__reg_file__DOT__regs[27]),32);
    bufp->fullIData(oldp+162,(vlSelfRef.top__DOT__reg_file__DOT__regs[28]),32);
    bufp->fullIData(oldp+163,(vlSelfRef.top__DOT__reg_file__DOT__regs[29]),32);
    bufp->fullIData(oldp+164,(vlSelfRef.top__DOT__reg_file__DOT__regs[30]),32);
    bufp->fullIData(oldp+165,(vlSelfRef.top__DOT__reg_file__DOT__regs[31]),32);
    bufp->fullBit(oldp+166,(vlSelfRef.clk));
    bufp->fullCData(oldp+167,(vlSelfRef.GPIO),6);
}
