// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelfRef.top__DOT__ins_out),32);
        bufp->chgIData(oldp+1,(vlSelfRef.top__DOT__FU__DOT__PC),32);
        bufp->chgIData(oldp+2,((0x1fU & (vlSelfRef.top__DOT__ins_out 
                                         >> 0xfU))),32);
        bufp->chgIData(oldp+3,((0x1fU & (vlSelfRef.top__DOT__ins_out 
                                         >> 0x14U))),32);
        bufp->chgIData(oldp+4,((0x1fU & (vlSelfRef.top__DOT__ins_out 
                                         >> 7U))),32);
        bufp->chgIData(oldp+5,(vlSelfRef.top__DOT__rs0_data),32);
        bufp->chgIData(oldp+6,(vlSelfRef.top__DOT__rs1_data),32);
        bufp->chgIData(oldp+7,(vlSelfRef.top__DOT__rd_data),32);
        bufp->chgCData(oldp+8,(vlSelfRef.top__DOT__exec_type),6);
        bufp->chgIData(oldp+9,(vlSelfRef.top__DOT__immediate),32);
        bufp->chgBit(oldp+10,(vlSelfRef.top__DOT__reg_we));
        bufp->chgCData(oldp+11,(vlSelfRef.top__DOT__data_mem_width),3);
        bufp->chgCData(oldp+12,(vlSelfRef.top__DOT__data_mem_we),4);
        bufp->chgIData(oldp+13,(vlSelfRef.top__DOT__data_mem_addr),32);
        bufp->chgBit(oldp+14,(vlSelfRef.top__DOT__data_mem_sign));
        bufp->chgIData(oldp+15,(vlSelfRef.top__DOT__data_mem_in),32);
        bufp->chgIData(oldp+16,(vlSelfRef.top__DOT__data_mem_out),32);
        bufp->chgBit(oldp+17,(vlSelfRef.top__DOT__data_mem_reg_we));
        bufp->chgCData(oldp+18,(vlSelfRef.top__DOT__data_mem_reg_addr),5);
        bufp->chgCData(oldp+19,(vlSelfRef.top__DOT__data_mem_reg_width),3);
        bufp->chgBit(oldp+20,(vlSelfRef.top__DOT__jump_en));
        bufp->chgIData(oldp+21,(vlSelfRef.top__DOT__jump_addr),32);
        bufp->chgBit(oldp+22,(vlSelfRef.top__DOT__ins_ready));
        bufp->chgIData(oldp+23,(vlSelfRef.top__DOT__tmpGPIO),32);
        bufp->chgBit(oldp+24,(vlSelfRef.top__DOT__delay));
        bufp->chgSData(oldp+25,((0x3ffU & (vlSelfRef.top__DOT__data_mem_addr 
                                           >> 2U))),10);
        bufp->chgBit(oldp+26,((0x1000U <= vlSelfRef.top__DOT__data_mem_addr)));
        bufp->chgCData(oldp+27,((0x1fU & (vlSelfRef.top__DOT__ins_out 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+28,((0x1fU & (vlSelfRef.top__DOT__ins_out 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+29,((0x1fU & (vlSelfRef.top__DOT__ins_out 
                                          >> 7U))),5);
        bufp->chgIData(oldp+30,(vlSelfRef.top__DOT__EU__DOT__target_addr),32);
        bufp->chgIData(oldp+31,((0xfffff000U & vlSelfRef.top__DOT__immediate)),32);
        bufp->chgIData(oldp+32,(vlSelfRef.top__DOT__EU__DOT__signed_addr_load),32);
        bufp->chgIData(oldp+33,(vlSelfRef.top__DOT__EU__DOT__unsigned_addr_load),32);
        bufp->chgIData(oldp+34,(vlSelfRef.top__DOT__EU__DOT__addr_store),32);
        bufp->chgIData(oldp+35,(vlSelfRef.top__DOT__EU__DOT__jump_addr_precalc),32);
        bufp->chgSData(oldp+36,((0x3ffU & (vlSelfRef.top__DOT__FU__DOT__PC 
                                           >> 2U))),10);
        bufp->chgIData(oldp+37,(vlSelfRef.top__DOT__reg_file__DOT__regs[0]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top__DOT__reg_file__DOT__regs[1]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.top__DOT__reg_file__DOT__regs[2]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.top__DOT__reg_file__DOT__regs[3]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.top__DOT__reg_file__DOT__regs[4]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.top__DOT__reg_file__DOT__regs[5]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.top__DOT__reg_file__DOT__regs[6]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.top__DOT__reg_file__DOT__regs[7]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.top__DOT__reg_file__DOT__regs[8]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.top__DOT__reg_file__DOT__regs[9]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.top__DOT__reg_file__DOT__regs[10]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.top__DOT__reg_file__DOT__regs[11]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.top__DOT__reg_file__DOT__regs[12]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.top__DOT__reg_file__DOT__regs[13]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.top__DOT__reg_file__DOT__regs[14]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.top__DOT__reg_file__DOT__regs[15]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.top__DOT__reg_file__DOT__regs[16]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.top__DOT__reg_file__DOT__regs[17]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.top__DOT__reg_file__DOT__regs[18]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.top__DOT__reg_file__DOT__regs[19]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.top__DOT__reg_file__DOT__regs[20]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.top__DOT__reg_file__DOT__regs[21]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.top__DOT__reg_file__DOT__regs[22]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.top__DOT__reg_file__DOT__regs[23]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.top__DOT__reg_file__DOT__regs[24]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.top__DOT__reg_file__DOT__regs[25]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.top__DOT__reg_file__DOT__regs[26]),32);
        bufp->chgIData(oldp+64,(vlSelfRef.top__DOT__reg_file__DOT__regs[27]),32);
        bufp->chgIData(oldp+65,(vlSelfRef.top__DOT__reg_file__DOT__regs[28]),32);
        bufp->chgIData(oldp+66,(vlSelfRef.top__DOT__reg_file__DOT__regs[29]),32);
        bufp->chgIData(oldp+67,(vlSelfRef.top__DOT__reg_file__DOT__regs[30]),32);
        bufp->chgIData(oldp+68,(vlSelfRef.top__DOT__reg_file__DOT__regs[31]),32);
        bufp->chgBit(oldp+69,(vlSelfRef.top__DOT__reg_file__DOT__mem_wait));
        bufp->chgCData(oldp+70,(vlSelfRef.top__DOT__reg_file__DOT__tmp_reg_addr),5);
    }
    bufp->chgBit(oldp+71,(vlSelfRef.clk));
    bufp->chgCData(oldp+72,(vlSelfRef.GPIO),6);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
