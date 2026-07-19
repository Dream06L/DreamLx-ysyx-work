// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__top__DOT__u_gpr__DOT__rf__v0;
    __VdlyVal__top__DOT__u_gpr__DOT__rf__v0 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__u_gpr__DOT__rf__v0;
    __VdlyDim0__top__DOT__u_gpr__DOT__rf__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__u_gpr__DOT__rf__v0;
    __VdlySet__top__DOT__u_gpr__DOT__rf__v0 = 0;
    // Body
    __VdlySet__top__DOT__u_gpr__DOT__rf__v0 = 0U;
    if (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3) 
         | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_4) 
            | ((IData)(vlSelfRef.top__DOT____Vcellinp__inst_store____pinNumber7) 
               | ((IData)(vlSelfRef.isjump) | (0x37U 
                                               == (0x7fU 
                                                   & vlSelfRef.top__DOT__inst))))))) {
        __VdlyVal__top__DOT__u_gpr__DOT__rf__v0 = (
                                                   ((IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_1) 
                                                    | (IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_0))
                                                    ? 
                                                   ((IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_1)
                                                     ? vlSelfRef.top__DOT__inst_store__DOT__rdata
                                                     : 
                                                    ((IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_0)
                                                      ? vlSelfRef.top__DOT__inst_store__DOT__rdatabyte
                                                      : 0U))
                                                    : vlSelfRef.top__DOT__result);
        __VdlyDim0__top__DOT__u_gpr__DOT__rf__v0 = 
            (0x1fU & (vlSelfRef.top__DOT__inst >> 7U));
        __VdlySet__top__DOT__u_gpr__DOT__rf__v0 = 1U;
    }
    if (__VdlySet__top__DOT__u_gpr__DOT__rf__v0) {
        vlSelfRef.top__DOT__u_gpr__DOT__rf[__VdlyDim0__top__DOT__u_gpr__DOT__rf__v0] 
            = __VdlyVal__top__DOT__u_gpr__DOT__rf__v0;
    }
}

void Vtop___024root____Vdpiimwrap_top__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__pc = ((IData)(vlSelfRef.rst)
                               ? 0x80000000U : ((IData)(vlSelfRef.isjump)
                                                 ? 
                                                (0xfffffffeU 
                                                 & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelfRef.top__DOT__pc)));
    vlSelfRef.ppc = vlSelfRef.top__DOT__pc;
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__pair_list[1U] 
        = (0x4000000000ULL | (QData)((IData)(((IData)(4U) 
                                              + vlSelfRef.top__DOT__pc))));
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list[1U] 
        = ((IData)(4U) + vlSelfRef.top__DOT__pc);
    Vtop___024root____Vdpiimwrap_top__DOT__pmem_read_TOP(vlSelfRef.top__DOT__pc, vlSelfRef.__Vfunc_top__DOT__pmem_read__0__Vfuncout);
    vlSelfRef.top__DOT__inst = vlSelfRef.__Vfunc_top__DOT__pmem_read__0__Vfuncout;
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[5U] 
        = (0x8000000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelfRef.top__DOT__inst))));
    vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[5U] 
        = (0xfffff000U & vlSelfRef.top__DOT__inst);
    vlSelfRef.isjump = (IData)((0x67U == (0x707fU & vlSelfRef.top__DOT__inst)));
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
}

void Vtop___024root____Vdpiimwrap_top__DOT__inst_du__DOT__halt_TOP(IData/*31:0*/ code);
void Vtop___024root____Vdpiimwrap_top__DOT__inst_store__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x100073U == vlSelfRef.top__DOT__inst)) {
        Vtop___024root____Vdpiimwrap_top__DOT__inst_du__DOT__halt_TOP(
                                                                      vlSelfRef.top__DOT__u_gpr__DOT__rf
                                                                      [0xaU]);
    }
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
    vlSelfRef.top__DOT__inst_exu__DOT__sum_addi = (vlSelfRef.top__DOT__imm 
                                                   + vlSelfRef.top__DOT__rdata1);
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_add)));
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__inst_exu__DOT__sum_add;
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
    vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__inst_exu__DOT__sum_addi;
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
    vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__inst_exu__DOT__sum_addi;
    vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.top__DOT__inst_exu__DOT__sum_addi;
    vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__inst_exu__DOT__sum_addi;
    vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.top__DOT__inst_exu__DOT__sum_addi;
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
    vlSelfRef.top__DOT__inst_store__DOT__rdata = 0U;
    if (vlSelfRef.top__DOT____Vcellinp__inst_store____pinNumber7) {
        Vtop___024root____Vdpiimwrap_top__DOT__pmem_read_TOP(vlSelfRef.top__DOT__raddrM, vlSelfRef.__Vfunc_top__DOT__inst_store__DOT__pmem_read__2__Vfuncout);
        vlSelfRef.top__DOT__inst_store__DOT__rdata 
            = vlSelfRef.__Vfunc_top__DOT__inst_store__DOT__pmem_read__2__Vfuncout;
    }
    if (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2) 
         | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))) {
        Vtop___024root____Vdpiimwrap_top__DOT__inst_store__DOT__pmem_write_TOP(vlSelfRef.top__DOT__waddrM, 
                                                                               ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)
                                                                                 ? vlSelfRef.top__DOT__inst_store__DOT__wdatabt
                                                                                 : vlSelfRef.top__DOT__rdata2), 
                                                                               ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)
                                                                                 ? 0xfU
                                                                                 : (IData)(vlSelfRef.top__DOT__wmask)));
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

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/lx02/ysyx-workbench/npc/vsrc/top.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/lx02/ysyx-workbench/npc/vsrc/top.v", 1, "", "Active region did not converge.");
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
