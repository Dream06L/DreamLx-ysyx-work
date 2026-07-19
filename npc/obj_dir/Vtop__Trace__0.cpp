// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<9>/*287:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<5>/*159:0*/ __Vtemp_16;
    VlWide<5>/*159:0*/ __Vtemp_19;
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[0]),8);
        bufp->chgCData(oldp+1,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[1]),8);
        bufp->chgCData(oldp+2,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[2]),8);
        bufp->chgCData(oldp+3,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[3]),8);
        bufp->chgCData(oldp+4,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[4]),8);
        bufp->chgCData(oldp+5,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[5]),8);
        bufp->chgCData(oldp+6,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[6]),8);
        bufp->chgCData(oldp+7,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__pair_list[0]),6);
        bufp->chgCData(oldp+8,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__pair_list[1]),6);
        bufp->chgCData(oldp+9,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__pair_list[2]),6);
        bufp->chgCData(oldp+10,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__pair_list[3]),6);
        bufp->chgCData(oldp+11,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+12,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+13,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+14,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+15,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list[0]),4);
        bufp->chgCData(oldp+16,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list[1]),4);
        bufp->chgCData(oldp+17,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list[2]),4);
        bufp->chgCData(oldp+18,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list[3]),4);
        bufp->chgCData(oldp+19,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__key_list[0]),8);
        bufp->chgCData(oldp+20,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__key_list[1]),8);
        bufp->chgCData(oldp+21,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list[0]),8);
        bufp->chgCData(oldp+22,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list[1]),8);
        bufp->chgCData(oldp+23,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list[2]),8);
        bufp->chgCData(oldp+24,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list[3]),8);
        bufp->chgCData(oldp+25,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__key_list[0]),8);
        bufp->chgCData(oldp+26,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__key_list[1]),8);
        bufp->chgCData(oldp+27,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+28,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+29,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+30,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+31,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+32,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+33,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+34,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list[3]),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+35,(vlSelfRef.top__DOT__u_gpr__DOT__rf
                                [0xaU]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.top__DOT__u_gpr__DOT__rf[0]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.top__DOT__u_gpr__DOT__rf[1]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top__DOT__u_gpr__DOT__rf[2]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.top__DOT__u_gpr__DOT__rf[3]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.top__DOT__u_gpr__DOT__rf[4]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.top__DOT__u_gpr__DOT__rf[5]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.top__DOT__u_gpr__DOT__rf[6]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.top__DOT__u_gpr__DOT__rf[7]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.top__DOT__u_gpr__DOT__rf[8]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.top__DOT__u_gpr__DOT__rf[9]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.top__DOT__u_gpr__DOT__rf[10]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.top__DOT__u_gpr__DOT__rf[11]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.top__DOT__u_gpr__DOT__rf[12]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.top__DOT__u_gpr__DOT__rf[13]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.top__DOT__u_gpr__DOT__rf[14]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.top__DOT__u_gpr__DOT__rf[15]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.top__DOT__u_gpr__DOT__rf[16]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.top__DOT__u_gpr__DOT__rf[17]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.top__DOT__u_gpr__DOT__rf[18]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.top__DOT__u_gpr__DOT__rf[19]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.top__DOT__u_gpr__DOT__rf[20]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.top__DOT__u_gpr__DOT__rf[21]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.top__DOT__u_gpr__DOT__rf[22]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.top__DOT__u_gpr__DOT__rf[23]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.top__DOT__u_gpr__DOT__rf[24]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.top__DOT__u_gpr__DOT__rf[25]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.top__DOT__u_gpr__DOT__rf[26]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.top__DOT__u_gpr__DOT__rf[27]),32);
        bufp->chgIData(oldp+64,(vlSelfRef.top__DOT__u_gpr__DOT__rf[28]),32);
        bufp->chgIData(oldp+65,(vlSelfRef.top__DOT__u_gpr__DOT__rf[29]),32);
        bufp->chgIData(oldp+66,(vlSelfRef.top__DOT__u_gpr__DOT__rf[30]),32);
        bufp->chgIData(oldp+67,(vlSelfRef.top__DOT__u_gpr__DOT__rf[31]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+68,((0xfffffffeU & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)),32);
        bufp->chgIData(oldp+69,(vlSelfRef.top__DOT__imm),32);
        bufp->chgCData(oldp+70,((0x1fU & (vlSelfRef.top__DOT__inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+71,((0x1fU & (vlSelfRef.top__DOT__inst 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+72,((0x1fU & (vlSelfRef.top__DOT__inst 
                                          >> 7U))),5);
        bufp->chgCData(oldp+73,(vlSelfRef.top__DOT__is_what),8);
        bufp->chgIData(oldp+74,(vlSelfRef.top__DOT__inst),32);
        bufp->chgIData(oldp+75,(vlSelfRef.top__DOT__pc),32);
        bufp->chgIData(oldp+76,(vlSelfRef.top__DOT__rdata1),32);
        bufp->chgIData(oldp+77,(vlSelfRef.top__DOT__rdata2),32);
        bufp->chgCData(oldp+78,((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)),2);
        bufp->chgIData(oldp+79,(((IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_1)
                                  ? vlSelfRef.top__DOT__inst_store__DOT__rdata
                                  : ((IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_0)
                                      ? vlSelfRef.top__DOT__inst_store__DOT__rdatabyte
                                      : 0U))),32);
        bufp->chgIData(oldp+80,(vlSelfRef.top__DOT__raddrM),32);
        bufp->chgIData(oldp+81,(vlSelfRef.top__DOT__waddrM),32);
        bufp->chgCData(oldp+82,(vlSelfRef.top__DOT__wmask),4);
        bufp->chgIData(oldp+83,(vlSelfRef.top__DOT__result),32);
        bufp->chgIData(oldp+84,((((IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_1) 
                                  | (IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_0))
                                  ? ((IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_1)
                                      ? vlSelfRef.top__DOT__inst_store__DOT__rdata
                                      : ((IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_0)
                                          ? vlSelfRef.top__DOT__inst_store__DOT__rdatabyte
                                          : 0U)) : vlSelfRef.top__DOT__result)),32);
        bufp->chgBit(oldp+85,((0x100073U == vlSelfRef.top__DOT__inst)));
        bufp->chgSData(oldp+86,((vlSelfRef.top__DOT__inst 
                                 >> 0x14U)),12);
        bufp->chgSData(oldp+87,(((0xfe0U & (vlSelfRef.top__DOT__inst 
                                            >> 0x14U)) 
                                 | (0x1fU & (vlSelfRef.top__DOT__inst 
                                             >> 7U)))),12);
        bufp->chgIData(oldp+88,((vlSelfRef.top__DOT__inst 
                                 >> 0xcU)),20);
        __Vtemp_4[2U] = (((IData)((0x200000000010ULL 
                                   | ((QData)((IData)(
                                                      (((- (IData)(
                                                                   (vlSelfRef.top__DOT__inst 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | (vlSelfRef.top__DOT__inst 
                                                          >> 0x14U)))) 
                                      << 8U))) << 0x10U) 
                         | (((IData)((8ULL | ((QData)((IData)(
                                                              (((- (IData)(
                                                                           (vlSelfRef.top__DOT__inst 
                                                                            >> 0x1fU))) 
                                                                << 0xcU) 
                                                               | (vlSelfRef.top__DOT__inst 
                                                                  >> 0x14U)))) 
                                              << 8U))) 
                             >> 0x18U) | ((IData)((
                                                   (8ULL 
                                                    | ((QData)((IData)(
                                                                       (((- (IData)(
                                                                                (vlSelfRef.top__DOT__inst 
                                                                                >> 0x1fU))) 
                                                                         << 0xcU) 
                                                                        | (vlSelfRef.top__DOT__inst 
                                                                           >> 0x14U)))) 
                                                       << 8U)) 
                                                   >> 0x20U)) 
                                          << 8U)));
        __Vtemp_6[0U] = vlSelfRef.__VdfgRegularize_hd87f99a1_0_9;
        __Vtemp_6[1U] = (IData)((((QData)((IData)((0xfffffU 
                                                   & (- (IData)(
                                                                (vlSelfRef.top__DOT__inst 
                                                                 >> 0x1fU)))))) 
                                  << 0x14U) | (QData)((IData)(
                                                              (4U 
                                                               | ((0xfe000U 
                                                                   & (vlSelfRef.top__DOT__inst 
                                                                      >> 0xcU)) 
                                                                  | (0x1f00U 
                                                                     & (vlSelfRef.top__DOT__inst 
                                                                        << 1U))))))));
        __Vtemp_6[2U] = (((IData)((8ULL | ((QData)((IData)(
                                                           (((- (IData)(
                                                                        (vlSelfRef.top__DOT__inst 
                                                                         >> 0x1fU))) 
                                                             << 0xcU) 
                                                            | (vlSelfRef.top__DOT__inst 
                                                               >> 0x14U)))) 
                                           << 8U))) 
                          << 8U) | (IData)(((((QData)((IData)(
                                                              (0xfffffU 
                                                               & (- (IData)(
                                                                            (vlSelfRef.top__DOT__inst 
                                                                             >> 0x1fU)))))) 
                                              << 0x14U) 
                                             | (QData)((IData)(
                                                               (4U 
                                                                | ((0xfe000U 
                                                                    & (vlSelfRef.top__DOT__inst 
                                                                       >> 0xcU)) 
                                                                   | (0x1f00U 
                                                                      & (vlSelfRef.top__DOT__inst 
                                                                         << 1U))))))) 
                                            >> 0x20U)));
        __Vtemp_6[3U] = __Vtemp_4[2U];
        __Vtemp_6[4U] = (((IData)((0x200000000010ULL 
                                   | ((QData)((IData)(
                                                      (((- (IData)(
                                                                   (vlSelfRef.top__DOT__inst 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | (vlSelfRef.top__DOT__inst 
                                                          >> 0x14U)))) 
                                      << 8U))) >> 0x10U) 
                         | ((IData)(((0x200000000010ULL 
                                      | ((QData)((IData)(
                                                         (((- (IData)(
                                                                      (vlSelfRef.top__DOT__inst 
                                                                       >> 0x1fU))) 
                                                           << 0xcU) 
                                                          | (vlSelfRef.top__DOT__inst 
                                                             >> 0x14U)))) 
                                         << 8U)) >> 0x20U)) 
                            << 0x10U));
        __Vtemp_6[5U] = (((- (IData)((vlSelfRef.top__DOT__inst 
                                      >> 0x1fU))) << 0xcU) 
                         | (vlSelfRef.top__DOT__inst 
                            >> 0x14U));
        __Vtemp_6[6U] = (IData)((0x800000000040ULL 
                                 | ((QData)((IData)(
                                                    (vlSelfRef.top__DOT__inst 
                                                     >> 0xcU))) 
                                    << 0x14U)));
        __Vtemp_6[7U] = (((IData)((0x200000000ULL | (QData)((IData)(
                                                                    (((- (IData)(
                                                                                (vlSelfRef.top__DOT__inst 
                                                                                >> 0x1fU))) 
                                                                      << 0xcU) 
                                                                     | (vlSelfRef.top__DOT__inst 
                                                                        >> 0x14U)))))) 
                          << 0x10U) | (IData)(((0x800000000040ULL 
                                                | ((QData)((IData)(
                                                                   (vlSelfRef.top__DOT__inst 
                                                                    >> 0xcU))) 
                                                   << 0x14U)) 
                                               >> 0x20U)));
        __Vtemp_6[8U] = (((IData)((0x200000000ULL | (QData)((IData)(
                                                                    (((- (IData)(
                                                                                (vlSelfRef.top__DOT__inst 
                                                                                >> 0x1fU))) 
                                                                      << 0xcU) 
                                                                     | (vlSelfRef.top__DOT__inst 
                                                                        >> 0x14U)))))) 
                          >> 0x10U) | ((IData)(((0x200000000ULL 
                                                 | (QData)((IData)(
                                                                   (((- (IData)(
                                                                                (vlSelfRef.top__DOT__inst 
                                                                                >> 0x1fU))) 
                                                                     << 0xcU) 
                                                                    | (vlSelfRef.top__DOT__inst 
                                                                       >> 0x14U))))) 
                                                >> 0x20U)) 
                                       << 0x10U));
        bufp->chgWData(oldp+89,(__Vtemp_6),280);
        bufp->chgQData(oldp+98,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[0]),40);
        bufp->chgQData(oldp+100,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[1]),40);
        bufp->chgQData(oldp+102,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[2]),40);
        bufp->chgQData(oldp+104,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[3]),40);
        bufp->chgQData(oldp+106,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[4]),40);
        bufp->chgQData(oldp+108,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[5]),40);
        bufp->chgQData(oldp+110,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[6]),40);
        bufp->chgIData(oldp+112,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+113,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+114,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+115,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+116,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+117,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+118,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+119,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+120,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+121,(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi),32);
        bufp->chgIData(oldp+122,(((IData)(4U) + vlSelfRef.top__DOT__pc)),32);
        bufp->chgIData(oldp+123,(vlSelfRef.top__DOT__inst_exu__DOT__sum_add),32);
        bufp->chgCData(oldp+124,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__lut_out),4);
        bufp->chgBit(oldp+125,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__hit));
        __Vtemp_8[0U] = (IData)((0x1000000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi))));
        __Vtemp_8[1U] = ((vlSelfRef.top__DOT__inst_exu__DOT__sum_addi 
                          << 8U) | (IData)(((0x1000000000ULL 
                                             | (QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi))) 
                                            >> 0x20U)));
        __Vtemp_8[2U] = (0x2000U | (vlSelfRef.top__DOT__inst_exu__DOT__sum_addi 
                                    >> 0x18U));
        bufp->chgWData(oldp+126,(__Vtemp_8),80);
        bufp->chgQData(oldp+129,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__pair_list[0]),40);
        bufp->chgQData(oldp+131,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__pair_list[1]),40);
        bufp->chgIData(oldp+133,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+134,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+135,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+136,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__hit));
        __Vtemp_11[0U] = vlSelfRef.top__DOT__inst_exu__DOT__sum_add;
        __Vtemp_11[1U] = (IData)((1ULL | ((QData)((IData)(
                                                          ((IData)(4U) 
                                                           + vlSelfRef.top__DOT__pc))) 
                                          << 8U)));
        __Vtemp_11[2U] = (((IData)((0x40ULL | ((QData)((IData)(vlSelfRef.top__DOT__imm)) 
                                               << 8U))) 
                           << 8U) | (IData)(((1ULL 
                                              | ((QData)((IData)(
                                                                 ((IData)(4U) 
                                                                  + vlSelfRef.top__DOT__pc))) 
                                                 << 8U)) 
                                             >> 0x20U)));
        __Vtemp_11[3U] = (((IData)((0x20000000080ULL 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)) 
                                       << 8U))) << 0x10U) 
                          | (((IData)((0x40ULL | ((QData)((IData)(vlSelfRef.top__DOT__imm)) 
                                                  << 8U))) 
                              >> 0x18U) | ((IData)(
                                                   ((0x40ULL 
                                                     | ((QData)((IData)(vlSelfRef.top__DOT__imm)) 
                                                        << 8U)) 
                                                    >> 0x20U)) 
                                           << 8U)));
        __Vtemp_11[4U] = (((IData)((0x20000000080ULL 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)) 
                                       << 8U))) >> 0x10U) 
                          | ((IData)(((0x20000000080ULL 
                                       | ((QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)) 
                                          << 8U)) >> 0x20U)) 
                             << 0x10U));
        bufp->chgWData(oldp+137,(__Vtemp_11),160);
        bufp->chgQData(oldp+142,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__pair_list[0]),40);
        bufp->chgQData(oldp+144,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__pair_list[1]),40);
        bufp->chgQData(oldp+146,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__pair_list[2]),40);
        bufp->chgQData(oldp+148,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__pair_list[3]),40);
        bufp->chgIData(oldp+150,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+151,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+152,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+153,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+154,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+155,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__hit));
        __Vtemp_13[0U] = (IData)((0x400000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi))));
        __Vtemp_13[1U] = ((vlSelfRef.top__DOT__inst_exu__DOT__sum_addi 
                           << 8U) | (IData)(((0x400000000ULL 
                                              | (QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi))) 
                                             >> 0x20U)));
        __Vtemp_13[2U] = (0x800U | (vlSelfRef.top__DOT__inst_exu__DOT__sum_addi 
                                    >> 0x18U));
        bufp->chgWData(oldp+156,(__Vtemp_13),80);
        bufp->chgQData(oldp+159,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__pair_list[0]),40);
        bufp->chgQData(oldp+161,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__pair_list[1]),40);
        bufp->chgIData(oldp+163,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+164,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+165,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+166,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+167,(((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2) 
                                | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))));
        bufp->chgBit(oldp+168,(vlSelfRef.top__DOT____Vcellinp__inst_store____pinNumber7));
        bufp->chgIData(oldp+169,(vlSelfRef.top__DOT__inst_store__DOT__rdata),32);
        bufp->chgIData(oldp+170,(vlSelfRef.top__DOT__inst_store__DOT__rdatabyte),32);
        bufp->chgIData(oldp+171,(vlSelfRef.top__DOT__inst_store__DOT__wdatabt),32);
        bufp->chgIData(oldp+172,(((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)
                                   ? vlSelfRef.top__DOT__inst_store__DOT__wdatabt
                                   : vlSelfRef.top__DOT__rdata2)),32);
        bufp->chgCData(oldp+173,(((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)
                                   ? 0xfU : (IData)(vlSelfRef.top__DOT__wmask))),4);
        __Vtemp_16[0U] = (IData)((0x300000000ULL | (QData)((IData)(
                                                                   (vlSelfRef.top__DOT__inst_store__DOT__rdata 
                                                                    >> 0x18U)))));
        __Vtemp_16[1U] = (((IData)((0x200000000ULL 
                                    | (QData)((IData)(
                                                      (0xffU 
                                                       & (vlSelfRef.top__DOT__inst_store__DOT__rdata 
                                                          >> 0x10U)))))) 
                           << 2U) | (IData)(((0x300000000ULL 
                                              | (QData)((IData)(
                                                                (vlSelfRef.top__DOT__inst_store__DOT__rdata 
                                                                 >> 0x18U)))) 
                                             >> 0x20U)));
        __Vtemp_16[2U] = (((IData)((0x100000000ULL 
                                    | (((QData)((IData)(
                                                        (0xffU 
                                                         & vlSelfRef.top__DOT__inst_store__DOT__rdata))) 
                                        << 0x22U) | (QData)((IData)(
                                                                    (0xffU 
                                                                     & (vlSelfRef.top__DOT__inst_store__DOT__rdata 
                                                                        >> 8U))))))) 
                           << 4U) | (((IData)((0x200000000ULL 
                                               | (QData)((IData)(
                                                                 (0xffU 
                                                                  & (vlSelfRef.top__DOT__inst_store__DOT__rdata 
                                                                     >> 0x10U)))))) 
                                      >> 0x1eU) | ((IData)(
                                                           ((0x200000000ULL 
                                                             | (QData)((IData)(
                                                                               (0xffU 
                                                                                & (vlSelfRef.top__DOT__inst_store__DOT__rdata 
                                                                                >> 0x10U))))) 
                                                            >> 0x20U)) 
                                                   << 2U)));
        __Vtemp_16[3U] = (((IData)((0x100000000ULL 
                                    | (((QData)((IData)(
                                                        (0xffU 
                                                         & vlSelfRef.top__DOT__inst_store__DOT__rdata))) 
                                        << 0x22U) | (QData)((IData)(
                                                                    (0xffU 
                                                                     & (vlSelfRef.top__DOT__inst_store__DOT__rdata 
                                                                        >> 8U))))))) 
                           >> 0x1cU) | ((IData)(((0x100000000ULL 
                                                  | (((QData)((IData)(
                                                                      (0xffU 
                                                                       & vlSelfRef.top__DOT__inst_store__DOT__rdata))) 
                                                      << 0x22U) 
                                                     | (QData)((IData)(
                                                                       (0xffU 
                                                                        & (vlSelfRef.top__DOT__inst_store__DOT__rdata 
                                                                           >> 8U)))))) 
                                                 >> 0x20U)) 
                                        << 4U));
        __Vtemp_16[4U] = 0U;
        bufp->chgWData(oldp+174,(__Vtemp_16),136);
        bufp->chgQData(oldp+179,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+181,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+183,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+185,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgIData(oldp+187,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+188,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+189,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+190,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+191,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+192,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__hit));
        __Vtemp_19[0U] = (IData)((0x300000000ULL | 
                                  (((QData)((IData)(
                                                    (0xffU 
                                                     & vlSelfRef.top__DOT__rdata2))) 
                                    << 0x32U) | (QData)((IData)(
                                                                VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__rdata2, 0x18U))))));
        __Vtemp_19[1U] = (IData)(((0x300000000ULL | 
                                   (((QData)((IData)(
                                                     (0xffU 
                                                      & vlSelfRef.top__DOT__rdata2))) 
                                     << 0x32U) | (QData)((IData)(
                                                                 VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__rdata2, 0x18U))))) 
                                  >> 0x20U));
        __Vtemp_19[2U] = (8U | ((IData)((((QData)((IData)(
                                                          (0xffU 
                                                           & vlSelfRef.top__DOT__rdata2))) 
                                          << 0x1aU) 
                                         | (QData)((IData)(
                                                           (0x1000000U 
                                                            | (0xffU 
                                                               & vlSelfRef.top__DOT__rdata2)))))) 
                                << 0xcU));
        __Vtemp_19[3U] = (((IData)((((QData)((IData)(
                                                     (0xffU 
                                                      & vlSelfRef.top__DOT__rdata2))) 
                                     << 0x1aU) | (QData)((IData)(
                                                                 (0x1000000U 
                                                                  | (0xffU 
                                                                     & vlSelfRef.top__DOT__rdata2)))))) 
                           >> 0x14U) | ((IData)(((((QData)((IData)(
                                                                   (0xffU 
                                                                    & vlSelfRef.top__DOT__rdata2))) 
                                                   << 0x1aU) 
                                                  | (QData)((IData)(
                                                                    (0x1000000U 
                                                                     | (0xffU 
                                                                        & vlSelfRef.top__DOT__rdata2))))) 
                                                 >> 0x20U)) 
                                        << 0xcU));
        __Vtemp_19[4U] = 0U;
        bufp->chgWData(oldp+193,(__Vtemp_19),136);
        bufp->chgQData(oldp+198,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+200,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+202,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+204,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgIData(oldp+206,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+207,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+208,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+209,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+210,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+211,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__hit));
    }
    bufp->chgBit(oldp+212,(vlSelfRef.clk));
    bufp->chgBit(oldp+213,(vlSelfRef.rst));
    bufp->chgIData(oldp+214,(vlSelfRef.ppc),32);
    bufp->chgBit(oldp+215,(vlSelfRef.isjump));
    bufp->chgBit(oldp+216,(((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3) 
                            | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_4) 
                               | ((IData)(vlSelfRef.top__DOT____Vcellinp__inst_store____pinNumber7) 
                                  | ((IData)(vlSelfRef.isjump) 
                                     | (0x37U == (0x7fU 
                                                  & vlSelfRef.top__DOT__inst))))))));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
