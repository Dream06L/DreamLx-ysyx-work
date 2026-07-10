// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+433,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+436,0,"ppc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+437,0,"isjump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+439,0,"LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+433,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+436,0,"ppc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+437,0,"isjump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+119,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+120,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+121,0,"is_what",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+122,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"rdata1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"rdata2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"min2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+127,0,"rdataM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"raddrM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"waddrM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+131,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"a0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("inst_du", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+122,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"is_what",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+118,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+119,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+120,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+117,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"a0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+134,0,"is_ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"imm12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+136,0,"imm7_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+137,0,"imm20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("immMux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+440,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+441,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+442,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+138,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+440,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+441,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+442,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+444,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+138,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 279,0);
    tracep->declBus(c+445,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+147+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 39,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+161+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+168,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+169,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+446,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("inst_exu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+121,0,"is_what",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+124,0,"rdata1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"rdata2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"wmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+129,0,"waddrM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"raddrM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"min2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+170,0,"sum_addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"jalrpc4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"lui_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"sum_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"lw_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"lbu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"sw_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"sb_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("maskmux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+447,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+448,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+447,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+126,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+449,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+447,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+448,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+447,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+126,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+450,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+449,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+451,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+8+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+12+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+16+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+174,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+175,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+452,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("raddrMMux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+448,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+441,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+442,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+443,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+176,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+448,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+441,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+442,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+453,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+443,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+176,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declBus(c+445,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+179+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 39,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+20+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+183+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+185,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+186,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+454,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("resultMux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+447,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+441,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+442,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+443,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+187,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 159,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+447,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+441,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+442,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+453,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+443,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+187,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 159,0);
    tracep->declBus(c+445,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+192+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 39,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+22+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+200+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+204,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+205,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+452,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("waddrMMux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+448,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+441,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+442,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+443,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+206,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+448,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+441,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+442,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+453,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+443,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+206,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declBus(c+445,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+209+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 39,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+26+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+213+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+215,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+216,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+454,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("inst_gpr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+439,0,"LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+433,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+121,0,"is_what",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+118,0,"raddr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+119,0,"raddr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+124,0,"rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"a0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+217,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+218,0,"wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+219+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("decd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+455,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+447,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+455,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+217,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+235,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declArray(c+456,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 319,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+455,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+447,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+455,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+217,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+235,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+466,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declArray(c+456,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 319,0);
    tracep->declBus(c+467,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+28+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 19,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+44+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+60+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+236,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+237,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+468,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mux1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+455,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+447,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+442,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declArray(c+239,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 575,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+455,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+447,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+442,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+444,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+239,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 575,0);
    tracep->declBus(c+469,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+257+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 35,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+76+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+289+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+305,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+306,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+468,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mux2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+455,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+447,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+442,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declArray(c+239,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 575,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+455,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+447,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+442,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+444,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+239,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 575,0);
    tracep->declBus(c+469,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+308+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 35,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+92+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+340+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+356,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+357,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+468,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+442,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+433,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+443,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+358,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+359,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("reg1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+442,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+433,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+360,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+359,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("reg10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+442,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+433,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+361,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("reg11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+442,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+433,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+362,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+363,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("reg12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+442,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+433,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+364,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+365,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("reg13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+442,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+433,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+366,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+367,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("reg14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+442,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+433,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+368,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+369,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("reg15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+442,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+433,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+370,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+371,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("reg2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+442,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+433,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+372,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+373,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("reg3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+442,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+433,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+374,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+375,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("reg4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+442,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+433,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+376,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+377,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("reg5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+442,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+433,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+378,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+379,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("reg6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+442,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+433,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+380,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+381,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("reg7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+442,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+433,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+382,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+383,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("reg8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+442,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+433,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+384,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+385,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("reg9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+442,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+433,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+386,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+387,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("inst_store", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+433,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"wdatain",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"wmaskin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+388,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"readen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"is_what",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+127,0,"rdataM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"min2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+390,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+391,0,"rdatabyte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+392,0,"wdatabt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+393,0,"wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+394,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("databyte", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+447,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+448,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+442,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+391,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+395,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 135,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+447,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+448,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+442,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+391,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+444,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+395,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 135,0);
    tracep->declBus(c+470,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+400+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+108+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+408+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+412,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+413,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+452,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("wdatabyte", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+447,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+448,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+442,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+392,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+414,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 135,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+447,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+448,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+442,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+392,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+444,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+414,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 135,0);
    tracep->declBus(c+470,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+419+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+112+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+427+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+431,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+432,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+452,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instfu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+433,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+471,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+437,0,"isjalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+438,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pc_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+442,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+472,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+433,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+438,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+471,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<10>/*319:0*/ Vtop__ConstPool__CONST_h73c0be51_0;

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+439,(0x1fU),32);
    bufp->fullIData(oldp+440,(7U),32);
    bufp->fullIData(oldp+441,(8U),32);
    bufp->fullIData(oldp+442,(0x20U),32);
    bufp->fullIData(oldp+443,(0U),32);
    bufp->fullIData(oldp+444,(0U),32);
    bufp->fullIData(oldp+445,(0x28U),32);
    bufp->fullIData(oldp+446,(7U),32);
    bufp->fullIData(oldp+447,(4U),32);
    bufp->fullIData(oldp+448,(2U),32);
    bufp->fullIData(oldp+449,(0x52938U),24);
    bufp->fullCData(oldp+450,(0U),4);
    bufp->fullIData(oldp+451,(6U),32);
    bufp->fullIData(oldp+452,(4U),32);
    bufp->fullIData(oldp+453,(1U),32);
    bufp->fullIData(oldp+454,(2U),32);
    bufp->fullIData(oldp+455,(0x10U),32);
    bufp->fullWData(oldp+456,(Vtop__ConstPool__CONST_h73c0be51_0),320);
    bufp->fullSData(oldp+466,(0U),16);
    bufp->fullIData(oldp+467,(0x14U),32);
    bufp->fullIData(oldp+468,(0x10U),32);
    bufp->fullIData(oldp+469,(0x24U),32);
    bufp->fullIData(oldp+470,(0x22U),32);
    bufp->fullBit(oldp+471,(1U));
    bufp->fullIData(oldp+472,(0x80000000U),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<9>/*287:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<9>/*287:0*/ __Vtemp_20;
    VlWide<8>/*255:0*/ __Vtemp_26;
    VlWide<18>/*575:0*/ __Vtemp_29;
    VlWide<5>/*159:0*/ __Vtemp_32;
    VlWide<5>/*159:0*/ __Vtemp_35;
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[0]),8);
    bufp->fullCData(oldp+2,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[1]),8);
    bufp->fullCData(oldp+3,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[2]),8);
    bufp->fullCData(oldp+4,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[3]),8);
    bufp->fullCData(oldp+5,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[4]),8);
    bufp->fullCData(oldp+6,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[5]),8);
    bufp->fullCData(oldp+7,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__key_list[6]),8);
    bufp->fullCData(oldp+8,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__pair_list[0]),6);
    bufp->fullCData(oldp+9,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__pair_list[1]),6);
    bufp->fullCData(oldp+10,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__pair_list[2]),6);
    bufp->fullCData(oldp+11,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__pair_list[3]),6);
    bufp->fullCData(oldp+12,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+13,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+14,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+15,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+16,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+17,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+18,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+19,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__data_list[3]),4);
    bufp->fullCData(oldp+20,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__key_list[0]),8);
    bufp->fullCData(oldp+21,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__key_list[1]),8);
    bufp->fullCData(oldp+22,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list[0]),8);
    bufp->fullCData(oldp+23,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list[1]),8);
    bufp->fullCData(oldp+24,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list[2]),8);
    bufp->fullCData(oldp+25,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__key_list[3]),8);
    bufp->fullCData(oldp+26,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__key_list[0]),8);
    bufp->fullCData(oldp+27,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__key_list[1]),8);
    bufp->fullIData(oldp+28,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[0]),20);
    bufp->fullIData(oldp+29,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[1]),20);
    bufp->fullIData(oldp+30,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[2]),20);
    bufp->fullIData(oldp+31,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[3]),20);
    bufp->fullIData(oldp+32,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[4]),20);
    bufp->fullIData(oldp+33,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[5]),20);
    bufp->fullIData(oldp+34,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[6]),20);
    bufp->fullIData(oldp+35,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[7]),20);
    bufp->fullIData(oldp+36,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[8]),20);
    bufp->fullIData(oldp+37,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[9]),20);
    bufp->fullIData(oldp+38,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[10]),20);
    bufp->fullIData(oldp+39,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[11]),20);
    bufp->fullIData(oldp+40,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[12]),20);
    bufp->fullIData(oldp+41,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[13]),20);
    bufp->fullIData(oldp+42,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[14]),20);
    bufp->fullIData(oldp+43,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__pair_list[15]),20);
    bufp->fullCData(oldp+44,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+45,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+46,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+47,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[3]),4);
    bufp->fullCData(oldp+48,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[4]),4);
    bufp->fullCData(oldp+49,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[5]),4);
    bufp->fullCData(oldp+50,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[6]),4);
    bufp->fullCData(oldp+51,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[7]),4);
    bufp->fullCData(oldp+52,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[8]),4);
    bufp->fullCData(oldp+53,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[9]),4);
    bufp->fullCData(oldp+54,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[10]),4);
    bufp->fullCData(oldp+55,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[11]),4);
    bufp->fullCData(oldp+56,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[12]),4);
    bufp->fullCData(oldp+57,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[13]),4);
    bufp->fullCData(oldp+58,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[14]),4);
    bufp->fullCData(oldp+59,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__key_list[15]),4);
    bufp->fullSData(oldp+60,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[0]),16);
    bufp->fullSData(oldp+61,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[1]),16);
    bufp->fullSData(oldp+62,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[2]),16);
    bufp->fullSData(oldp+63,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[3]),16);
    bufp->fullSData(oldp+64,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[4]),16);
    bufp->fullSData(oldp+65,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[5]),16);
    bufp->fullSData(oldp+66,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[6]),16);
    bufp->fullSData(oldp+67,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[7]),16);
    bufp->fullSData(oldp+68,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[8]),16);
    bufp->fullSData(oldp+69,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[9]),16);
    bufp->fullSData(oldp+70,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[10]),16);
    bufp->fullSData(oldp+71,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[11]),16);
    bufp->fullSData(oldp+72,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[12]),16);
    bufp->fullSData(oldp+73,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[13]),16);
    bufp->fullSData(oldp+74,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[14]),16);
    bufp->fullSData(oldp+75,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__data_list[15]),16);
    bufp->fullCData(oldp+76,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+77,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+78,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+79,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[3]),4);
    bufp->fullCData(oldp+80,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[4]),4);
    bufp->fullCData(oldp+81,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[5]),4);
    bufp->fullCData(oldp+82,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[6]),4);
    bufp->fullCData(oldp+83,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[7]),4);
    bufp->fullCData(oldp+84,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[8]),4);
    bufp->fullCData(oldp+85,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[9]),4);
    bufp->fullCData(oldp+86,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[10]),4);
    bufp->fullCData(oldp+87,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[11]),4);
    bufp->fullCData(oldp+88,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[12]),4);
    bufp->fullCData(oldp+89,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[13]),4);
    bufp->fullCData(oldp+90,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[14]),4);
    bufp->fullCData(oldp+91,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__key_list[15]),4);
    bufp->fullCData(oldp+92,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+93,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+94,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+95,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[3]),4);
    bufp->fullCData(oldp+96,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[4]),4);
    bufp->fullCData(oldp+97,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[5]),4);
    bufp->fullCData(oldp+98,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[6]),4);
    bufp->fullCData(oldp+99,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[7]),4);
    bufp->fullCData(oldp+100,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[8]),4);
    bufp->fullCData(oldp+101,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[9]),4);
    bufp->fullCData(oldp+102,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[10]),4);
    bufp->fullCData(oldp+103,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[11]),4);
    bufp->fullCData(oldp+104,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[12]),4);
    bufp->fullCData(oldp+105,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[13]),4);
    bufp->fullCData(oldp+106,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[14]),4);
    bufp->fullCData(oldp+107,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__key_list[15]),4);
    bufp->fullCData(oldp+108,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+109,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+110,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+111,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+112,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+113,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+114,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+115,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__key_list[3]),2);
    bufp->fullIData(oldp+116,((0xfffffffeU & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)),32);
    bufp->fullIData(oldp+117,(vlSelfRef.top__DOT__imm),32);
    bufp->fullCData(oldp+118,((0x1fU & (vlSelfRef.top__DOT__inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+119,((0x1fU & (vlSelfRef.top__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+120,((0x1fU & (vlSelfRef.top__DOT__inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+121,(vlSelfRef.top__DOT__is_what),8);
    bufp->fullIData(oldp+122,(vlSelfRef.top__DOT__inst),32);
    bufp->fullIData(oldp+123,(vlSelfRef.top__DOT__instfu__DOT__q),32);
    bufp->fullIData(oldp+124,(vlSelfRef.top__DOT__rdata1),32);
    bufp->fullIData(oldp+125,(vlSelfRef.top__DOT__rdata2),32);
    bufp->fullCData(oldp+126,((3U & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)),2);
    bufp->fullIData(oldp+127,(((IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_1)
                                ? vlSelfRef.top__DOT__inst_store__DOT__rdata
                                : ((IData)(vlSelfRef.top__DOT____VdfgRegularize_h245778ca_0_0)
                                    ? vlSelfRef.top__DOT__inst_store__DOT__rdatabyte
                                    : 0U))),32);
    bufp->fullIData(oldp+128,(vlSelfRef.top__DOT__raddrM),32);
    bufp->fullIData(oldp+129,(vlSelfRef.top__DOT__waddrM),32);
    bufp->fullCData(oldp+130,(vlSelfRef.top__DOT__wmask),4);
    bufp->fullIData(oldp+131,(vlSelfRef.top__DOT__result),32);
    bufp->fullIData(oldp+132,(vlSelfRef.top__DOT__wb_data),32);
    bufp->fullIData(oldp+133,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg10____pinNumber4),32);
    bufp->fullBit(oldp+134,((0x100073U == vlSelfRef.top__DOT__inst)));
    bufp->fullSData(oldp+135,((vlSelfRef.top__DOT__inst 
                               >> 0x14U)),12);
    bufp->fullSData(oldp+136,(((0xfe0U & (vlSelfRef.top__DOT__inst 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelfRef.top__DOT__inst 
                                           >> 7U)))),12);
    bufp->fullIData(oldp+137,((vlSelfRef.top__DOT__inst 
                               >> 0xcU)),20);
    __Vtemp_4[2U] = (((IData)((0x200000000010ULL | 
                               ((QData)((IData)((((- (IData)(
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
                         >> 0x18U) | ((IData)(((8ULL 
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
                                       << 8U))) << 8U) 
                     | (IData)(((((QData)((IData)((0xfffffU 
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
                                                                        << 1U))))))) 
                                >> 0x20U)));
    __Vtemp_6[3U] = __Vtemp_4[2U];
    __Vtemp_6[4U] = (((IData)((0x200000000010ULL | 
                               ((QData)((IData)((((- (IData)(
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
                     | (vlSelfRef.top__DOT__inst >> 0x14U));
    __Vtemp_6[6U] = (IData)((0x800000000040ULL | ((QData)((IData)(
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
    bufp->fullWData(oldp+138,(__Vtemp_6),280);
    bufp->fullQData(oldp+147,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[0]),40);
    bufp->fullQData(oldp+149,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[1]),40);
    bufp->fullQData(oldp+151,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[2]),40);
    bufp->fullQData(oldp+153,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[3]),40);
    bufp->fullQData(oldp+155,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[4]),40);
    bufp->fullQData(oldp+157,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[5]),40);
    bufp->fullQData(oldp+159,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__pair_list[6]),40);
    bufp->fullIData(oldp+161,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+162,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+163,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+164,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+165,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+166,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+167,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+168,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+169,(vlSelfRef.top__DOT__inst_du__DOT__immMux__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+170,(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi),32);
    bufp->fullIData(oldp+171,(((IData)(4U) + vlSelfRef.top__DOT__instfu__DOT__q)),32);
    bufp->fullIData(oldp+172,(vlSelfRef.top__DOT__inst_exu__DOT__sum_add),32);
    bufp->fullIData(oldp+173,((0xfffffffcU & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)),32);
    bufp->fullCData(oldp+174,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+175,(vlSelfRef.top__DOT__inst_exu__DOT__maskmux__DOT__i0__DOT__hit));
    __Vtemp_8[0U] = (IData)((0x1000000000ULL | (QData)((IData)(
                                                               (0xfffffffcU 
                                                                & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)))));
    __Vtemp_8[1U] = ((0xfffffc00U & (vlSelfRef.top__DOT__inst_exu__DOT__sum_addi 
                                     << 8U)) | (IData)(
                                                       ((0x1000000000ULL 
                                                         | (QData)((IData)(
                                                                           (0xfffffffcU 
                                                                            & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)))) 
                                                        >> 0x20U)));
    __Vtemp_8[2U] = (0x2000U | (vlSelfRef.top__DOT__inst_exu__DOT__sum_addi 
                                >> 0x18U));
    bufp->fullWData(oldp+176,(__Vtemp_8),80);
    bufp->fullQData(oldp+179,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__pair_list[0]),40);
    bufp->fullQData(oldp+181,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__pair_list[1]),40);
    bufp->fullIData(oldp+183,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+184,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+185,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+186,(vlSelfRef.top__DOT__inst_exu__DOT__raddrMMux__DOT__i0__DOT__hit));
    __Vtemp_11[0U] = vlSelfRef.top__DOT__inst_exu__DOT__sum_add;
    __Vtemp_11[1U] = (IData)((1ULL | ((QData)((IData)(
                                                      ((IData)(4U) 
                                                       + vlSelfRef.top__DOT__instfu__DOT__q))) 
                                      << 8U)));
    __Vtemp_11[2U] = (((IData)((0x40ULL | ((QData)((IData)(vlSelfRef.top__DOT__imm)) 
                                           << 8U))) 
                       << 8U) | (IData)(((1ULL | ((QData)((IData)(
                                                                  ((IData)(4U) 
                                                                   + vlSelfRef.top__DOT__instfu__DOT__q))) 
                                                  << 8U)) 
                                         >> 0x20U)));
    __Vtemp_11[3U] = (((IData)((0x20000000080ULL | 
                                ((QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)) 
                                 << 8U))) << 0x10U) 
                      | (((IData)((0x40ULL | ((QData)((IData)(vlSelfRef.top__DOT__imm)) 
                                              << 8U))) 
                          >> 0x18U) | ((IData)(((0x40ULL 
                                                 | ((QData)((IData)(vlSelfRef.top__DOT__imm)) 
                                                    << 8U)) 
                                                >> 0x20U)) 
                                       << 8U)));
    __Vtemp_11[4U] = (((IData)((0x20000000080ULL | 
                                ((QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)) 
                                 << 8U))) >> 0x10U) 
                      | ((IData)(((0x20000000080ULL 
                                   | ((QData)((IData)(vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)) 
                                      << 8U)) >> 0x20U)) 
                         << 0x10U));
    bufp->fullWData(oldp+187,(__Vtemp_11),160);
    bufp->fullQData(oldp+192,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__pair_list[0]),40);
    bufp->fullQData(oldp+194,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__pair_list[1]),40);
    bufp->fullQData(oldp+196,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__pair_list[2]),40);
    bufp->fullQData(oldp+198,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__pair_list[3]),40);
    bufp->fullIData(oldp+200,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+201,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+202,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+203,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+204,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+205,(vlSelfRef.top__DOT__inst_exu__DOT__resultMux__DOT__i0__DOT__hit));
    __Vtemp_13[0U] = (IData)((0x400000000ULL | (QData)((IData)(
                                                               (0xfffffffcU 
                                                                & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)))));
    __Vtemp_13[1U] = ((0xfffffc00U & (vlSelfRef.top__DOT__inst_exu__DOT__sum_addi 
                                      << 8U)) | (IData)(
                                                        ((0x400000000ULL 
                                                          | (QData)((IData)(
                                                                            (0xfffffffcU 
                                                                             & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)))) 
                                                         >> 0x20U)));
    __Vtemp_13[2U] = (0x800U | (vlSelfRef.top__DOT__inst_exu__DOT__sum_addi 
                                >> 0x18U));
    bufp->fullWData(oldp+206,(__Vtemp_13),80);
    bufp->fullQData(oldp+209,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__pair_list[0]),40);
    bufp->fullQData(oldp+211,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__pair_list[1]),40);
    bufp->fullIData(oldp+213,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+214,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+215,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+216,(vlSelfRef.top__DOT__inst_exu__DOT__waddrMMux__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+217,(vlSelfRef.top__DOT__inst_gpr__DOT__sign),16);
    bufp->fullBit(oldp+218,(vlSelfRef.top__DOT__inst_gpr__DOT__wen));
    bufp->fullIData(oldp+219,(vlSelfRef.top__DOT__inst_gpr__DOT__out[0]),32);
    bufp->fullIData(oldp+220,(vlSelfRef.top__DOT__inst_gpr__DOT__out[1]),32);
    bufp->fullIData(oldp+221,(vlSelfRef.top__DOT__inst_gpr__DOT__out[2]),32);
    bufp->fullIData(oldp+222,(vlSelfRef.top__DOT__inst_gpr__DOT__out[3]),32);
    bufp->fullIData(oldp+223,(vlSelfRef.top__DOT__inst_gpr__DOT__out[4]),32);
    bufp->fullIData(oldp+224,(vlSelfRef.top__DOT__inst_gpr__DOT__out[5]),32);
    bufp->fullIData(oldp+225,(vlSelfRef.top__DOT__inst_gpr__DOT__out[6]),32);
    bufp->fullIData(oldp+226,(vlSelfRef.top__DOT__inst_gpr__DOT__out[7]),32);
    bufp->fullIData(oldp+227,(vlSelfRef.top__DOT__inst_gpr__DOT__out[8]),32);
    bufp->fullIData(oldp+228,(vlSelfRef.top__DOT__inst_gpr__DOT__out[9]),32);
    bufp->fullIData(oldp+229,(vlSelfRef.top__DOT__inst_gpr__DOT__out[10]),32);
    bufp->fullIData(oldp+230,(vlSelfRef.top__DOT__inst_gpr__DOT__out[11]),32);
    bufp->fullIData(oldp+231,(vlSelfRef.top__DOT__inst_gpr__DOT__out[12]),32);
    bufp->fullIData(oldp+232,(vlSelfRef.top__DOT__inst_gpr__DOT__out[13]),32);
    bufp->fullIData(oldp+233,(vlSelfRef.top__DOT__inst_gpr__DOT__out[14]),32);
    bufp->fullIData(oldp+234,(vlSelfRef.top__DOT__inst_gpr__DOT__out[15]),32);
    bufp->fullCData(oldp+235,((0xfU & (vlSelfRef.top__DOT__inst 
                                       >> 7U))),4);
    bufp->fullSData(oldp+236,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__lut_out),16);
    bufp->fullBit(oldp+237,(vlSelfRef.top__DOT__inst_gpr__DOT__decd__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+238,((0xfU & (vlSelfRef.top__DOT__inst 
                                       >> 0xfU))),4);
    __Vtemp_20[5U] = (((IData)((3ULL | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg2____pinNumber4)) 
                                        << 4U))) << 0x10U) 
                      | (((0xffU & ((IData)((4ULL | 
                                             ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg3____pinNumber4)) 
                                              << 4U))) 
                                    >> 0x14U)) | ((IData)(
                                                          ((5ULL 
                                                            | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg4____pinNumber4)) 
                                                               << 4U)) 
                                                           >> 0x20U)) 
                                                  >> 0x18U)) 
                         | ((0xf00U & ((IData)((4ULL 
                                                | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg3____pinNumber4)) 
                                                   << 4U))) 
                                       >> 0x14U)) | 
                            ((IData)(((4ULL | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg3____pinNumber4)) 
                                               << 4U)) 
                                      >> 0x20U)) << 0xcU))));
    __Vtemp_20[7U] = (((0xffffU & ((IData)((2ULL | 
                                            ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg1____pinNumber4)) 
                                             << 4U))) 
                                   >> 0xcU)) | ((IData)(
                                                        ((3ULL 
                                                          | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg2____pinNumber4)) 
                                                             << 4U)) 
                                                         >> 0x20U)) 
                                                >> 0x10U)) 
                      | (((IData)((1ULL | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg0____pinNumber4)) 
                                           << 4U))) 
                          << 0x18U) | ((0xf0000U & 
                                        ((IData)((2ULL 
                                                  | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg1____pinNumber4)) 
                                                     << 4U))) 
                                         >> 0xcU)) 
                                       | ((IData)((
                                                   (2ULL 
                                                    | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg1____pinNumber4)) 
                                                       << 4U)) 
                                                   >> 0x20U)) 
                                          << 0x14U))));
    __Vtemp_20[8U] = ((0xffffU & (((IData)((1ULL | 
                                            ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg0____pinNumber4)) 
                                             << 4U))) 
                                   >> 8U) | ((IData)(
                                                     ((2ULL 
                                                       | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg1____pinNumber4)) 
                                                          << 4U)) 
                                                      >> 0x20U)) 
                                             >> 0xcU))) 
                      | ((0xff0000U & ((IData)((1ULL 
                                                | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg0____pinNumber4)) 
                                                   << 4U))) 
                                       >> 8U)) | ((IData)(
                                                          ((1ULL 
                                                            | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg0____pinNumber4)) 
                                                               << 4U)) 
                                                           >> 0x20U)) 
                                                  << 0x18U)));
    __Vtemp_26[4U] = (((IData)((0xbULL | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg10____pinNumber4)) 
                                          << 4U))) 
                       << 0x10U) | (((0xffU & ((IData)(
                                                       (0xcULL 
                                                        | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg11____pinNumber4)) 
                                                           << 4U))) 
                                               >> 0x14U)) 
                                     | ((IData)(((0xdULL 
                                                  | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg12____pinNumber4)) 
                                                     << 4U)) 
                                                 >> 0x20U)) 
                                        >> 0x18U)) 
                                    | ((0xf00U & ((IData)(
                                                          (0xcULL 
                                                           | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg11____pinNumber4)) 
                                                              << 4U))) 
                                                  >> 0x14U)) 
                                       | ((IData)((
                                                   (0xcULL 
                                                    | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg11____pinNumber4)) 
                                                       << 4U)) 
                                                   >> 0x20U)) 
                                          << 0xcU))));
    __Vtemp_26[6U] = (((0xffffU & ((IData)((0xaULL 
                                            | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg9____pinNumber4)) 
                                               << 4U))) 
                                   >> 0xcU)) | ((IData)(
                                                        ((0xbULL 
                                                          | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg10____pinNumber4)) 
                                                             << 4U)) 
                                                         >> 0x20U)) 
                                                >> 0x10U)) 
                      | (((IData)((0x8000000009ULL 
                                   | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg8____pinNumber4)) 
                                      << 4U))) << 0x18U) 
                         | ((0xf0000U & ((IData)((0xaULL 
                                                  | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg9____pinNumber4)) 
                                                     << 4U))) 
                                         >> 0xcU)) 
                            | ((IData)(((0xaULL | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg9____pinNumber4)) 
                                                   << 4U)) 
                                        >> 0x20U)) 
                               << 0x14U))));
    __Vtemp_26[7U] = ((0xffffU & (((IData)((0x8000000009ULL 
                                            | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg8____pinNumber4)) 
                                               << 4U))) 
                                   >> 8U) | ((IData)(
                                                     ((0xaULL 
                                                       | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg9____pinNumber4)) 
                                                          << 4U)) 
                                                      >> 0x20U)) 
                                             >> 0xcU))) 
                      | ((0xff0000U & ((IData)((0x8000000009ULL 
                                                | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg8____pinNumber4)) 
                                                   << 4U))) 
                                       >> 8U)) | ((IData)(
                                                          ((0x8000000009ULL 
                                                            | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg8____pinNumber4)) 
                                                               << 4U)) 
                                                           >> 0x20U)) 
                                                  << 0x18U)));
    __Vtemp_29[0U] = vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg15____pinNumber4;
    __Vtemp_29[1U] = (IData)((0xfULL | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg14____pinNumber4)) 
                                        << 4U)));
    __Vtemp_29[2U] = (((IData)((0xeULL | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg13____pinNumber4)) 
                                          << 4U))) 
                       << 4U) | (IData)(((0xfULL | 
                                          ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg14____pinNumber4)) 
                                           << 4U)) 
                                         >> 0x20U)));
    __Vtemp_29[3U] = (((IData)((0xdULL | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg12____pinNumber4)) 
                                          << 4U))) 
                       << 8U) | (((IData)((0xeULL | 
                                           ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg13____pinNumber4)) 
                                            << 4U))) 
                                  >> 0x1cU) | ((IData)(
                                                       ((0xeULL 
                                                         | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg13____pinNumber4)) 
                                                            << 4U)) 
                                                        >> 0x20U)) 
                                               << 4U)));
    __Vtemp_29[4U] = (((IData)((0xdULL | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg12____pinNumber4)) 
                                          << 4U))) 
                       >> 0x18U) | (((IData)((0xcULL 
                                              | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg11____pinNumber4)) 
                                                 << 4U))) 
                                     << 0xcU) | ((IData)(
                                                         ((0xdULL 
                                                           | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg12____pinNumber4)) 
                                                              << 4U)) 
                                                          >> 0x20U)) 
                                                 << 8U)));
    __Vtemp_29[5U] = __Vtemp_26[4U];
    __Vtemp_29[6U] = (((IData)((0xbULL | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg10____pinNumber4)) 
                                          << 4U))) 
                       >> 0x10U) | (((IData)((0xaULL 
                                              | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg9____pinNumber4)) 
                                                 << 4U))) 
                                     << 0x14U) | ((IData)(
                                                          ((0xbULL 
                                                            | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg10____pinNumber4)) 
                                                               << 4U)) 
                                                           >> 0x20U)) 
                                                  << 0x10U)));
    __Vtemp_29[7U] = __Vtemp_26[6U];
    __Vtemp_29[8U] = __Vtemp_26[7U];
    __Vtemp_29[9U] = (IData)((0x700000000ULL | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg7____pinNumber4))));
    __Vtemp_29[0xaU] = ((vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg6____pinNumber4 
                         << 4U) | (IData)(((0x700000000ULL 
                                            | (QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg7____pinNumber4))) 
                                           >> 0x20U)));
    __Vtemp_29[0xbU] = (((IData)((6ULL | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg5____pinNumber4)) 
                                          << 4U))) 
                         << 4U) | (vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg6____pinNumber4 
                                   >> 0x1cU));
    __Vtemp_29[0xcU] = (((IData)((5ULL | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg4____pinNumber4)) 
                                          << 4U))) 
                         << 8U) | (((IData)((6ULL | 
                                             ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg5____pinNumber4)) 
                                              << 4U))) 
                                    >> 0x1cU) | ((IData)(
                                                         ((6ULL 
                                                           | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg5____pinNumber4)) 
                                                              << 4U)) 
                                                          >> 0x20U)) 
                                                 << 4U)));
    __Vtemp_29[0xdU] = (((IData)((5ULL | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg4____pinNumber4)) 
                                          << 4U))) 
                         >> 0x18U) | (((IData)((4ULL 
                                                | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg3____pinNumber4)) 
                                                   << 4U))) 
                                       << 0xcU) | ((IData)(
                                                           ((5ULL 
                                                             | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg4____pinNumber4)) 
                                                                << 4U)) 
                                                            >> 0x20U)) 
                                                   << 8U)));
    __Vtemp_29[0xeU] = __Vtemp_20[5U];
    __Vtemp_29[0xfU] = (((IData)((3ULL | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg2____pinNumber4)) 
                                          << 4U))) 
                         >> 0x10U) | (((IData)((2ULL 
                                                | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg1____pinNumber4)) 
                                                   << 4U))) 
                                       << 0x14U) | 
                                      ((IData)(((3ULL 
                                                 | ((QData)((IData)(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg2____pinNumber4)) 
                                                    << 4U)) 
                                                >> 0x20U)) 
                                       << 0x10U)));
    __Vtemp_29[0x10U] = __Vtemp_20[7U];
    __Vtemp_29[0x11U] = __Vtemp_20[8U];
    bufp->fullWData(oldp+239,(__Vtemp_29),576);
    bufp->fullQData(oldp+257,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+259,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+261,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+263,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+265,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+267,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[5]),36);
    bufp->fullQData(oldp+269,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[6]),36);
    bufp->fullQData(oldp+271,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[7]),36);
    bufp->fullQData(oldp+273,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[8]),36);
    bufp->fullQData(oldp+275,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[9]),36);
    bufp->fullQData(oldp+277,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[10]),36);
    bufp->fullQData(oldp+279,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[11]),36);
    bufp->fullQData(oldp+281,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[12]),36);
    bufp->fullQData(oldp+283,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[13]),36);
    bufp->fullQData(oldp+285,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[14]),36);
    bufp->fullQData(oldp+287,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__pair_list[15]),36);
    bufp->fullIData(oldp+289,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+290,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+291,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+292,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+293,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+294,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+295,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+296,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+297,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+298,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+299,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[10]),32);
    bufp->fullIData(oldp+300,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[11]),32);
    bufp->fullIData(oldp+301,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[12]),32);
    bufp->fullIData(oldp+302,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[13]),32);
    bufp->fullIData(oldp+303,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[14]),32);
    bufp->fullIData(oldp+304,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__data_list[15]),32);
    bufp->fullIData(oldp+305,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+306,(vlSelfRef.top__DOT__inst_gpr__DOT__mux1__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+307,((0xfU & (vlSelfRef.top__DOT__inst 
                                       >> 0x14U))),4);
    bufp->fullQData(oldp+308,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+310,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+312,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+314,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+316,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+318,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[5]),36);
    bufp->fullQData(oldp+320,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[6]),36);
    bufp->fullQData(oldp+322,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[7]),36);
    bufp->fullQData(oldp+324,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[8]),36);
    bufp->fullQData(oldp+326,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[9]),36);
    bufp->fullQData(oldp+328,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[10]),36);
    bufp->fullQData(oldp+330,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[11]),36);
    bufp->fullQData(oldp+332,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[12]),36);
    bufp->fullQData(oldp+334,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[13]),36);
    bufp->fullQData(oldp+336,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[14]),36);
    bufp->fullQData(oldp+338,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__pair_list[15]),36);
    bufp->fullIData(oldp+340,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+341,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+342,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+343,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+344,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+345,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+346,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+347,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+348,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+349,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+350,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[10]),32);
    bufp->fullIData(oldp+351,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[11]),32);
    bufp->fullIData(oldp+352,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[12]),32);
    bufp->fullIData(oldp+353,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[13]),32);
    bufp->fullIData(oldp+354,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[14]),32);
    bufp->fullIData(oldp+355,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__data_list[15]),32);
    bufp->fullIData(oldp+356,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+357,(vlSelfRef.top__DOT__inst_gpr__DOT__mux2__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+358,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg0____pinNumber4),32);
    bufp->fullBit(oldp+359,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellinp__reg0____pinNumber5));
    bufp->fullIData(oldp+360,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg1____pinNumber4),32);
    bufp->fullBit(oldp+361,((((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__sign) 
                              >> 0xaU) & (IData)(vlSelfRef.top__DOT__inst_gpr__DOT__wen))));
    bufp->fullIData(oldp+362,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg11____pinNumber4),32);
    bufp->fullBit(oldp+363,((((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__sign) 
                              >> 0xbU) & (IData)(vlSelfRef.top__DOT__inst_gpr__DOT__wen))));
    bufp->fullIData(oldp+364,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg12____pinNumber4),32);
    bufp->fullBit(oldp+365,((((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__sign) 
                              >> 0xcU) & (IData)(vlSelfRef.top__DOT__inst_gpr__DOT__wen))));
    bufp->fullIData(oldp+366,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg13____pinNumber4),32);
    bufp->fullBit(oldp+367,((((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__sign) 
                              >> 0xdU) & (IData)(vlSelfRef.top__DOT__inst_gpr__DOT__wen))));
    bufp->fullIData(oldp+368,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg14____pinNumber4),32);
    bufp->fullBit(oldp+369,((((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__sign) 
                              >> 0xeU) & (IData)(vlSelfRef.top__DOT__inst_gpr__DOT__wen))));
    bufp->fullIData(oldp+370,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg15____pinNumber4),32);
    bufp->fullBit(oldp+371,((((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__sign) 
                              >> 0xfU) & (IData)(vlSelfRef.top__DOT__inst_gpr__DOT__wen))));
    bufp->fullIData(oldp+372,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg2____pinNumber4),32);
    bufp->fullBit(oldp+373,((((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__sign) 
                              >> 2U) & (IData)(vlSelfRef.top__DOT__inst_gpr__DOT__wen))));
    bufp->fullIData(oldp+374,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg3____pinNumber4),32);
    bufp->fullBit(oldp+375,((((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__sign) 
                              >> 3U) & (IData)(vlSelfRef.top__DOT__inst_gpr__DOT__wen))));
    bufp->fullIData(oldp+376,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg4____pinNumber4),32);
    bufp->fullBit(oldp+377,((((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__sign) 
                              >> 4U) & (IData)(vlSelfRef.top__DOT__inst_gpr__DOT__wen))));
    bufp->fullIData(oldp+378,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg5____pinNumber4),32);
    bufp->fullBit(oldp+379,((((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__sign) 
                              >> 5U) & (IData)(vlSelfRef.top__DOT__inst_gpr__DOT__wen))));
    bufp->fullIData(oldp+380,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg6____pinNumber4),32);
    bufp->fullBit(oldp+381,((((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__sign) 
                              >> 6U) & (IData)(vlSelfRef.top__DOT__inst_gpr__DOT__wen))));
    bufp->fullIData(oldp+382,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg7____pinNumber4),32);
    bufp->fullBit(oldp+383,((((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__sign) 
                              >> 7U) & (IData)(vlSelfRef.top__DOT__inst_gpr__DOT__wen))));
    bufp->fullIData(oldp+384,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg8____pinNumber4),32);
    bufp->fullBit(oldp+385,((((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__sign) 
                              >> 8U) & (IData)(vlSelfRef.top__DOT__inst_gpr__DOT__wen))));
    bufp->fullIData(oldp+386,(vlSelfRef.top__DOT__inst_gpr__DOT____Vcellout__reg9____pinNumber4),32);
    bufp->fullBit(oldp+387,((((IData)(vlSelfRef.top__DOT__inst_gpr__DOT__sign) 
                              >> 9U) & (IData)(vlSelfRef.top__DOT__inst_gpr__DOT__wen))));
    bufp->fullBit(oldp+388,(((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2) 
                             | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))));
    bufp->fullBit(oldp+389,(vlSelfRef.top__DOT____Vcellinp__inst_store____pinNumber7));
    bufp->fullIData(oldp+390,(vlSelfRef.top__DOT__inst_store__DOT__rdata),32);
    bufp->fullIData(oldp+391,(vlSelfRef.top__DOT__inst_store__DOT__rdatabyte),32);
    bufp->fullIData(oldp+392,(vlSelfRef.top__DOT__inst_store__DOT__wdatabt),32);
    bufp->fullIData(oldp+393,(((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)
                                ? 0xfU : (IData)(vlSelfRef.top__DOT__wmask))),32);
    bufp->fullIData(oldp+394,(((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)
                                ? vlSelfRef.top__DOT__inst_store__DOT__wdatabt
                                : vlSelfRef.top__DOT__rdata2)),32);
    __Vtemp_32[0U] = (IData)((0x300000000ULL | (QData)((IData)(
                                                               (vlSelfRef.top__DOT__inst_store__DOT__rdata 
                                                                >> 0x18U)))));
    __Vtemp_32[1U] = (((IData)((0x200000000ULL | (QData)((IData)(
                                                                 (0xffU 
                                                                  & (vlSelfRef.top__DOT__inst_store__DOT__rdata 
                                                                     >> 0x10U)))))) 
                       << 2U) | (IData)(((0x300000000ULL 
                                          | (QData)((IData)(
                                                            (vlSelfRef.top__DOT__inst_store__DOT__rdata 
                                                             >> 0x18U)))) 
                                         >> 0x20U)));
    __Vtemp_32[2U] = (((IData)((0x100000000ULL | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & vlSelfRef.top__DOT__inst_store__DOT__rdata))) 
                                                   << 0x22U) 
                                                  | (QData)((IData)(
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
    __Vtemp_32[3U] = (((IData)((0x100000000ULL | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & vlSelfRef.top__DOT__inst_store__DOT__rdata))) 
                                                   << 0x22U) 
                                                  | (QData)((IData)(
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
    __Vtemp_32[4U] = 0U;
    bufp->fullWData(oldp+395,(__Vtemp_32),136);
    bufp->fullQData(oldp+400,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+402,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+404,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+406,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+408,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+409,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+410,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+411,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+412,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+413,(vlSelfRef.top__DOT__inst_store__DOT__databyte__DOT__i0__DOT__hit));
    __Vtemp_35[0U] = (IData)((0x300000000ULL | (((QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelfRef.top__DOT__rdata2))) 
                                                 << 0x32U) 
                                                | (QData)((IData)(
                                                                  VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__rdata2, 0x18U))))));
    __Vtemp_35[1U] = (IData)(((0x300000000ULL | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & vlSelfRef.top__DOT__rdata2))) 
                                                  << 0x32U) 
                                                 | (QData)((IData)(
                                                                   VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__rdata2, 0x18U))))) 
                              >> 0x20U));
    __Vtemp_35[2U] = (8U | ((IData)((((QData)((IData)(
                                                      (0xffU 
                                                       & vlSelfRef.top__DOT__rdata2))) 
                                      << 0x1aU) | (QData)((IData)(
                                                                  (0x1000000U 
                                                                   | (0xffU 
                                                                      & vlSelfRef.top__DOT__rdata2)))))) 
                            << 0xcU));
    __Vtemp_35[3U] = (((IData)((((QData)((IData)((0xffU 
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
    __Vtemp_35[4U] = 0U;
    bufp->fullWData(oldp+414,(__Vtemp_35),136);
    bufp->fullQData(oldp+419,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+421,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+423,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+425,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+427,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+428,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+429,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+430,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+431,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+432,(vlSelfRef.top__DOT__inst_store__DOT__wdatabyte__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+433,(vlSelfRef.clk));
    bufp->fullBit(oldp+434,(vlSelfRef.rst));
    bufp->fullBit(oldp+435,(vlSelfRef.wen));
    bufp->fullIData(oldp+436,(vlSelfRef.ppc),32);
    bufp->fullBit(oldp+437,(vlSelfRef.isjump));
    bufp->fullIData(oldp+438,(((IData)(vlSelfRef.isjump)
                                ? (0xfffffffeU & vlSelfRef.top__DOT__inst_exu__DOT__sum_addi)
                                : ((IData)(4U) + vlSelfRef.top__DOT__instfu__DOT__q))),32);
}
