// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    Vtop___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(true, 32, 33, 0, std::string{"mem.hex"}
                 ,  &(vlSelfRef.top__DOT__IRAM__DOT__mem)
                 , 0, ~0ULL);
    vlSelfRef.top__DOT__FU__DOT__PC = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("top.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_11;
    IData/*31:0*/ __Vtemp_17;
    // Body
    vlSelfRef.GPIO = (0x3fU & vlSelfRef.top__DOT__tmpGPIO);
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
    vlSelfRef.top__DOT__data_mem_reg_width = 0U;
    vlSelfRef.top__DOT__data_mem_reg_we = 0U;
    vlSelfRef.top__DOT__reg_we = 0U;
    vlSelfRef.top__DOT__jump_en = 0U;
    vlSelfRef.top__DOT__data_mem_reg_addr = 0U;
    vlSelfRef.top__DOT__data_mem_width = 0U;
    vlSelfRef.top__DOT__data_mem_sign = 0U;
    vlSelfRef.top__DOT__EU__DOT__jump_addr_precalc 
        = ((vlSelfRef.top__DOT__FU__DOT__PC - (IData)(4U)) 
           + vlSelfRef.top__DOT__immediate);
    vlSelfRef.top__DOT__EU__DOT__target_addr = (vlSelfRef.top__DOT__immediate 
                                                + vlSelfRef.top__DOT__rs0_data);
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
    vlSelfRef.top__DOT__rd_data = 0U;
    vlSelfRef.top__DOT__jump_addr = 0U;
    vlSelfRef.top__DOT__data_mem_we = 0U;
    vlSelfRef.top__DOT__data_mem_in = 0U;
    vlSelfRef.top__DOT__data_mem_addr = 0U;
    if (vlSelfRef.top__DOT__ins_ready) {
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__exec_type) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                if ((8U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                    if ((4U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__exec_type) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.top__DOT__exec_type)))) {
                                vlSelfRef.top__DOT__data_mem_reg_width = 1U;
                                vlSelfRef.top__DOT__data_mem_reg_addr 
                                    = (0x1fU & (vlSelfRef.top__DOT__ins_out 
                                                >> 7U));
                                vlSelfRef.top__DOT__data_mem_width = 1U;
                                vlSelfRef.top__DOT__data_mem_sign = 0U;
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
                        if ((2U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                                vlSelfRef.top__DOT__data_mem_reg_width = 0U;
                                vlSelfRef.top__DOT__data_mem_reg_addr 
                                    = (0x1fU & (vlSelfRef.top__DOT__ins_out 
                                                >> 7U));
                                vlSelfRef.top__DOT__data_mem_width = 0U;
                                vlSelfRef.top__DOT__data_mem_addr 
                                    = vlSelfRef.top__DOT__EU__DOT__unsigned_addr_load;
                            } else {
                                vlSelfRef.top__DOT__data_mem_reg_width = 3U;
                                vlSelfRef.top__DOT__data_mem_reg_addr 
                                    = (0x1fU & (vlSelfRef.top__DOT__ins_out 
                                                >> 7U));
                                vlSelfRef.top__DOT__data_mem_width = 3U;
                                vlSelfRef.top__DOT__data_mem_addr 
                                    = vlSelfRef.top__DOT__EU__DOT__signed_addr_load;
                            }
                        } else {
                            if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                                vlSelfRef.top__DOT__data_mem_reg_width = 1U;
                                vlSelfRef.top__DOT__data_mem_reg_addr 
                                    = (0x1fU & (vlSelfRef.top__DOT__ins_out 
                                                >> 7U));
                                vlSelfRef.top__DOT__data_mem_width = 1U;
                            } else {
                                vlSelfRef.top__DOT__data_mem_reg_width = 0U;
                                vlSelfRef.top__DOT__data_mem_reg_addr 
                                    = (0x1fU & (vlSelfRef.top__DOT__ins_out 
                                                >> 7U));
                                vlSelfRef.top__DOT__data_mem_width = 0U;
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
                            vlSelfRef.top__DOT__data_mem_reg_width = 3U;
                            vlSelfRef.top__DOT__data_mem_width = 3U;
                        } else {
                            vlSelfRef.top__DOT__data_mem_reg_width = 1U;
                            vlSelfRef.top__DOT__data_mem_width = 1U;
                        }
                        vlSelfRef.top__DOT__data_mem_sign = 0U;
                        vlSelfRef.top__DOT__data_mem_addr 
                            = vlSelfRef.top__DOT__EU__DOT__addr_store;
                    } else if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                        vlSelfRef.top__DOT__data_mem_reg_width = 0U;
                        vlSelfRef.top__DOT__data_mem_width = 0U;
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
            } else {
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
            }
        } else if ((0x10U & (IData)(vlSelfRef.top__DOT__exec_type))) {
            if ((8U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                            vlSelfRef.top__DOT__data_mem_reg_we = 0U;
                            vlSelfRef.top__DOT__data_mem_we = 0U;
                        }
                        if ((1U & (~ (IData)(vlSelfRef.top__DOT__exec_type)))) {
                            vlSelfRef.top__DOT__reg_we = 1U;
                            vlSelfRef.top__DOT__jump_en = 1U;
                            vlSelfRef.top__DOT__jump_addr 
                                = (vlSelfRef.top__DOT__rs0_data 
                                   + vlSelfRef.top__DOT__immediate);
                        } else {
                            vlSelfRef.top__DOT__reg_we = 0U;
                        }
                    } else {
                        if ((1U & (~ (IData)(vlSelfRef.top__DOT__exec_type)))) {
                            vlSelfRef.top__DOT__data_mem_reg_we = 1U;
                        }
                        if ((1U & (IData)(vlSelfRef.top__DOT__exec_type))) {
                            vlSelfRef.top__DOT__reg_we = 1U;
                            vlSelfRef.top__DOT__jump_en = 1U;
                            vlSelfRef.top__DOT__jump_addr 
                                = vlSelfRef.top__DOT__EU__DOT__jump_addr_precalc;
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
    vlSelfRef.top__DOT__data_mem_out = 0U;
    if ((0U == (IData)(vlSelfRef.top__DOT__data_mem_width))) {
        vlSelfRef.top__DOT__data_mem_out = ((0xffffff00U 
                                             & vlSelfRef.top__DOT__data_mem_out) 
                                            | (0xffU 
                                               & ((2U 
                                                   & vlSelfRef.top__DOT__data_mem_addr)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.top__DOT__data_mem_addr)
                                                    ? 
                                                   (vlSelfRef.top__DOT__DRAM__DOT__mem
                                                    [
                                                    (0x3fU 
                                                     & (vlSelfRef.top__DOT__data_mem_addr 
                                                        >> 2U))] 
                                                    >> 0x18U)
                                                    : 
                                                   (vlSelfRef.top__DOT__DRAM__DOT__mem
                                                    [
                                                    (0x3fU 
                                                     & (vlSelfRef.top__DOT__data_mem_addr 
                                                        >> 2U))] 
                                                    >> 0x10U))
                                                   : 
                                                  ((1U 
                                                    & vlSelfRef.top__DOT__data_mem_addr)
                                                    ? 
                                                   (vlSelfRef.top__DOT__DRAM__DOT__mem
                                                    [
                                                    (0x3fU 
                                                     & (vlSelfRef.top__DOT__data_mem_addr 
                                                        >> 2U))] 
                                                    >> 8U)
                                                    : 
                                                   vlSelfRef.top__DOT__DRAM__DOT__mem
                                                   [
                                                   (0x3fU 
                                                    & (vlSelfRef.top__DOT__data_mem_addr 
                                                       >> 2U))]))));
        vlSelfRef.top__DOT__data_mem_out = ((0xffU 
                                             & vlSelfRef.top__DOT__data_mem_out) 
                                            | (((IData)(vlSelfRef.top__DOT__data_mem_sign)
                                                 ? 
                                                (0xffffffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.top__DOT__DRAM__DOT__mem
                                                                  [
                                                                  (0x3fU 
                                                                   & (vlSelfRef.top__DOT__data_mem_addr 
                                                                      >> 2U))] 
                                                                  >> 7U)))))
                                                 : 0U) 
                                               << 8U));
    } else if ((1U == (IData)(vlSelfRef.top__DOT__data_mem_width))) {
        vlSelfRef.top__DOT__data_mem_out = ((0xffff0000U 
                                             & vlSelfRef.top__DOT__data_mem_out) 
                                            | (0xffffU 
                                               & ((2U 
                                                   & vlSelfRef.top__DOT__data_mem_addr)
                                                   ? 
                                                  ((2U 
                                                    & vlSelfRef.top__DOT__data_mem_addr)
                                                    ? 
                                                   (vlSelfRef.top__DOT__DRAM__DOT__mem
                                                    [
                                                    (0x3fU 
                                                     & (vlSelfRef.top__DOT__data_mem_addr 
                                                        >> 2U))] 
                                                    >> 0x10U)
                                                    : 
                                                   (vlSelfRef.top__DOT__DRAM__DOT__mem
                                                    [
                                                    (0x3fU 
                                                     & (vlSelfRef.top__DOT__data_mem_addr 
                                                        >> 2U))] 
                                                    >> 0x10U))
                                                   : 
                                                  vlSelfRef.top__DOT__DRAM__DOT__mem
                                                  [
                                                  (0x3fU 
                                                   & (vlSelfRef.top__DOT__data_mem_addr 
                                                      >> 2U))])));
        vlSelfRef.top__DOT__data_mem_out = ((0xffffU 
                                             & vlSelfRef.top__DOT__data_mem_out) 
                                            | (((IData)(vlSelfRef.top__DOT__data_mem_sign)
                                                 ? 
                                                (0xffffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.top__DOT__DRAM__DOT__mem
                                                                  [
                                                                  (0x3fU 
                                                                   & (vlSelfRef.top__DOT__data_mem_addr 
                                                                      >> 2U))] 
                                                                  >> 0xfU)))))
                                                 : 0U) 
                                               << 0x10U));
    } else {
        vlSelfRef.top__DOT__data_mem_out = ((3U == (IData)(vlSelfRef.top__DOT__data_mem_width))
                                             ? vlSelfRef.top__DOT__DRAM__DOT__mem
                                            [(0x3fU 
                                              & (vlSelfRef.top__DOT__data_mem_addr 
                                                 >> 2U))]
                                             : vlSelfRef.top__DOT__DRAM__DOT__mem
                                            [(0x3fU 
                                              & (vlSelfRef.top__DOT__data_mem_addr 
                                                 >> 2U))]);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->GPIO = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__data_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__data_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__data_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ins_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ins_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rs0_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rd_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__exec_type = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__immediate = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__reg_we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__data_mem_width = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__data_mem_we = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__data_mem_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__data_mem_sign = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__data_mem_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__data_mem_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__data_mem_reg_we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__data_mem_reg_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__data_mem_reg_width = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__jump_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__jump_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ins_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__tmpGPIO = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ins_we = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__data_we = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->top__DOT__DRAM__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__reg_file__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 33; ++__Vi0) {
        vlSelf->top__DOT__IRAM__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__IRAM__DOT____Vlvbound_hdbe736b5__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__IRAM__DOT____Vlvbound_hdbe0a39d__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__IRAM__DOT____Vlvbound_hdbde14b2__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__IRAM__DOT____Vlvbound_hdbdb999a__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__FU__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EU__DOT__target_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EU__DOT__signed_addr_load = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EU__DOT__unsigned_addr_load = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EU__DOT__addr_store = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EU__DOT__jump_addr_precalc = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_shift_op__0__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_shift_op__0__val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_shift_op__0__shamt = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_shift_op__0__s = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_shift_op__0__sign = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_shift_op__1__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_shift_op__1__val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_shift_op__1__shamt = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_shift_op__1__s = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_shift_op__1__sign = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_shift_op__2__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_shift_op__2__val = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_shift_op__2__shamt = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_shift_op__2__s = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_shift_op__2__sign = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
