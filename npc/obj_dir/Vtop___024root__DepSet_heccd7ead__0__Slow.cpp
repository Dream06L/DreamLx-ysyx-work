// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    Vtop___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[0U] = 4U;
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[1U] = 8U;
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[2U] = 0x10U;
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[3U] = 0x20U;
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[4U] = 0x40U;
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[5U] = 0x80U;
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[6U] = 2U;
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list[1U] = 0x40U;
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list[2U] = 0x80U;
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list[3U] = 2U;
    vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__key_list[0U] = 0x10U;
    vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__key_list[1U] = 0x20U;
    vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__key_list[0U] = 4U;
    vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__key_list[1U] = 8U;
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list[2U] = 1U;
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list[2U] = 1U;
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list[2U] = 1U;
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list[0U] = 8U;
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list[1U] = 4U;
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list[2U] = 2U;
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list[3U] = 1U;
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__pair_list[0U] = 0x38U;
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__pair_list[1U] = 0x24U;
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__pair_list[2U] = 0x12U;
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__pair_list[3U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/lx02/ysyx-workbench/npc/vsrc/top.v", 1, "", "Settle region did not converge.");
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

void Vtop___024root____Vdpiimwrap_top__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_top__DOT__inst_du__DOT__halt_TOP(IData/*31:0*/ code);

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ppc = vlSelfRef.top__DOT__pc;
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__pair_list[1U] 
        = (0x4000000000ULL | (QData)((IData)(((IData)(4U) 
                                              + vlSelfRef.top__DOT__pc))));
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list[1U] 
        = ((IData)(4U) + vlSelfRef.top__DOT__pc);
    Vtop___024root____Vdpiimwrap_top__DOT__pmem_read_TOP(vlSelfRef.top__DOT__pc, vlSelfRef.__Vfunc_top__DOT__pmem_read__0__Vfuncout);
    vlSelfRef.top__DOT__inst = vlSelfRef.__Vfunc_top__DOT__pmem_read__0__Vfuncout;
    if ((0x100073U == vlSelfRef.top__DOT__inst)) {
        Vtop___024root____Vdpiimwrap_top__DOT__inst_du__DOT__halt_TOP(
                                                                      vlSelfRef.top__DOT__u_gpr__DOT__rf
                                                                      [0xaU]);
    }
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[5U] 
        = (0x8000000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelfRef.top__DOT__inst))));
    vlSelfRef.top__DOT__rdata2 = ((0U != (0x1fU & (vlSelfRef.top__DOT__inst 
                                                   >> 0x14U)))
                                   ? vlSelfRef.top__DOT__u_gpr__DOT__rf
                                  [(0x1fU & (vlSelfRef.top__DOT__inst 
                                             >> 0x14U))]
                                   : 0U);
    vlSelfRef.top__DOT__rdata1 = ((0U != (0x1fU & (vlSelfRef.top__DOT__inst 
                                                   >> 0xfU)))
                                   ? vlSelfRef.top__DOT__u_gpr__DOT__rf
                                  [(0x1fU & (vlSelfRef.top__DOT__inst 
                                             >> 0xfU))]
                                   : 0U);
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[5U] 
        = (0xfffff000U & vlSelfRef.top__DOT__inst);
    vlSelfRef.isjump = (IData)((0x67U == (0x707fU & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 = (IData)(
                                                       (0x23U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_2 = (IData)(
                                                       (0x2023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_3 = (IData)(
                                                       (0x13U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_4 = (IData)(
                                                       (0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_1 
        = (IData)((0x2003U == (0x707fU & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_0 
        = (IData)((0x4003U == (0x707fU & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_9 = (((- (IData)(
                                                            (vlSelfRef.top__DOT__inst 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | ((0xfe0U 
                                                    & (vlSelfRef.top__DOT__inst 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSelfRef.top__DOT__inst 
                                                         >> 7U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_17 = (((- (IData)(
                                                             (vlSelfRef.top__DOT__inst 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelfRef.top__DOT__inst 
                                                    >> 0x14U));
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)(VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__rdata2, 0x18U))));
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__pair_list[1U] 
        = (0x200000000ULL | (QData)((IData)((0xff0000U 
                                             & (vlSelfRef.top__DOT__rdata2 
                                                << 0x10U)))));
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__pair_list[2U] 
        = (0x100000000ULL | (QData)((IData)((0xff00U 
                                             & (vlSelfRef.top__DOT__rdata2 
                                                << 8U)))));
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)((0xffU & vlSelfRef.top__DOT__rdata2)));
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list[0U] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__rdata2, 0x18U);
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list[1U] 
        = (0xff0000U & (vlSelfRef.top__DOT__rdata2 
                        << 0x10U));
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list[2U] 
        = (0xff00U & (vlSelfRef.top__DOT__rdata2 << 8U));
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelfRef.top__DOT__rdata2);
    vlSelfRef.top__DOT__inst_exu__DOT__sum_add = (vlSelfRef.top__DOT__rdata1 
                                                  + vlSelfRef.top__DOT__rdata2);
    vlSelfRef.top__DOT____Vcellinp__inst_store____pinNumber7 
        = ((IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_0) 
           | (IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_1));
    vlSelfRef.top__DOT__is_what = (((((0x37U == (0x7fU 
                                                 & vlSelfRef.top__DOT__inst)) 
                                      << 7U) | ((IData)(vlSelfRef.isjump) 
                                                << 6U)) 
                                    | (((IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_1) 
                                        << 5U) | ((IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_0) 
                                                  << 4U))) 
                                   | ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1) 
                                        << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2) 
                                                  << 2U)) 
                                      | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3) 
                                          << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_4))));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[0U] 
        = (0x400000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_9)));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[1U] 
        = (0x800000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_9)));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_hd87f99a1_0_9;
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.__VdfgRegularize_hd87f99a1_0_9;
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[2U] 
        = (0x1000000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_17)));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[3U] 
        = (0x2000000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_17)));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[4U] 
        = (0x4000000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_17)));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[6U] 
        = (0x200000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_17)));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.__VdfgRegularize_hd87f99a1_0_17;
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.__VdfgRegularize_hd87f99a1_0_17;
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[4U] 
        = vlSelfRef.__VdfgRegularize_hd87f99a1_0_17;
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[6U] 
        = vlSelfRef.__VdfgRegularize_hd87f99a1_0_17;
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_add)));
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__inst_exu__DOT__sum_add;
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__is_what) == 
           vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__is_what) 
              == vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__is_what) 
              == vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__is_what) 
              == vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__is_what) 
              == vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__is_what) 
              == vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__is_what) 
              == vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list
              [6U]));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__is_what) 
                       == vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__is_what) 
                          == vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__is_what) 
                          == vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__is_what) 
                          == vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__is_what) 
                          == vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__is_what) 
                          == vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__is_what) 
                          == vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list
              [6U]));
    vlSelfRef.top__DOT__imm = vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__pair_list[2U] 
        = (0x8000000000ULL | (QData)((IData)(vlSelfRef.top__DOT__imm)));
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__imm;
    vlSelfRef.top__DOT__inst_exu__DOT__sum_addi = (vlSelfRef.top__DOT__imm 
                                                   + vlSelfRef.top__DOT__rdata1);
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__hit 
        = ((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
           == vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__hit) 
           | ((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
              == vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__hit) 
           | ((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
              == vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__hit) 
           | ((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
              == vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__hit 
        = ((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
           == vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__hit) 
           | ((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
              == vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__hit) 
           | ((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
              == vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__hit) 
           | ((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
              == vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__hit 
        = ((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
           == vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__hit) 
           | ((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
              == vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__hit) 
           | ((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
              == vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__hit) 
           | ((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
              == vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__pair_list[0U] 
        = (0x1000000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)));
    vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__pair_list[1U] 
        = (0x2000000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)));
    vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__pair_list[0U] 
        = (0x400000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)));
    vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__pair_list[1U] 
        = (0x800000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)));
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__pair_list[3U] 
        = (0x200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)));
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
                       == vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
                          == vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
                          == vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
                          == vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.top__DOT__wmask = vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__lut_out 
        = ((- (IData)(((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
                       == vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
                          == vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
                          == vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
                          == vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.top__DOT__inst_store__DOT__wdatabt = vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__inst_exu__DOT__sum_addi;
    vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.top__DOT__inst_exu__DOT__sum_addi;
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__inst_exu__DOT__sum_addi;
    vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__inst_exu__DOT__sum_addi;
    vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.top__DOT__inst_exu__DOT__sum_addi;
    vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__is_what) 
                       == vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__is_what) == 
           vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__is_what) 
                          == vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__is_what) 
              == vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.top__DOT__waddrM = ((IData)(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__hit)
                                   ? vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__lut_out
                                   : 0U);
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__is_what) 
                       == vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__is_what) == 
           vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__is_what) 
                          == vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__is_what) 
              == vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__is_what) 
                          == vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__is_what) 
              == vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__is_what) 
                          == vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__is_what) 
              == vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.top__DOT__result = ((IData)(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__hit)
                                   ? vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__lut_out
                                   : 0U);
    vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__is_what) 
                       == vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__is_what) == 
           vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__is_what) 
                          == vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__is_what) 
              == vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.top__DOT__raddrM = ((IData)(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__hit)
                                   ? vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__lut_out
                                   : 0U);
    vlSelfRef.top__DOT__inst_store__DOT__rdata = 0U;
    if (vlSelfRef.top__DOT____Vcellinp__inst_store____pinNumber7) {
        Vtop___024root____Vdpiimwrap_top__DOT__pmem_read_TOP(vlSelfRef.top__DOT__raddrM, vlSelfRef.__Vfunc_top__DOT__inst_store__DOT__pmem_read__2__Vfuncout);
        vlSelfRef.top__DOT__inst_store__DOT__rdata 
            = vlSelfRef.__Vfunc_top__DOT__inst_store__DOT__pmem_read__2__Vfuncout;
    }
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)((vlSelfRef.top__DOT__inst_store__DOT__rdata 
                                             >> 0x18U))));
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__pair_list[1U] 
        = (0x200000000ULL | (QData)((IData)((0xffU 
                                             & (vlSelfRef.top__DOT__inst_store__DOT__rdata 
                                                >> 0x10U)))));
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__pair_list[2U] 
        = (0x100000000ULL | (QData)((IData)((0xffU 
                                             & (vlSelfRef.top__DOT__inst_store__DOT__rdata 
                                                >> 8U)))));
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)((0xffU & vlSelfRef.top__DOT__inst_store__DOT__rdata)));
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list[0U] 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__inst_store__DOT__rdata, 0x18U);
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list[1U] 
        = (0xffU & (vlSelfRef.top__DOT__inst_store__DOT__rdata 
                    >> 0x10U));
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list[2U] 
        = (0xffU & (vlSelfRef.top__DOT__inst_store__DOT__rdata 
                    >> 8U));
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelfRef.top__DOT__inst_store__DOT__rdata);
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__lut_out 
        = ((- (IData)(((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
                       == vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
                          == vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
                          == vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi) 
                          == vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.top__DOT__inst_store__DOT__rdatabyte 
        = vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__lut_out;
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge rst)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge rst)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vm_traceActivitySetAll\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->ppc = 0;
    vlSelf->isjump = 0;
    vlSelf->top__DOT__imm = 0;
    vlSelf->top__DOT__is_what = 0;
    vlSelf->top__DOT__inst = 0;
    vlSelf->top__DOT__pc = 0;
    vlSelf->top__DOT__rdata1 = 0;
    vlSelf->top__DOT__rdata2 = 0;
    vlSelf->top__DOT__raddrM = 0;
    vlSelf->top__DOT__waddrM = 0;
    vlSelf->top__DOT__wmask = 0;
    vlSelf->top__DOT__result = 0;
    vlSelf->top__DOT____Vcellinp__inst_store____pinNumber7 = 0;
    vlSelf->top__DOT____VdfgRegularize_h245778ca_0_0 = 0;
    vlSelf->top__DOT____VdfgRegularize_h245778ca_0_1 = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__u_gpr__DOT__rf[__Vi0] = 0;
    }
    vlSelf->top__DOT__inst_exu__DOT__sum_addi = 0;
    vlSelf->top__DOT__inst_exu__DOT__sum_add = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__hit = 0;
    vlSelf->top__DOT__inst_store__DOT__rdata = 0;
    vlSelf->top__DOT__inst_store__DOT__rdatabyte = 0;
    vlSelf->top__DOT__inst_store__DOT__wdatabt = 0;
    vlSelf->top__DOT__inst_store__DOT__r_raddr = 0;
    vlSelf->top__DOT__inst_store__DOT__r_waddr = 0;
    vlSelf->top__DOT__inst_store__DOT__r_wdata = 0;
    vlSelf->top__DOT__inst_store__DOT__r_wmask = 0;
    vlSelf->top__DOT__inst_store__DOT__r_wen = 0;
    vlSelf->top__DOT__inst_store__DOT__r_readen = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__hit = 0;
    vlSelf->__VdfgRegularize_hd87f99a1_0_1 = 0;
    vlSelf->__VdfgRegularize_hd87f99a1_0_2 = 0;
    vlSelf->__VdfgRegularize_hd87f99a1_0_3 = 0;
    vlSelf->__VdfgRegularize_hd87f99a1_0_4 = 0;
    vlSelf->__VdfgRegularize_hd87f99a1_0_9 = 0;
    vlSelf->__VdfgRegularize_hd87f99a1_0_17 = 0;
    vlSelf->__Vfunc_top__DOT__pmem_read__0__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__inst_store__DOT__pmem_read__2__Vfuncout = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
