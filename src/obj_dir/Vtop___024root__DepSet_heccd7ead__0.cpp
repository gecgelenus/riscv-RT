// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__top__DOT__reg_file__DOT__mem_wait;
    __Vdly__top__DOT__reg_file__DOT__mem_wait = 0;
    IData/*31:0*/ __Vdly__top__DOT__FU__DOT__PC;
    __Vdly__top__DOT__FU__DOT__PC = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__DRAM__DOT__mem__v0;
    __VdlyVal__top__DOT__DRAM__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__top__DOT__DRAM__DOT__mem__v0;
    __VdlyDim0__top__DOT__DRAM__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__DRAM__DOT__mem__v0;
    __VdlySet__top__DOT__DRAM__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__DRAM__DOT__mem__v1;
    __VdlyVal__top__DOT__DRAM__DOT__mem__v1 = 0;
    SData/*9:0*/ __VdlyDim0__top__DOT__DRAM__DOT__mem__v1;
    __VdlyDim0__top__DOT__DRAM__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__DRAM__DOT__mem__v1;
    __VdlySet__top__DOT__DRAM__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__DRAM__DOT__mem__v2;
    __VdlyVal__top__DOT__DRAM__DOT__mem__v2 = 0;
    SData/*9:0*/ __VdlyDim0__top__DOT__DRAM__DOT__mem__v2;
    __VdlyDim0__top__DOT__DRAM__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__DRAM__DOT__mem__v2;
    __VdlySet__top__DOT__DRAM__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__DRAM__DOT__mem__v3;
    __VdlyVal__top__DOT__DRAM__DOT__mem__v3 = 0;
    SData/*9:0*/ __VdlyDim0__top__DOT__DRAM__DOT__mem__v3;
    __VdlyDim0__top__DOT__DRAM__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__DRAM__DOT__mem__v3;
    __VdlySet__top__DOT__DRAM__DOT__mem__v3 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__reg_file__DOT__regs__v0;
    __VdlyVal__top__DOT__reg_file__DOT__regs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__reg_file__DOT__regs__v0;
    __VdlyDim0__top__DOT__reg_file__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__reg_file__DOT__regs__v0;
    __VdlySet__top__DOT__reg_file__DOT__regs__v0 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__reg_file__DOT__regs__v1;
    __VdlyVal__top__DOT__reg_file__DOT__regs__v1 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__reg_file__DOT__regs__v1;
    __VdlyDim0__top__DOT__reg_file__DOT__regs__v1 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__reg_file__DOT__regs__v1;
    __VdlySet__top__DOT__reg_file__DOT__regs__v1 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__IRAM__DOT__mem__v0;
    __VdlyVal__top__DOT__IRAM__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__top__DOT__IRAM__DOT__mem__v0;
    __VdlyDim0__top__DOT__IRAM__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__IRAM__DOT__mem__v0;
    __VdlySet__top__DOT__IRAM__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__IRAM__DOT__mem__v1;
    __VdlyVal__top__DOT__IRAM__DOT__mem__v1 = 0;
    SData/*9:0*/ __VdlyDim0__top__DOT__IRAM__DOT__mem__v1;
    __VdlyDim0__top__DOT__IRAM__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__IRAM__DOT__mem__v1;
    __VdlySet__top__DOT__IRAM__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__IRAM__DOT__mem__v2;
    __VdlyVal__top__DOT__IRAM__DOT__mem__v2 = 0;
    SData/*9:0*/ __VdlyDim0__top__DOT__IRAM__DOT__mem__v2;
    __VdlyDim0__top__DOT__IRAM__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__IRAM__DOT__mem__v2;
    __VdlySet__top__DOT__IRAM__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__IRAM__DOT__mem__v3;
    __VdlyVal__top__DOT__IRAM__DOT__mem__v3 = 0;
    SData/*9:0*/ __VdlyDim0__top__DOT__IRAM__DOT__mem__v3;
    __VdlyDim0__top__DOT__IRAM__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__IRAM__DOT__mem__v3;
    __VdlySet__top__DOT__IRAM__DOT__mem__v3 = 0;
    IData/*31:0*/ __Vtemp_11;
    IData/*31:0*/ __Vtemp_17;
    // Body
    __Vdly__top__DOT__FU__DOT__PC = vlSelfRef.top__DOT__FU__DOT__PC;
    __VdlySet__top__DOT__DRAM__DOT__mem__v0 = 0U;
    __VdlySet__top__DOT__DRAM__DOT__mem__v1 = 0U;
    __VdlySet__top__DOT__DRAM__DOT__mem__v2 = 0U;
    __VdlySet__top__DOT__DRAM__DOT__mem__v3 = 0U;
    __VdlySet__top__DOT__IRAM__DOT__mem__v0 = 0U;
    __VdlySet__top__DOT__IRAM__DOT__mem__v1 = 0U;
    __VdlySet__top__DOT__IRAM__DOT__mem__v2 = 0U;
    __VdlySet__top__DOT__IRAM__DOT__mem__v3 = 0U;
    __Vdly__top__DOT__reg_file__DOT__mem_wait = vlSelfRef.top__DOT__reg_file__DOT__mem_wait;
    __VdlySet__top__DOT__reg_file__DOT__regs__v0 = 0U;
    __VdlySet__top__DOT__reg_file__DOT__regs__v1 = 0U;
    if (vlSelfRef.top__DOT__jump_en) {
        __Vdly__top__DOT__FU__DOT__PC = vlSelfRef.top__DOT__jump_addr;
    } else if ((1U & (~ (IData)(vlSelfRef.top__DOT__delay)))) {
        __Vdly__top__DOT__FU__DOT__PC = ((IData)(4U) 
                                         + vlSelfRef.top__DOT__FU__DOT__PC);
    }
    if ((1U & (IData)(vlSelfRef.top__DOT__data_mem_we))) {
        __VdlyVal__top__DOT__DRAM__DOT__mem__v0 = (0xffU 
                                                   & vlSelfRef.top__DOT__data_mem_in);
        __VdlyDim0__top__DOT__DRAM__DOT__mem__v0 = 
            (0x3ffU & (vlSelfRef.top__DOT__data_mem_addr 
                       >> 2U));
        __VdlySet__top__DOT__DRAM__DOT__mem__v0 = 1U;
    }
    if ((2U & (IData)(vlSelfRef.top__DOT__data_mem_we))) {
        __VdlyVal__top__DOT__DRAM__DOT__mem__v1 = (0xffU 
                                                   & (vlSelfRef.top__DOT__data_mem_in 
                                                      >> 8U));
        __VdlyDim0__top__DOT__DRAM__DOT__mem__v1 = 
            (0x3ffU & (vlSelfRef.top__DOT__data_mem_addr 
                       >> 2U));
        __VdlySet__top__DOT__DRAM__DOT__mem__v1 = 1U;
    }
    if ((4U & (IData)(vlSelfRef.top__DOT__data_mem_we))) {
        __VdlyVal__top__DOT__DRAM__DOT__mem__v2 = (0xffU 
                                                   & (vlSelfRef.top__DOT__data_mem_in 
                                                      >> 0x10U));
        __VdlyDim0__top__DOT__DRAM__DOT__mem__v2 = 
            (0x3ffU & (vlSelfRef.top__DOT__data_mem_addr 
                       >> 2U));
        __VdlySet__top__DOT__DRAM__DOT__mem__v2 = 1U;
    }
    if ((8U & (IData)(vlSelfRef.top__DOT__data_mem_we))) {
        __VdlyVal__top__DOT__DRAM__DOT__mem__v3 = (vlSelfRef.top__DOT__data_mem_in 
                                                   >> 0x18U);
        __VdlyDim0__top__DOT__DRAM__DOT__mem__v3 = 
            (0x3ffU & (vlSelfRef.top__DOT__data_mem_addr 
                       >> 2U));
        __VdlySet__top__DOT__DRAM__DOT__mem__v3 = 1U;
    }
    if ((1U & (IData)(vlSelfRef.top__DOT__ins_we))) {
        __VdlyVal__top__DOT__IRAM__DOT__mem__v0 = (0xffU 
                                                   & vlSelfRef.top__DOT__ins_in);
        __VdlyDim0__top__DOT__IRAM__DOT__mem__v0 = 
            (0x3ffU & (vlSelfRef.top__DOT__FU__DOT__PC 
                       >> 2U));
        __VdlySet__top__DOT__IRAM__DOT__mem__v0 = 1U;
    }
    if ((2U & (IData)(vlSelfRef.top__DOT__ins_we))) {
        __VdlyVal__top__DOT__IRAM__DOT__mem__v1 = (0xffU 
                                                   & (vlSelfRef.top__DOT__ins_in 
                                                      >> 8U));
        __VdlyDim0__top__DOT__IRAM__DOT__mem__v1 = 
            (0x3ffU & (vlSelfRef.top__DOT__FU__DOT__PC 
                       >> 2U));
        __VdlySet__top__DOT__IRAM__DOT__mem__v1 = 1U;
    }
    if ((4U & (IData)(vlSelfRef.top__DOT__ins_we))) {
        __VdlyVal__top__DOT__IRAM__DOT__mem__v2 = (0xffU 
                                                   & (vlSelfRef.top__DOT__ins_in 
                                                      >> 0x10U));
        __VdlyDim0__top__DOT__IRAM__DOT__mem__v2 = 
            (0x3ffU & (vlSelfRef.top__DOT__FU__DOT__PC 
                       >> 2U));
        __VdlySet__top__DOT__IRAM__DOT__mem__v2 = 1U;
    }
    if ((8U & (IData)(vlSelfRef.top__DOT__ins_we))) {
        __VdlyVal__top__DOT__IRAM__DOT__mem__v3 = (vlSelfRef.top__DOT__ins_in 
                                                   >> 0x18U);
        __VdlyDim0__top__DOT__IRAM__DOT__mem__v3 = 
            (0x3ffU & (vlSelfRef.top__DOT__FU__DOT__PC 
                       >> 2U));
        __VdlySet__top__DOT__IRAM__DOT__mem__v3 = 1U;
    }
    __Vdly__top__DOT__reg_file__DOT__mem_wait = 0U;
    if (vlSelfRef.top__DOT__reg_file__DOT__mem_wait) {
        __Vdly__top__DOT__reg_file__DOT__mem_wait = 0U;
        __VdlyVal__top__DOT__reg_file__DOT__regs__v0 
            = vlSelfRef.top__DOT__data_mem_out;
        __VdlyDim0__top__DOT__reg_file__DOT__regs__v0 
            = vlSelfRef.top__DOT__reg_file__DOT__tmp_reg_addr;
        __VdlySet__top__DOT__reg_file__DOT__regs__v0 = 1U;
    }
    if (vlSelfRef.top__DOT__reg_we) {
        __VdlyVal__top__DOT__reg_file__DOT__regs__v1 
            = vlSelfRef.top__DOT__rd_data;
        __VdlyDim0__top__DOT__reg_file__DOT__regs__v1 
            = (0x1fU & (vlSelfRef.top__DOT__ins_out 
                        >> 7U));
        __VdlySet__top__DOT__reg_file__DOT__regs__v1 = 1U;
    } else if (vlSelfRef.top__DOT__data_mem_reg_we) {
        __Vdly__top__DOT__reg_file__DOT__mem_wait = 1U;
    }
    if ((0x1000U <= vlSelfRef.top__DOT__data_mem_addr)) {
        vlSelfRef.top__DOT__tmpGPIO = vlSelfRef.top__DOT__data_mem_in;
    }
    vlSelfRef.top__DOT__ins_ready = ((1U & (~ (IData)(vlSelfRef.top__DOT__jump_en))) 
                                     && (1U & (~ (IData)(vlSelfRef.top__DOT__delay))));
    vlSelfRef.top__DOT__reg_file__DOT__mem_wait = __Vdly__top__DOT__reg_file__DOT__mem_wait;
    if (__VdlySet__top__DOT__reg_file__DOT__regs__v0) {
        vlSelfRef.top__DOT__reg_file__DOT__regs[__VdlyDim0__top__DOT__reg_file__DOT__regs__v0] 
            = __VdlyVal__top__DOT__reg_file__DOT__regs__v0;
    }
    if (__VdlySet__top__DOT__reg_file__DOT__regs__v1) {
        vlSelfRef.top__DOT__reg_file__DOT__regs[__VdlyDim0__top__DOT__reg_file__DOT__regs__v1] 
            = __VdlyVal__top__DOT__reg_file__DOT__regs__v1;
    }
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__reg_we)))) {
        if (vlSelfRef.top__DOT__data_mem_reg_we) {
            vlSelfRef.top__DOT__reg_file__DOT__tmp_reg_addr 
                = vlSelfRef.top__DOT__data_mem_reg_addr;
        }
    }
    vlSelfRef.top__DOT__data_mem_out = vlSelfRef.top__DOT__DRAM__DOT__mem
        [(0x3ffU & (vlSelfRef.top__DOT__data_mem_addr 
                    >> 2U))];
    vlSelfRef.top__DOT__ins_out = vlSelfRef.top__DOT__IRAM__DOT__mem
        [(0x3ffU & (vlSelfRef.top__DOT__FU__DOT__PC 
                    >> 2U))];
    vlSelfRef.GPIO = (0x3fU & vlSelfRef.top__DOT__tmpGPIO);
    if (__VdlySet__top__DOT__DRAM__DOT__mem__v0) {
        vlSelfRef.top__DOT__DRAM__DOT__mem[__VdlyDim0__top__DOT__DRAM__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.top__DOT__DRAM__DOT__mem
                [__VdlyDim0__top__DOT__DRAM__DOT__mem__v0]) 
               | (IData)(__VdlyVal__top__DOT__DRAM__DOT__mem__v0));
    }
    if (__VdlySet__top__DOT__DRAM__DOT__mem__v1) {
        vlSelfRef.top__DOT__DRAM__DOT__mem[__VdlyDim0__top__DOT__DRAM__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.top__DOT__DRAM__DOT__mem
                [__VdlyDim0__top__DOT__DRAM__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__top__DOT__DRAM__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__top__DOT__DRAM__DOT__mem__v2) {
        vlSelfRef.top__DOT__DRAM__DOT__mem[__VdlyDim0__top__DOT__DRAM__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.top__DOT__DRAM__DOT__mem
                [__VdlyDim0__top__DOT__DRAM__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__top__DOT__DRAM__DOT__mem__v2) 
                  << 0x10U));
    }
    if (__VdlySet__top__DOT__DRAM__DOT__mem__v3) {
        vlSelfRef.top__DOT__DRAM__DOT__mem[__VdlyDim0__top__DOT__DRAM__DOT__mem__v3] 
            = ((0xffffffU & vlSelfRef.top__DOT__DRAM__DOT__mem
                [__VdlyDim0__top__DOT__DRAM__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__top__DOT__DRAM__DOT__mem__v3) 
                  << 0x18U));
    }
    if (__VdlySet__top__DOT__IRAM__DOT__mem__v0) {
        vlSelfRef.top__DOT__IRAM__DOT__mem[__VdlyDim0__top__DOT__IRAM__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.top__DOT__IRAM__DOT__mem
                [__VdlyDim0__top__DOT__IRAM__DOT__mem__v0]) 
               | (IData)(__VdlyVal__top__DOT__IRAM__DOT__mem__v0));
    }
    if (__VdlySet__top__DOT__IRAM__DOT__mem__v1) {
        vlSelfRef.top__DOT__IRAM__DOT__mem[__VdlyDim0__top__DOT__IRAM__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.top__DOT__IRAM__DOT__mem
                [__VdlyDim0__top__DOT__IRAM__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__top__DOT__IRAM__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__top__DOT__IRAM__DOT__mem__v2) {
        vlSelfRef.top__DOT__IRAM__DOT__mem[__VdlyDim0__top__DOT__IRAM__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.top__DOT__IRAM__DOT__mem
                [__VdlyDim0__top__DOT__IRAM__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__top__DOT__IRAM__DOT__mem__v2) 
                  << 0x10U));
    }
    if (__VdlySet__top__DOT__IRAM__DOT__mem__v3) {
        vlSelfRef.top__DOT__IRAM__DOT__mem[__VdlyDim0__top__DOT__IRAM__DOT__mem__v3] 
            = ((0xffffffU & vlSelfRef.top__DOT__IRAM__DOT__mem
                [__VdlyDim0__top__DOT__IRAM__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__top__DOT__IRAM__DOT__mem__v3) 
                  << 0x18U));
    }
    vlSelfRef.top__DOT__FU__DOT__PC = __Vdly__top__DOT__FU__DOT__PC;
    vlSelfRef.top__DOT__rs1_data = ((0U == (0x1fU & 
                                            (vlSelfRef.top__DOT__ins_out 
                                             >> 0x14U)))
                                     ? 0U : vlSelfRef.top__DOT__reg_file__DOT__regs
                                    [(0x1fU & (vlSelfRef.top__DOT__ins_out 
                                               >> 0x14U))]);
    vlSelfRef.top__DOT__rs0_data = ((0U == (0x1fU & 
                                            (vlSelfRef.top__DOT__ins_out 
                                             >> 0xfU)))
                                     ? 0U : vlSelfRef.top__DOT__reg_file__DOT__regs
                                    [(0x1fU & (vlSelfRef.top__DOT__ins_out 
                                               >> 0xfU))]);
    vlSelfRef.top__DOT__immediate = 0U;
    if ((0x40U & vlSelfRef.top__DOT__ins_out)) {
        if ((0x20U & vlSelfRef.top__DOT__ins_out)) {
            vlSelfRef.top__DOT__exec_type = ((0x10U 
                                              & vlSelfRef.top__DOT__ins_out)
                                              ? 0x1fU
                                              : ((8U 
                                                  & vlSelfRef.top__DOT__ins_out)
                                                  ? 
                                                 ((4U 
                                                   & vlSelfRef.top__DOT__ins_out)
                                                   ? 
                                                  ((2U 
                                                    & vlSelfRef.top__DOT__ins_out)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.top__DOT__ins_out)
                                                     ? 0x1dU
                                                     : 0x1fU)
                                                    : 0x1fU)
                                                   : 0x1fU)
                                                  : 
                                                 ((4U 
                                                   & vlSelfRef.top__DOT__ins_out)
                                                   ? 
                                                  ((2U 
                                                    & vlSelfRef.top__DOT__ins_out)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.top__DOT__ins_out)
                                                     ? 0x1eU
                                                     : 0x1fU)
                                                    : 0x1fU)
                                                   : 
                                                  ((2U 
                                                    & vlSelfRef.top__DOT__ins_out)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.top__DOT__ins_out)
                                                     ? 
                                                    ((0x4000U 
                                                      & vlSelfRef.top__DOT__ins_out)
                                                      ? 
                                                     ((0x2000U 
                                                       & vlSelfRef.top__DOT__ins_out)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelfRef.top__DOT__ins_out)
                                                        ? 0x35U
                                                        : 0x23U)
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelfRef.top__DOT__ins_out)
                                                        ? 0x24U
                                                        : 0x22U))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelfRef.top__DOT__ins_out)
                                                       ? 0x1fU
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelfRef.top__DOT__ins_out)
                                                        ? 0x21U
                                                        : 0x20U)))
                                                     : 0x1fU)
                                                    : 0x1fU))));
            if ((1U & (~ (vlSelfRef.top__DOT__ins_out 
                          >> 4U)))) {
                if ((8U & vlSelfRef.top__DOT__ins_out)) {
                    if ((4U & vlSelfRef.top__DOT__ins_out)) {
                        if ((2U & vlSelfRef.top__DOT__ins_out)) {
                            if ((1U & vlSelfRef.top__DOT__ins_out)) {
                                vlSelfRef.top__DOT__immediate 
                                    = ((((- (IData)(
                                                    (vlSelfRef.top__DOT__ins_out 
                                                     >> 0x1fU))) 
                                         << 0x15U) 
                                        | (0x100000U 
                                           & (vlSelfRef.top__DOT__ins_out 
                                              >> 0xbU))) 
                                       | (((0xff000U 
                                            & vlSelfRef.top__DOT__ins_out) 
                                           | (0x800U 
                                              & (vlSelfRef.top__DOT__ins_out 
                                                 >> 9U))) 
                                          | (0x7feU 
                                             & (vlSelfRef.top__DOT__ins_out 
                                                >> 0x14U))));
                            }
                        }
                    }
                } else if ((4U & vlSelfRef.top__DOT__ins_out)) {
                    if ((2U & vlSelfRef.top__DOT__ins_out)) {
                        if ((1U & vlSelfRef.top__DOT__ins_out)) {
                            vlSelfRef.top__DOT__immediate 
                                = (((- (IData)((vlSelfRef.top__DOT__ins_out 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelfRef.top__DOT__ins_out 
                                                >> 0x14U));
                        }
                    }
                } else if ((2U & vlSelfRef.top__DOT__ins_out)) {
                    if ((1U & vlSelfRef.top__DOT__ins_out)) {
                        vlSelfRef.top__DOT__immediate 
                            = (((- (IData)((vlSelfRef.top__DOT__ins_out 
                                            >> 0x1fU))) 
                                << 0xdU) | (((0x1000U 
                                              & (vlSelfRef.top__DOT__ins_out 
                                                 >> 0x13U)) 
                                             | (0x800U 
                                                & (vlSelfRef.top__DOT__ins_out 
                                                   << 4U))) 
                                            | ((0x7e0U 
                                                & (vlSelfRef.top__DOT__ins_out 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelfRef.top__DOT__ins_out 
                                                     >> 7U)))));
                    }
                }
            }
        } else {
            vlSelfRef.top__DOT__exec_type = 0x1fU;
        }
    } else if ((0x20U & vlSelfRef.top__DOT__ins_out)) {
        if ((0x10U & vlSelfRef.top__DOT__ins_out)) {
            vlSelfRef.top__DOT__exec_type = ((8U & vlSelfRef.top__DOT__ins_out)
                                              ? 0x1fU
                                              : ((4U 
                                                  & vlSelfRef.top__DOT__ins_out)
                                                  ? 
                                                 ((2U 
                                                   & vlSelfRef.top__DOT__ins_out)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.top__DOT__ins_out)
                                                    ? 0x13U
                                                    : 0x1fU)
                                                   : 0x1fU)
                                                  : 
                                                 ((2U 
                                                   & vlSelfRef.top__DOT__ins_out)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.top__DOT__ins_out)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSelfRef.top__DOT__ins_out)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSelfRef.top__DOT__ins_out)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelfRef.top__DOT__ins_out)
                                                       ? 4U
                                                       : 5U)
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelfRef.top__DOT__ins_out)
                                                       ? 
                                                      ((0x20U 
                                                        == 
                                                        (vlSelfRef.top__DOT__ins_out 
                                                         >> 0x19U))
                                                        ? 9U
                                                        : 8U)
                                                       : 6U))
                                                     : 
                                                    ((0x2000U 
                                                      & vlSelfRef.top__DOT__ins_out)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelfRef.top__DOT__ins_out)
                                                       ? 3U
                                                       : 2U)
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelfRef.top__DOT__ins_out)
                                                       ? 7U
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (vlSelfRef.top__DOT__ins_out 
                                                         >> 0x19U))
                                                        ? 0U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (vlSelfRef.top__DOT__ins_out 
                                                          >> 0x19U))
                                                         ? 1U
                                                         : 0x1fU)))))
                                                    : 0x1fU)
                                                   : 0x1fU)));
            if ((1U & (~ (vlSelfRef.top__DOT__ins_out 
                          >> 3U)))) {
                if ((4U & vlSelfRef.top__DOT__ins_out)) {
                    if ((2U & vlSelfRef.top__DOT__ins_out)) {
                        if ((1U & vlSelfRef.top__DOT__ins_out)) {
                            vlSelfRef.top__DOT__immediate 
                                = vlSelfRef.top__DOT__ins_out;
                        }
                    }
                }
            }
        } else {
            vlSelfRef.top__DOT__exec_type = ((8U & vlSelfRef.top__DOT__ins_out)
                                              ? 0x1fU
                                              : ((4U 
                                                  & vlSelfRef.top__DOT__ins_out)
                                                  ? 0x1fU
                                                  : 
                                                 ((2U 
                                                   & vlSelfRef.top__DOT__ins_out)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.top__DOT__ins_out)
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.top__DOT__ins_out 
                                                         >> 0xcU)))
                                                     ? 0x15U
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.top__DOT__ins_out 
                                                          >> 0xcU)))
                                                      ? 0x16U
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelfRef.top__DOT__ins_out 
                                                           >> 0xcU)))
                                                       ? 0x17U
                                                       : 0x1fU)))
                                                    : 0x1fU)
                                                   : 0x1fU)));
            if ((1U & (~ (vlSelfRef.top__DOT__ins_out 
                          >> 3U)))) {
                if ((1U & (~ (vlSelfRef.top__DOT__ins_out 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.top__DOT__ins_out)) {
                        if ((1U & vlSelfRef.top__DOT__ins_out)) {
                            vlSelfRef.top__DOT__immediate 
                                = (((- (IData)((vlSelfRef.top__DOT__ins_out 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0xfe0U 
                                                 & (vlSelfRef.top__DOT__ins_out 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelfRef.top__DOT__ins_out 
                                                      >> 7U))));
                        }
                    }
                }
            }
        }
    } else if ((0x10U & vlSelfRef.top__DOT__ins_out)) {
        vlSelfRef.top__DOT__exec_type = ((8U & vlSelfRef.top__DOT__ins_out)
                                          ? 0x1fU : 
                                         ((4U & vlSelfRef.top__DOT__ins_out)
                                           ? ((2U & vlSelfRef.top__DOT__ins_out)
                                               ? ((1U 
                                                   & vlSelfRef.top__DOT__ins_out)
                                                   ? 0x14U
                                                   : 0x1fU)
                                               : 0x1fU)
                                           : ((2U & vlSelfRef.top__DOT__ins_out)
                                               ? ((1U 
                                                   & vlSelfRef.top__DOT__ins_out)
                                                   ? 
                                                  ((0x4000U 
                                                    & vlSelfRef.top__DOT__ins_out)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSelfRef.top__DOT__ins_out)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelfRef.top__DOT__ins_out)
                                                      ? 0xdU
                                                      : 0xeU)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelfRef.top__DOT__ins_out)
                                                      ? 
                                                     ((0x20U 
                                                       == 
                                                       (vlSelfRef.top__DOT__ins_out 
                                                        >> 0x19U))
                                                       ? 0x12U
                                                       : 0x11U)
                                                      : 0xfU))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelfRef.top__DOT__ins_out)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelfRef.top__DOT__ins_out)
                                                      ? 0xcU
                                                      : 0xbU)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelfRef.top__DOT__ins_out)
                                                      ? 0x10U
                                                      : 0xaU)))
                                                   : 0x1fU)
                                               : 0x1fU)));
        if ((1U & (~ (vlSelfRef.top__DOT__ins_out >> 3U)))) {
            if ((4U & vlSelfRef.top__DOT__ins_out)) {
                if ((2U & vlSelfRef.top__DOT__ins_out)) {
                    if ((1U & vlSelfRef.top__DOT__ins_out)) {
                        vlSelfRef.top__DOT__immediate 
                            = vlSelfRef.top__DOT__ins_out;
                    }
                }
            } else if ((2U & vlSelfRef.top__DOT__ins_out)) {
                if ((1U & vlSelfRef.top__DOT__ins_out)) {
                    vlSelfRef.top__DOT__immediate = 
                        (((- (IData)((vlSelfRef.top__DOT__ins_out 
                                      >> 0x1fU))) << 0xcU) 
                         | (vlSelfRef.top__DOT__ins_out 
                            >> 0x14U));
                }
            }
        }
    } else {
        vlSelfRef.top__DOT__exec_type = ((8U & vlSelfRef.top__DOT__ins_out)
                                          ? 0x1fU : 
                                         ((4U & vlSelfRef.top__DOT__ins_out)
                                           ? 0x1fU : 
                                          ((2U & vlSelfRef.top__DOT__ins_out)
                                            ? ((1U 
                                                & vlSelfRef.top__DOT__ins_out)
                                                ? (
                                                   (0x4000U 
                                                    & vlSelfRef.top__DOT__ins_out)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSelfRef.top__DOT__ins_out)
                                                     ? 0x1fU
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelfRef.top__DOT__ins_out)
                                                      ? 0x1cU
                                                      : 0x1bU))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelfRef.top__DOT__ins_out)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelfRef.top__DOT__ins_out)
                                                      ? 0x1fU
                                                      : 0x1aU)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelfRef.top__DOT__ins_out)
                                                      ? 0x19U
                                                      : 0x18U)))
                                                : 0x1fU)
                                            : 0x1fU)));
        if ((1U & (~ (vlSelfRef.top__DOT__ins_out >> 3U)))) {
            if ((1U & (~ (vlSelfRef.top__DOT__ins_out 
                          >> 2U)))) {
                if ((2U & vlSelfRef.top__DOT__ins_out)) {
                    if ((1U & vlSelfRef.top__DOT__ins_out)) {
                        vlSelfRef.top__DOT__immediate 
                            = vlSelfRef.top__DOT__ins_out;
                    }
                }
            }
        }
    }
    vlSelfRef.top__DOT__delay = 0U;
    vlSelfRef.top__DOT__data_mem_width = 0U;
    vlSelfRef.top__DOT__data_mem_reg_width = 0U;
    vlSelfRef.top__DOT__jump_en = 0U;
    vlSelfRef.top__DOT__data_mem_reg_we = 0U;
    vlSelfRef.top__DOT__reg_we = 0U;
    vlSelfRef.top__DOT__data_mem_sign = 0U;
    vlSelfRef.top__DOT__data_mem_reg_addr = 0U;
    vlSelfRef.top__DOT__EU__DOT__signed_addr_load = 
        (vlSelfRef.top__DOT__rs0_data + VL_EXTENDS_II(32,12, 
                                                      (vlSelfRef.top__DOT__immediate 
                                                       >> 0x14U)));
    vlSelfRef.top__DOT__EU__DOT__unsigned_addr_load 
        = (vlSelfRef.top__DOT__rs0_data + VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__immediate, 0x14U));
    vlSelfRef.top__DOT__EU__DOT__addr_store = (vlSelfRef.top__DOT__rs0_data 
                                               + VL_EXTENDS_II(32,12, 
                                                               (0xfffU 
                                                                & vlSelfRef.top__DOT__immediate)));
    vlSelfRef.top__DOT__EU__DOT__jump_addr_precalc 
        = ((vlSelfRef.top__DOT__FU__DOT__PC - (IData)(4U)) 
           + vlSelfRef.top__DOT__immediate);
    vlSelfRef.top__DOT__EU__DOT__target_addr = (vlSelfRef.top__DOT__immediate 
                                                + vlSelfRef.top__DOT__rs0_data);
    vlSelfRef.top__DOT__rd_data = 0U;
    vlSelfRef.top__DOT__data_mem_addr = 0U;
    vlSelfRef.top__DOT__jump_addr = 0U;
    vlSelfRef.top__DOT__data_mem_we = 0U;
    vlSelfRef.top__DOT__data_mem_in = 0U;
    if (vlSelfRef.top__DOT__ins_ready) {
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__exec_type) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                if ((8U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                    if ((4U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__exec_type) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.top__DOT__exec_type)))) {
                                vlSelfRef.top__DOT__delay = 1U;
                                vlSelfRef.top__DOT__data_mem_width = 1U;
                                vlSelfRef.top__DOT__data_mem_reg_width = 1U;
                                vlSelfRef.top__DOT__data_mem_sign = 0U;
                                vlSelfRef.top__DOT__data_mem_reg_addr 
                                    = (0x1fU & (vlSelfRef.top__DOT__ins_out 
                                                >> 7U));
                                vlSelfRef.top__DOT__data_mem_addr 
                                    = vlSelfRef.top__DOT__EU__DOT__unsigned_addr_load;
                            }
                        }
                        if ((2U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                            if ((1U & (~ (IData)(vlSelfRef.top__DOT__exec_type)))) {
                                vlSelfRef.top__DOT__rd_data 
                                    = vlSelfRef.top__DOT__FU__DOT__PC;
                            }
                        } else if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                            vlSelfRef.top__DOT__rd_data 
                                = vlSelfRef.top__DOT__FU__DOT__PC;
                        }
                    } else {
                        vlSelfRef.top__DOT__delay = 1U;
                        if ((2U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                                vlSelfRef.top__DOT__data_mem_width = 0U;
                                vlSelfRef.top__DOT__data_mem_reg_width = 0U;
                                vlSelfRef.top__DOT__data_mem_reg_addr 
                                    = (0x1fU & (vlSelfRef.top__DOT__ins_out 
                                                >> 7U));
                                vlSelfRef.top__DOT__data_mem_addr 
                                    = vlSelfRef.top__DOT__EU__DOT__unsigned_addr_load;
                            } else {
                                vlSelfRef.top__DOT__data_mem_width = 3U;
                                vlSelfRef.top__DOT__data_mem_reg_width = 3U;
                                vlSelfRef.top__DOT__data_mem_reg_addr 
                                    = (0x1fU & (vlSelfRef.top__DOT__ins_out 
                                                >> 7U));
                                vlSelfRef.top__DOT__data_mem_addr 
                                    = vlSelfRef.top__DOT__EU__DOT__signed_addr_load;
                            }
                        } else {
                            if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                                vlSelfRef.top__DOT__data_mem_width = 1U;
                                vlSelfRef.top__DOT__data_mem_reg_width = 1U;
                                vlSelfRef.top__DOT__data_mem_reg_addr 
                                    = (0x1fU & (vlSelfRef.top__DOT__ins_out 
                                                >> 7U));
                            } else {
                                vlSelfRef.top__DOT__data_mem_width = 0U;
                                vlSelfRef.top__DOT__data_mem_reg_width = 0U;
                                vlSelfRef.top__DOT__data_mem_reg_addr 
                                    = (0x1fU & (vlSelfRef.top__DOT__ins_out 
                                                >> 7U));
                            }
                            vlSelfRef.top__DOT__data_mem_addr 
                                = vlSelfRef.top__DOT__EU__DOT__signed_addr_load;
                        }
                        vlSelfRef.top__DOT__data_mem_sign 
                            = (1U & (~ ((IData)(vlSelfRef.top__DOT__exec_type) 
                                        >> 1U)));
                    }
                } else if ((4U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                            vlSelfRef.top__DOT__data_mem_width = 3U;
                            vlSelfRef.top__DOT__data_mem_reg_width = 3U;
                        } else {
                            vlSelfRef.top__DOT__data_mem_width = 1U;
                            vlSelfRef.top__DOT__data_mem_reg_width = 1U;
                        }
                        vlSelfRef.top__DOT__data_mem_sign = 0U;
                        vlSelfRef.top__DOT__data_mem_addr 
                            = vlSelfRef.top__DOT__EU__DOT__addr_store;
                    } else if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                        vlSelfRef.top__DOT__data_mem_width = 0U;
                        vlSelfRef.top__DOT__data_mem_reg_width = 0U;
                        vlSelfRef.top__DOT__data_mem_sign = 0U;
                        vlSelfRef.top__DOT__data_mem_addr 
                            = vlSelfRef.top__DOT__EU__DOT__addr_store;
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__exec_type) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.top__DOT__exec_type)))) {
                            vlSelfRef.top__DOT__rd_data 
                                = ((vlSelfRef.top__DOT__FU__DOT__PC 
                                    - (IData)(4U)) 
                                   + (0xfffff000U & vlSelfRef.top__DOT__immediate));
                        }
                    }
                } else {
                    vlSelfRef.top__DOT__rd_data = (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top__DOT__exec_type))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__exec_type))
                                                     ? 
                                                    (0xfffff000U 
                                                     & vlSelfRef.top__DOT__immediate)
                                                     : 
                                                    VL_SHIFTRS_III(32,32,5, vlSelfRef.top__DOT__rs0_data, 
                                                                   (0x1fU 
                                                                    & vlSelfRef.top__DOT__immediate)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__exec_type))
                                                     ? 
                                                    (vlSelfRef.top__DOT__rs0_data 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelfRef.top__DOT__immediate))
                                                     : 
                                                    (vlSelfRef.top__DOT__rs0_data 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelfRef.top__DOT__immediate))));
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__exec_type) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                        if ((2U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                                vlSelfRef.top__DOT__data_mem_in 
                                    = vlSelfRef.top__DOT__rs1_data;
                            } else if ((2U & vlSelfRef.top__DOT__EU__DOT__target_addr)) {
                                if ((2U & vlSelfRef.top__DOT__EU__DOT__target_addr)) {
                                    vlSelfRef.top__DOT__data_mem_in 
                                        = (vlSelfRef.top__DOT__rs1_data 
                                           << 0x10U);
                                }
                            } else {
                                vlSelfRef.top__DOT__data_mem_in 
                                    = (0xffffU & vlSelfRef.top__DOT__rs1_data);
                            }
                        } else if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                            vlSelfRef.top__DOT__data_mem_in 
                                = ((2U & vlSelfRef.top__DOT__EU__DOT__target_addr)
                                    ? ((1U & vlSelfRef.top__DOT__EU__DOT__target_addr)
                                        ? (vlSelfRef.top__DOT__rs1_data 
                                           << 0x18U)
                                        : (0xff0000U 
                                           & (vlSelfRef.top__DOT__rs1_data 
                                              << 0x10U)))
                                    : ((1U & vlSelfRef.top__DOT__EU__DOT__target_addr)
                                        ? (0xff00U 
                                           & (vlSelfRef.top__DOT__rs1_data 
                                              << 8U))
                                        : (0xffU & vlSelfRef.top__DOT__rs1_data)));
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                    vlSelfRef.top__DOT__rd_data = (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top__DOT__exec_type))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__exec_type))
                                                     ? 
                                                    (vlSelfRef.top__DOT__rs0_data 
                                                     ^ vlSelfRef.top__DOT__immediate)
                                                     : 
                                                    (vlSelfRef.top__DOT__rs0_data 
                                                     | vlSelfRef.top__DOT__immediate))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__exec_type))
                                                     ? 
                                                    (vlSelfRef.top__DOT__rs0_data 
                                                     & vlSelfRef.top__DOT__immediate)
                                                     : 
                                                    ((vlSelfRef.top__DOT__rs0_data 
                                                      < vlSelfRef.top__DOT__immediate)
                                                      ? 1U
                                                      : 0U)));
                } else if ((2U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                    vlSelfRef.top__DOT__rd_data = (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top__DOT__exec_type))
                                                    ? 
                                                   (VL_LTS_III(32, vlSelfRef.top__DOT__rs0_data, vlSelfRef.top__DOT__immediate)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (vlSelfRef.top__DOT__rs0_data 
                                                    + 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.top__DOT__immediate 
                                                                     >> 0xbU)))) 
                                                      << 0xcU) 
                                                     | (0xfffU 
                                                        & vlSelfRef.top__DOT__immediate))));
                } else if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                    vlSelfRef.__Vfunc_shift_op__0__shamt 
                        = (0x1fU & vlSelfRef.top__DOT__rs1_data);
                    vlSelfRef.__Vfunc_shift_op__0__val 
                        = vlSelfRef.top__DOT__rs0_data;
                    vlSelfRef.__Vfunc_shift_op__0__sign 
                        = (vlSelfRef.__Vfunc_shift_op__0__val 
                           >> 0x1fU);
                    vlSelfRef.__Vfunc_shift_op__0__s 
                        = vlSelfRef.__Vfunc_shift_op__0__val;
                    if ((1U & (IData)(vlSelfRef.__Vfunc_shift_op__0__shamt))) {
                        vlSelfRef.__Vfunc_shift_op__0__s 
                            = (((IData)(vlSelfRef.__Vfunc_shift_op__0__sign) 
                                << 0x1fU) | (vlSelfRef.__Vfunc_shift_op__0__s 
                                             >> 1U));
                    }
                    if ((2U & (IData)(vlSelfRef.__Vfunc_shift_op__0__shamt))) {
                        vlSelfRef.__Vfunc_shift_op__0__s 
                            = (((- (IData)((IData)(vlSelfRef.__Vfunc_shift_op__0__sign))) 
                                << 0x1eU) | (vlSelfRef.__Vfunc_shift_op__0__s 
                                             >> 2U));
                    }
                    if ((4U & (IData)(vlSelfRef.__Vfunc_shift_op__0__shamt))) {
                        vlSelfRef.__Vfunc_shift_op__0__s 
                            = (((- (IData)((IData)(vlSelfRef.__Vfunc_shift_op__0__sign))) 
                                << 0x1cU) | (vlSelfRef.__Vfunc_shift_op__0__s 
                                             >> 4U));
                    }
                    if ((8U & (IData)(vlSelfRef.__Vfunc_shift_op__0__shamt))) {
                        vlSelfRef.__Vfunc_shift_op__0__s 
                            = (((- (IData)((IData)(vlSelfRef.__Vfunc_shift_op__0__sign))) 
                                << 0x18U) | (vlSelfRef.__Vfunc_shift_op__0__s 
                                             >> 8U));
                    }
                    if ((0x10U & (IData)(vlSelfRef.__Vfunc_shift_op__0__shamt))) {
                        vlSelfRef.__Vfunc_shift_op__0__s 
                            = (((- (IData)((IData)(vlSelfRef.__Vfunc_shift_op__0__sign))) 
                                << 0x10U) | (vlSelfRef.__Vfunc_shift_op__0__s 
                                             >> 0x10U));
                    }
                    vlSelfRef.__Vfunc_shift_op__0__Vfuncout 
                        = vlSelfRef.__Vfunc_shift_op__0__s;
                    vlSelfRef.top__DOT__rd_data = vlSelfRef.__Vfunc_shift_op__0__Vfuncout;
                } else {
                    vlSelfRef.__Vfunc_shift_op__1__shamt 
                        = (0x1fU & vlSelfRef.top__DOT__rs1_data);
                    vlSelfRef.__Vfunc_shift_op__1__val 
                        = vlSelfRef.top__DOT__rs0_data;
                    vlSelfRef.__Vfunc_shift_op__1__sign = 0U;
                    vlSelfRef.__Vfunc_shift_op__1__s 
                        = vlSelfRef.__Vfunc_shift_op__1__val;
                    if ((1U & (IData)(vlSelfRef.__Vfunc_shift_op__1__shamt))) {
                        vlSelfRef.__Vfunc_shift_op__1__s 
                            = (((IData)(vlSelfRef.__Vfunc_shift_op__1__sign) 
                                << 0x1fU) | (vlSelfRef.__Vfunc_shift_op__1__s 
                                             >> 1U));
                    }
                    if ((2U & (IData)(vlSelfRef.__Vfunc_shift_op__1__shamt))) {
                        vlSelfRef.__Vfunc_shift_op__1__s 
                            = (((- (IData)((IData)(vlSelfRef.__Vfunc_shift_op__1__sign))) 
                                << 0x1eU) | (vlSelfRef.__Vfunc_shift_op__1__s 
                                             >> 2U));
                    }
                    if ((4U & (IData)(vlSelfRef.__Vfunc_shift_op__1__shamt))) {
                        vlSelfRef.__Vfunc_shift_op__1__s 
                            = (((- (IData)((IData)(vlSelfRef.__Vfunc_shift_op__1__sign))) 
                                << 0x1cU) | (vlSelfRef.__Vfunc_shift_op__1__s 
                                             >> 4U));
                    }
                    if ((8U & (IData)(vlSelfRef.__Vfunc_shift_op__1__shamt))) {
                        vlSelfRef.__Vfunc_shift_op__1__s 
                            = (((- (IData)((IData)(vlSelfRef.__Vfunc_shift_op__1__sign))) 
                                << 0x18U) | (vlSelfRef.__Vfunc_shift_op__1__s 
                                             >> 8U));
                    }
                    if ((0x10U & (IData)(vlSelfRef.__Vfunc_shift_op__1__shamt))) {
                        vlSelfRef.__Vfunc_shift_op__1__s 
                            = (((- (IData)((IData)(vlSelfRef.__Vfunc_shift_op__1__sign))) 
                                << 0x10U) | (vlSelfRef.__Vfunc_shift_op__1__s 
                                             >> 0x10U));
                    }
                    vlSelfRef.__Vfunc_shift_op__1__Vfuncout 
                        = vlSelfRef.__Vfunc_shift_op__1__s;
                    vlSelfRef.top__DOT__rd_data = vlSelfRef.__Vfunc_shift_op__1__Vfuncout;
                }
            } else if ((4U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                        vlSelfRef.__Vfunc_shift_op__2__shamt 
                            = (0x1fU & vlSelfRef.top__DOT__rs1_data);
                        vlSelfRef.__Vfunc_shift_op__2__val 
                            = vlSelfRef.top__DOT__rs0_data;
                        vlSelfRef.__Vfunc_shift_op__2__sign = 0U;
                        vlSelfRef.__Vfunc_shift_op__2__s 
                            = vlSelfRef.__Vfunc_shift_op__2__val;
                        __Vtemp_11 = ((((((vlSelfRef.__Vfunc_shift_op__2__s 
                                           << 0x1fU) 
                                          | (0x40000000U 
                                             & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                << 0x1dU))) 
                                         | ((0x20000000U 
                                             & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                << 0x1bU)) 
                                            | (0x10000000U 
                                               & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                  << 0x19U)))) 
                                        | (((0x8000000U 
                                             & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                << 0x17U)) 
                                            | (0x4000000U 
                                               & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                  << 0x15U))) 
                                           | ((0x2000000U 
                                               & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                  << 0x13U)) 
                                              | (0x1000000U 
                                                 & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                    << 0x11U))))) 
                                       | ((((0x800000U 
                                             & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                << 0xfU)) 
                                            | (0x400000U 
                                               & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                  << 0xdU))) 
                                           | ((0x200000U 
                                               & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                  << 0xbU)) 
                                              | (0x100000U 
                                                 & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                    << 9U)))) 
                                          | (((0x80000U 
                                               & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                  << 7U)) 
                                              | (0x40000U 
                                                 & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                    << 5U))) 
                                             | ((0x20000U 
                                                 & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                    << 3U)) 
                                                | (0x10000U 
                                                   & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                      << 1U)))))) 
                                      | (((((0x8000U 
                                             & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                >> 1U)) 
                                            | (0x4000U 
                                               & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                  >> 3U))) 
                                           | ((0x2000U 
                                               & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                  >> 5U)) 
                                              | (0x1000U 
                                                 & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                    >> 7U)))) 
                                          | (((0x800U 
                                               & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                  >> 9U)) 
                                              | (0x400U 
                                                 & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                    >> 0xbU))) 
                                             | ((0x200U 
                                                 & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                    >> 0xdU)) 
                                                | (0x100U 
                                                   & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                      >> 0xfU))))) 
                                         | ((((0x80U 
                                               & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                  >> 0x11U)) 
                                              | (0x40U 
                                                 & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                    >> 0x13U))) 
                                             | ((0x20U 
                                                 & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                    >> 0x15U)) 
                                                | (0x10U 
                                                   & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                      >> 0x17U)))) 
                                            | (((8U 
                                                 & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                    >> 0x19U)) 
                                                | (4U 
                                                   & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                      >> 0x1bU))) 
                                               | ((2U 
                                                   & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                      >> 0x1dU)) 
                                                  | (vlSelfRef.__Vfunc_shift_op__2__s 
                                                     >> 0x1fU))))));
                        vlSelfRef.__Vfunc_shift_op__2__s 
                            = __Vtemp_11;
                        if ((1U & (IData)(vlSelfRef.__Vfunc_shift_op__2__shamt))) {
                            vlSelfRef.__Vfunc_shift_op__2__s 
                                = (((IData)(vlSelfRef.__Vfunc_shift_op__2__sign) 
                                    << 0x1fU) | (vlSelfRef.__Vfunc_shift_op__2__s 
                                                 >> 1U));
                        }
                        if ((2U & (IData)(vlSelfRef.__Vfunc_shift_op__2__shamt))) {
                            vlSelfRef.__Vfunc_shift_op__2__s 
                                = (((- (IData)((IData)(vlSelfRef.__Vfunc_shift_op__2__sign))) 
                                    << 0x1eU) | (vlSelfRef.__Vfunc_shift_op__2__s 
                                                 >> 2U));
                        }
                        if ((4U & (IData)(vlSelfRef.__Vfunc_shift_op__2__shamt))) {
                            vlSelfRef.__Vfunc_shift_op__2__s 
                                = (((- (IData)((IData)(vlSelfRef.__Vfunc_shift_op__2__sign))) 
                                    << 0x1cU) | (vlSelfRef.__Vfunc_shift_op__2__s 
                                                 >> 4U));
                        }
                        if ((8U & (IData)(vlSelfRef.__Vfunc_shift_op__2__shamt))) {
                            vlSelfRef.__Vfunc_shift_op__2__s 
                                = (((- (IData)((IData)(vlSelfRef.__Vfunc_shift_op__2__sign))) 
                                    << 0x18U) | (vlSelfRef.__Vfunc_shift_op__2__s 
                                                 >> 8U));
                        }
                        if ((0x10U & (IData)(vlSelfRef.__Vfunc_shift_op__2__shamt))) {
                            vlSelfRef.__Vfunc_shift_op__2__s 
                                = (((- (IData)((IData)(vlSelfRef.__Vfunc_shift_op__2__sign))) 
                                    << 0x10U) | (vlSelfRef.__Vfunc_shift_op__2__s 
                                                 >> 0x10U));
                        }
                        __Vtemp_17 = ((((((vlSelfRef.__Vfunc_shift_op__2__s 
                                           << 0x1fU) 
                                          | (0x40000000U 
                                             & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                << 0x1dU))) 
                                         | ((0x20000000U 
                                             & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                << 0x1bU)) 
                                            | (0x10000000U 
                                               & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                  << 0x19U)))) 
                                        | (((0x8000000U 
                                             & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                << 0x17U)) 
                                            | (0x4000000U 
                                               & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                  << 0x15U))) 
                                           | ((0x2000000U 
                                               & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                  << 0x13U)) 
                                              | (0x1000000U 
                                                 & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                    << 0x11U))))) 
                                       | ((((0x800000U 
                                             & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                << 0xfU)) 
                                            | (0x400000U 
                                               & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                  << 0xdU))) 
                                           | ((0x200000U 
                                               & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                  << 0xbU)) 
                                              | (0x100000U 
                                                 & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                    << 9U)))) 
                                          | (((0x80000U 
                                               & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                  << 7U)) 
                                              | (0x40000U 
                                                 & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                    << 5U))) 
                                             | ((0x20000U 
                                                 & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                    << 3U)) 
                                                | (0x10000U 
                                                   & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                      << 1U)))))) 
                                      | (((((0x8000U 
                                             & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                >> 1U)) 
                                            | (0x4000U 
                                               & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                  >> 3U))) 
                                           | ((0x2000U 
                                               & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                  >> 5U)) 
                                              | (0x1000U 
                                                 & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                    >> 7U)))) 
                                          | (((0x800U 
                                               & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                  >> 9U)) 
                                              | (0x400U 
                                                 & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                    >> 0xbU))) 
                                             | ((0x200U 
                                                 & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                    >> 0xdU)) 
                                                | (0x100U 
                                                   & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                      >> 0xfU))))) 
                                         | ((((0x80U 
                                               & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                  >> 0x11U)) 
                                              | (0x40U 
                                                 & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                    >> 0x13U))) 
                                             | ((0x20U 
                                                 & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                    >> 0x15U)) 
                                                | (0x10U 
                                                   & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                      >> 0x17U)))) 
                                            | (((8U 
                                                 & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                    >> 0x19U)) 
                                                | (4U 
                                                   & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                      >> 0x1bU))) 
                                               | ((2U 
                                                   & (vlSelfRef.__Vfunc_shift_op__2__s 
                                                      >> 0x1dU)) 
                                                  | (vlSelfRef.__Vfunc_shift_op__2__s 
                                                     >> 0x1fU))))));
                        vlSelfRef.__Vfunc_shift_op__2__s 
                            = __Vtemp_17;
                        vlSelfRef.__Vfunc_shift_op__2__Vfuncout 
                            = vlSelfRef.__Vfunc_shift_op__2__s;
                        vlSelfRef.top__DOT__rd_data 
                            = vlSelfRef.__Vfunc_shift_op__2__Vfuncout;
                    } else {
                        vlSelfRef.top__DOT__rd_data 
                            = (vlSelfRef.top__DOT__rs0_data 
                               ^ vlSelfRef.top__DOT__rs1_data);
                    }
                } else {
                    vlSelfRef.top__DOT__rd_data = (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top__DOT__exec_type))
                                                    ? 
                                                   (vlSelfRef.top__DOT__rs0_data 
                                                    | vlSelfRef.top__DOT__rs1_data)
                                                    : 
                                                   (vlSelfRef.top__DOT__rs0_data 
                                                    & vlSelfRef.top__DOT__rs1_data));
                }
            } else {
                vlSelfRef.top__DOT__rd_data = ((2U 
                                                & (IData)(vlSelfRef.top__DOT__exec_type))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top__DOT__exec_type))
                                                    ? 
                                                   ((vlSelfRef.top__DOT__rs0_data 
                                                     < vlSelfRef.top__DOT__rs1_data)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (VL_LTS_III(32, vlSelfRef.top__DOT__rs0_data, vlSelfRef.top__DOT__rs1_data)
                                                     ? 1U
                                                     : 0U))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top__DOT__exec_type))
                                                    ? 
                                                   (vlSelfRef.top__DOT__rs0_data 
                                                    - vlSelfRef.top__DOT__rs1_data)
                                                    : 
                                                   (vlSelfRef.top__DOT__rs0_data 
                                                    + vlSelfRef.top__DOT__rs1_data)));
            }
        }
        if ((0x20U & (IData)(vlSelfRef.top__DOT__exec_type))) {
            if ((0x10U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__exec_type) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__exec_type) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                                vlSelfRef.top__DOT__jump_en = 1U;
                                vlSelfRef.top__DOT__jump_addr 
                                    = ((vlSelfRef.top__DOT__rs0_data 
                                        >= vlSelfRef.top__DOT__rs1_data)
                                        ? vlSelfRef.top__DOT__EU__DOT__jump_addr_precalc
                                        : vlSelfRef.top__DOT__FU__DOT__PC);
                            }
                        }
                    }
                }
                if ((8U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                    vlSelfRef.top__DOT__data_mem_reg_we = 0U;
                    vlSelfRef.top__DOT__reg_we = 0U;
                    vlSelfRef.top__DOT__data_mem_we = 0U;
                } else if ((4U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                        vlSelfRef.top__DOT__data_mem_reg_we = 0U;
                        vlSelfRef.top__DOT__reg_we = 0U;
                        vlSelfRef.top__DOT__data_mem_we = 0U;
                    } else if ((1U & (~ (IData)(vlSelfRef.top__DOT__exec_type)))) {
                        vlSelfRef.top__DOT__data_mem_reg_we = 0U;
                        vlSelfRef.top__DOT__reg_we = 0U;
                        vlSelfRef.top__DOT__data_mem_we = 0U;
                    }
                } else {
                    vlSelfRef.top__DOT__data_mem_reg_we = 0U;
                    vlSelfRef.top__DOT__reg_we = 0U;
                    vlSelfRef.top__DOT__data_mem_we = 0U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__exec_type) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__exec_type) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.top__DOT__exec_type)))) {
                                vlSelfRef.top__DOT__jump_en = 1U;
                                vlSelfRef.top__DOT__jump_addr 
                                    = (VL_GTES_III(32, vlSelfRef.top__DOT__rs0_data, vlSelfRef.top__DOT__rs1_data)
                                        ? vlSelfRef.top__DOT__EU__DOT__jump_addr_precalc
                                        : vlSelfRef.top__DOT__FU__DOT__PC);
                            }
                        }
                    } else {
                        vlSelfRef.top__DOT__jump_en = 1U;
                        vlSelfRef.top__DOT__jump_addr 
                            = ((2U & (IData)(vlSelfRef.top__DOT__exec_type))
                                ? ((1U & (IData)(vlSelfRef.top__DOT__exec_type))
                                    ? ((vlSelfRef.top__DOT__rs0_data 
                                        < vlSelfRef.top__DOT__rs1_data)
                                        ? vlSelfRef.top__DOT__EU__DOT__jump_addr_precalc
                                        : vlSelfRef.top__DOT__FU__DOT__PC)
                                    : (VL_LTS_III(32, vlSelfRef.top__DOT__rs0_data, vlSelfRef.top__DOT__rs1_data)
                                        ? vlSelfRef.top__DOT__EU__DOT__jump_addr_precalc
                                        : vlSelfRef.top__DOT__FU__DOT__PC))
                                : ((1U & (IData)(vlSelfRef.top__DOT__exec_type))
                                    ? ((vlSelfRef.top__DOT__rs0_data 
                                        != vlSelfRef.top__DOT__rs1_data)
                                        ? vlSelfRef.top__DOT__EU__DOT__jump_addr_precalc
                                        : vlSelfRef.top__DOT__FU__DOT__PC)
                                    : ((vlSelfRef.top__DOT__rs0_data 
                                        == vlSelfRef.top__DOT__rs1_data)
                                        ? vlSelfRef.top__DOT__EU__DOT__jump_addr_precalc
                                        : vlSelfRef.top__DOT__FU__DOT__PC)));
                    }
                }
                if ((8U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                    vlSelfRef.top__DOT__data_mem_reg_we = 0U;
                    vlSelfRef.top__DOT__reg_we = 0U;
                    vlSelfRef.top__DOT__data_mem_we = 0U;
                } else if ((4U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                        vlSelfRef.top__DOT__data_mem_reg_we = 0U;
                        vlSelfRef.top__DOT__reg_we = 0U;
                        vlSelfRef.top__DOT__data_mem_we = 0U;
                    } else if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                        vlSelfRef.top__DOT__data_mem_reg_we = 0U;
                        vlSelfRef.top__DOT__reg_we = 0U;
                        vlSelfRef.top__DOT__data_mem_we = 0U;
                    }
                }
            }
        } else if ((0x10U & (IData)(vlSelfRef.top__DOT__exec_type))) {
            if ((8U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                        if ((1U & (~ (IData)(vlSelfRef.top__DOT__exec_type)))) {
                            vlSelfRef.top__DOT__jump_en = 1U;
                            vlSelfRef.top__DOT__jump_addr 
                                = (vlSelfRef.top__DOT__rs0_data 
                                   + vlSelfRef.top__DOT__immediate);
                        }
                        if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                            vlSelfRef.top__DOT__data_mem_reg_we = 0U;
                            vlSelfRef.top__DOT__data_mem_we = 0U;
                        }
                        vlSelfRef.top__DOT__reg_we 
                            = (1U & (~ (IData)(vlSelfRef.top__DOT__exec_type)));
                    } else {
                        if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                            vlSelfRef.top__DOT__jump_en = 1U;
                            vlSelfRef.top__DOT__reg_we = 1U;
                            vlSelfRef.top__DOT__jump_addr 
                                = vlSelfRef.top__DOT__EU__DOT__jump_addr_precalc;
                        }
                        if ((1U & (~ (IData)(vlSelfRef.top__DOT__exec_type)))) {
                            vlSelfRef.top__DOT__data_mem_reg_we = 1U;
                        }
                    }
                } else {
                    vlSelfRef.top__DOT__data_mem_reg_we = 1U;
                }
            } else if ((4U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                    vlSelfRef.top__DOT__data_mem_reg_we = 0U;
                    if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                        vlSelfRef.top__DOT__data_mem_we = 0xfU;
                    } else if ((2U & vlSelfRef.top__DOT__EU__DOT__target_addr)) {
                        if ((2U & vlSelfRef.top__DOT__EU__DOT__target_addr)) {
                            vlSelfRef.top__DOT__data_mem_we = 0xcU;
                        }
                    } else {
                        vlSelfRef.top__DOT__data_mem_we = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                    vlSelfRef.top__DOT__data_mem_reg_we = 0U;
                    vlSelfRef.top__DOT__data_mem_we 
                        = ((2U & vlSelfRef.top__DOT__EU__DOT__target_addr)
                            ? ((1U & vlSelfRef.top__DOT__EU__DOT__target_addr)
                                ? 8U : 4U) : ((1U & vlSelfRef.top__DOT__EU__DOT__target_addr)
                                               ? 2U
                                               : 1U));
                }
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__exec_type) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.top__DOT__exec_type)))) {
                        vlSelfRef.top__DOT__reg_we = 1U;
                    }
                }
            } else {
                vlSelfRef.top__DOT__reg_we = 1U;
            }
        } else {
            vlSelfRef.top__DOT__reg_we = 1U;
        }
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
