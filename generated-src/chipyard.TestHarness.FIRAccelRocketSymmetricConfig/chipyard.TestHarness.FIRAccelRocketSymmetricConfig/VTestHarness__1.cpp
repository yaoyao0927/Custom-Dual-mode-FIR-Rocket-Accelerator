// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__62(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__62\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 = 0U;
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:14621:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_0)) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_1)))) 
                               & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:14624: Assertion failed in %NTestHarness.ram.xbar\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 14624, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:14632:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                               & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_0)) 
                                     | (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_1)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:105 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:14645:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid))) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_0) 
                                      | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_1)))) 
                               & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:14648: Assertion failed in %NTestHarness.ram.xbar\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 14648, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:14656:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                               & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid) 
                                         | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid))) 
                                     | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_0) 
                                        | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_1)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:14669:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___T_10))) 
                               & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:14672: Assertion failed in %NTestHarness.ram.xbar\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 14672, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:14680:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                               & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid) 
                                         | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid))) 
                                     | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___T_10))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__63(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__63\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 = 0U;
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:24535:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)) 
                                   | (0xffU == (0xffU 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                                    ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_mask)
                                                    : 
                                                   ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                     << 0x1fU) 
                                                    | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                       >> 1U))))))) 
                               & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:24538: Assertion failed in %NTestHarness.ram.fragmenter_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 24538, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:24546:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                               & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)) 
                                     | (0xffU == (0xffU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                                      ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_mask)
                                                      : 
                                                     ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                       << 0x1fU) 
                                                      | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                         >> 1U))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:312 assert (!repeater.io.full || in_a.bits.mask === fullMask)\n");
        }
    }
    vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1;
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:21896:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                      >> 2U))) & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:21899: Assertion failed in %NTestHarness.ram.fragmenter\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 21899, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:21907:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                               & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                     | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                        >> 2U))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:309 assert (!repeater.io.full || !aHasData)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:21919:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                   | (0xffU == (0xffU 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                                    ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                                    : 
                                                   ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                     << 0x1fU) 
                                                    | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                       >> 1U))))))) 
                               & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:21922: Assertion failed in %NTestHarness.ram.fragmenter\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 21922, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:21930:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                               & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                     | (0xffU == (0xffU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                                      ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                                      : 
                                                     ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                       << 0x1fU) 
                                                      | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                         >> 1U))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:312 assert (!repeater.io.full || in_a.bits.mask === fullMask)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__64(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__64\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp226[5];
    WData/*159:0*/ __Vtemp227[5];
    WData/*159:0*/ __Vtemp228[5];
    WData/*159:0*/ __Vtemp229[5];
    WData/*639:0*/ __Vtemp234[20];
    WData/*639:0*/ __Vtemp235[20];
    WData/*639:0*/ __Vtemp240[20];
    WData/*639:0*/ __Vtemp241[20];
    WData/*639:0*/ __Vtemp246[20];
    WData/*639:0*/ __Vtemp247[20];
    WData/*639:0*/ __Vtemp252[20];
    WData/*639:0*/ __Vtemp253[20];
    WData/*639:0*/ __Vtemp258[20];
    WData/*639:0*/ __Vtemp259[20];
    WData/*639:0*/ __Vtemp264[20];
    WData/*639:0*/ __Vtemp265[20];
    WData/*639:0*/ __Vtemp270[20];
    WData/*639:0*/ __Vtemp271[20];
    WData/*639:0*/ __Vtemp276[20];
    WData/*639:0*/ __Vtemp277[20];
    WData/*639:0*/ __Vtemp280[20];
    WData/*639:0*/ __Vtemp283[20];
    WData/*639:0*/ __Vtemp284[20];
    WData/*639:0*/ __Vtemp287[20];
    WData/*639:0*/ __Vtemp290[20];
    WData/*639:0*/ __Vtemp291[20];
    WData/*255:0*/ __Vtemp292[8];
    WData/*255:0*/ __Vtemp293[8];
    WData/*255:0*/ __Vtemp298[8];
    WData/*255:0*/ __Vtemp299[8];
    WData/*255:0*/ __Vtemp304[8];
    WData/*255:0*/ __Vtemp305[8];
    WData/*255:0*/ __Vtemp310[8];
    WData/*255:0*/ __Vtemp311[8];
    WData/*255:0*/ __Vtemp316[8];
    WData/*255:0*/ __Vtemp317[8];
    WData/*255:0*/ __Vtemp322[8];
    WData/*255:0*/ __Vtemp323[8];
    WData/*159:0*/ __Vtemp328[5];
    WData/*159:0*/ __Vtemp329[5];
    WData/*639:0*/ __Vtemp332[20];
    WData/*639:0*/ __Vtemp335[20];
    WData/*639:0*/ __Vtemp336[20];
    WData/*639:0*/ __Vtemp339[20];
    WData/*639:0*/ __Vtemp342[20];
    WData/*639:0*/ __Vtemp343[20];
    // Body
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15185:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15188: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15188, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15196:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15209:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15212: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15212, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15220:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15233:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15236: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15236, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15244:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15257:11
done_reset        
    ) {
        if (VL_UNLIKELY(((3U > (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15260: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15260, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15268:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (3U > (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15281:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15284: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15284, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15292:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15305:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15308: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15308, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15316:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (2U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15329:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15332: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15332, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15340:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15353:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                           ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                           : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                              >> 9U)) & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                                         & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15356: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15356, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15364:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                             ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                             : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                >> 9U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15377:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15380: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15380, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15388:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15401:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15404: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15404, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15412:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15425:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15428: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15428, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15436:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15449:11
done_reset        
    ) {
        if (VL_UNLIKELY(((3U > (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15452: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15452, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15460:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (3U > (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15473:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15476: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15476, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15484:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15497:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15500: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15500, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15508:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (2U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15521:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15524: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15524, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15532:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15545:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15548: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15548, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15556:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15569:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                           ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                           : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                              >> 9U)) & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                                         & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15572: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15572, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15580:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                             ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                             : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                >> 9U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15593:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15596: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15596, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15604:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15617:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0x3ffff000U & (0x10000000U 
                                                ^ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15620: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15620, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15628:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (0x3ffff000U & (0x10000000U 
                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15641:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15644: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15644, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15652:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15665:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15668: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15668, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15676:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15689:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15692: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15692, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15700:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15713:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15716: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15716, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15724:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15737:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                           ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                           : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                              >> 9U)) & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                                         & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15740: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15740, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15748:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                             ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                             : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                >> 9U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15761:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                             & (0U == (0x3ffff000U 
                                       & (0x10000000U 
                                          ^ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15764: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15764, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15772:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                               & (0U == (0x3ffff000U 
                                         & (0x10000000U 
                                            ^ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15785:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15788: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15788, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15796:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15809:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15812: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15812, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15820:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15833:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15836: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15836, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15844:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15857:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15860: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15860, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15868:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15881:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                             & (0U == (0x3ffff000U 
                                       & (0x10000000U 
                                          ^ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15884: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15884, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15892:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                               & (0U == (0x3ffff000U 
                                         & (0x10000000U 
                                            ^ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15905:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15908: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15908, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15916:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15929:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15932: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15932, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15940:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15953:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15956: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15956, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15964:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15977:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15980: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 15980, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:15988:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16001:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16004: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16004, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16012:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16025:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16028: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16028, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16036:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16049:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16052: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16052, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16060:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16073:11
done_reset        
    ) {
        if (VL_UNLIKELY(((4U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16076: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16076, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16084:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (4U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16097:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16100: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16100, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16108:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16121:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16124: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16124, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16132:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16145:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16148: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16148, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16156:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16169:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16172: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16172, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16180:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16193:11
done_reset        
    ) {
        if (VL_UNLIKELY(((3U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16196: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16196, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16204:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (3U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16217:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16220: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16220, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16228:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16241:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16244: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16244, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16252:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16265:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16268: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16268, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16276:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16289:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16292: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16292, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16300:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16313:11
done_reset        
    ) {
        if (VL_UNLIKELY(((1U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16316: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16316, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16324:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (1U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16337:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16340: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16340, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16348:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16361:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                           ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                           : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                              >> 9U)) & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                                         & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16364: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16364, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16372:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                             ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                             : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                >> 9U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16385:11
done_reset        
    ) {
        if (VL_UNLIKELY(((6U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                         & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16388: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16388, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16396:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (6U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16409:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16412: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16412, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16420:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16433:11
done_reset        
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16436: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16436, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16444:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (3U > (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16457:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16460: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16460, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16468:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16481:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16484: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16484, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16492:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16505:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16508: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16508, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16516:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16529:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16532: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16532, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16540:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16553:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16556: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16556, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16564:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16577:11
done_reset        
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16580: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16580, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16588:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (3U > (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16601:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16604: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16604, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16612:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (2U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16625:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16628: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16628, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16636:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16649:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16652: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16652, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16660:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16673:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16676: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16676, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16684:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is denied (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16697:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16700: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16700, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16708:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16721:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16724: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16724, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16732:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16745:11
done_reset        
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16748: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16748, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16756:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (3U > (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16769:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16772: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16772, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16780:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (2U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16793:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16796: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16796, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16804:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16817:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16820: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16820, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16828:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16841:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16844: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16844, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16852:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16865:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16868: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16868, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16876:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16889:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16892: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16892, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16900:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16913:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16916: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16916, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16924:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16937:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16940: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16940, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16948:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is denied (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16961:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16964: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16964, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16972:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16985:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16988: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 16988, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:16996:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17009:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17012: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 17012, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17020:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17033:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17036: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 17036, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17044:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17057:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17060: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 17060, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17068:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17081:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17084: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 17084, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17092:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17105:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17108: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 17108, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17116:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17129:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17132: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 17132, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17140:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is denied (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17186:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17189: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 17189, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17197:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17210:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17213: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 17213, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17221:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17234:11
done_reset        
    ) {
        if (VL_UNLIKELY((((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17237: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 17237, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17245:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17258:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17261: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 17261, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17269:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17282:11
done_reset        
    ) {
        if (VL_UNLIKELY(((vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                          != vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__address) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17285: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 17285, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17293:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                            != vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__address)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17306:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode_1)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17309: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 17309, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17317:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17330:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__param_1)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17333: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 17333, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17341:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__param_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17354:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size_1)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17357: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 17357, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17365:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17378:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__source_1)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17381: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 17381, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17389:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__source_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17402:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__sink)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17405: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 17405, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17413:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__sink))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17426:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__denied)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17429: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 17429, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17437:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__denied))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17450:11
done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp226, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source));
        if (VL_UNLIKELY((__Vtemp226[0U] & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                           & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17453: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 17453, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17461:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp227, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source));
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & __Vtemp227[0U]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17474:11
done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp228, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY(((~ (__Vtemp228[0U] | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                               & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17477: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 17477, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17485:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp229, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ (__Vtemp229[0U] | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17498:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                              == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                   ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                            ? 4U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_30)))) 
                             | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                     ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                              ? 5U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_30)))))) 
                         & (((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                             & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17501: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 17501, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17509:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                           & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                              & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                 == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                     ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                              ? 4U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_30)))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                  == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                       ? 4U : ((6U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                                ? 5U
                                                : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_30))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17522:11
done_reset        
    ) {
        if (VL_UNLIKELY((((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                             & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17525: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 17525, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17533:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                           & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                              & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                 == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17546:11
done_reset        
    ) {
        __Vtemp234[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp234[1U] = 0U;
        __Vtemp234[2U] = 0U;
        __Vtemp234[3U] = 0U;
        __Vtemp234[4U] = 0U;
        __Vtemp234[5U] = 0U;
        __Vtemp234[6U] = 0U;
        __Vtemp234[7U] = 0U;
        __Vtemp234[8U] = 0U;
        __Vtemp234[9U] = 0U;
        __Vtemp234[0xaU] = 0U;
        __Vtemp234[0xbU] = 0U;
        __Vtemp234[0xcU] = 0U;
        __Vtemp234[0xdU] = 0U;
        __Vtemp234[0xeU] = 0U;
        __Vtemp234[0xfU] = 0U;
        __Vtemp234[0x10U] = 0U;
        __Vtemp234[0x11U] = 0U;
        __Vtemp234[0x12U] = 0U;
        __Vtemp234[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp235, __Vtemp234);
        __Vtemp240[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp240[1U] = 0U;
        __Vtemp240[2U] = 0U;
        __Vtemp240[3U] = 0U;
        __Vtemp240[4U] = 0U;
        __Vtemp240[5U] = 0U;
        __Vtemp240[6U] = 0U;
        __Vtemp240[7U] = 0U;
        __Vtemp240[8U] = 0U;
        __Vtemp240[9U] = 0U;
        __Vtemp240[0xaU] = 0U;
        __Vtemp240[0xbU] = 0U;
        __Vtemp240[0xcU] = 0U;
        __Vtemp240[0xdU] = 0U;
        __Vtemp240[0xeU] = 0U;
        __Vtemp240[0xfU] = 0U;
        __Vtemp240[0x10U] = 0U;
        __Vtemp240[0x11U] = 0U;
        __Vtemp240[0x12U] = 0U;
        __Vtemp240[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp241, __Vtemp240);
        __Vtemp246[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp246[1U] = 0U;
        __Vtemp246[2U] = 0U;
        __Vtemp246[3U] = 0U;
        __Vtemp246[4U] = 0U;
        __Vtemp246[5U] = 0U;
        __Vtemp246[6U] = 0U;
        __Vtemp246[7U] = 0U;
        __Vtemp246[8U] = 0U;
        __Vtemp246[9U] = 0U;
        __Vtemp246[0xaU] = 0U;
        __Vtemp246[0xbU] = 0U;
        __Vtemp246[0xcU] = 0U;
        __Vtemp246[0xdU] = 0U;
        __Vtemp246[0xeU] = 0U;
        __Vtemp246[0xfU] = 0U;
        __Vtemp246[0x10U] = 0U;
        __Vtemp246[0x11U] = 0U;
        __Vtemp246[0x12U] = 0U;
        __Vtemp246[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp247, __Vtemp246);
        __Vtemp252[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp252[1U] = 0U;
        __Vtemp252[2U] = 0U;
        __Vtemp252[3U] = 0U;
        __Vtemp252[4U] = 0U;
        __Vtemp252[5U] = 0U;
        __Vtemp252[6U] = 0U;
        __Vtemp252[7U] = 0U;
        __Vtemp252[8U] = 0U;
        __Vtemp252[9U] = 0U;
        __Vtemp252[0xaU] = 0U;
        __Vtemp252[0xbU] = 0U;
        __Vtemp252[0xcU] = 0U;
        __Vtemp252[0xdU] = 0U;
        __Vtemp252[0xeU] = 0U;
        __Vtemp252[0xfU] = 0U;
        __Vtemp252[0x10U] = 0U;
        __Vtemp252[0x11U] = 0U;
        __Vtemp252[0x12U] = 0U;
        __Vtemp252[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp253, __Vtemp252);
        if (VL_UNLIKELY(((~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                              == ((7U == (7U & __Vtemp235[0U]))
                                   ? 4U : ((6U == (7U 
                                                   & __Vtemp241[0U]))
                                            ? 4U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_46)))) 
                             | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == ((7U == (7U & __Vtemp247[0U]))
                                     ? 4U : ((6U == 
                                              (7U & 
                                               __Vtemp253[0U]))
                                              ? 5U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_46)))))) 
                         & (((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                             & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                      == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17549: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 17549, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17557:11
verbose&&done_reset        
    ) {
        __Vtemp258[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp258[1U] = 0U;
        __Vtemp258[2U] = 0U;
        __Vtemp258[3U] = 0U;
        __Vtemp258[4U] = 0U;
        __Vtemp258[5U] = 0U;
        __Vtemp258[6U] = 0U;
        __Vtemp258[7U] = 0U;
        __Vtemp258[8U] = 0U;
        __Vtemp258[9U] = 0U;
        __Vtemp258[0xaU] = 0U;
        __Vtemp258[0xbU] = 0U;
        __Vtemp258[0xcU] = 0U;
        __Vtemp258[0xdU] = 0U;
        __Vtemp258[0xeU] = 0U;
        __Vtemp258[0xfU] = 0U;
        __Vtemp258[0x10U] = 0U;
        __Vtemp258[0x11U] = 0U;
        __Vtemp258[0x12U] = 0U;
        __Vtemp258[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp259, __Vtemp258);
        __Vtemp264[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp264[1U] = 0U;
        __Vtemp264[2U] = 0U;
        __Vtemp264[3U] = 0U;
        __Vtemp264[4U] = 0U;
        __Vtemp264[5U] = 0U;
        __Vtemp264[6U] = 0U;
        __Vtemp264[7U] = 0U;
        __Vtemp264[8U] = 0U;
        __Vtemp264[9U] = 0U;
        __Vtemp264[0xaU] = 0U;
        __Vtemp264[0xbU] = 0U;
        __Vtemp264[0xcU] = 0U;
        __Vtemp264[0xdU] = 0U;
        __Vtemp264[0xeU] = 0U;
        __Vtemp264[0xfU] = 0U;
        __Vtemp264[0x10U] = 0U;
        __Vtemp264[0x11U] = 0U;
        __Vtemp264[0x12U] = 0U;
        __Vtemp264[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp265, __Vtemp264);
        __Vtemp270[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp270[1U] = 0U;
        __Vtemp270[2U] = 0U;
        __Vtemp270[3U] = 0U;
        __Vtemp270[4U] = 0U;
        __Vtemp270[5U] = 0U;
        __Vtemp270[6U] = 0U;
        __Vtemp270[7U] = 0U;
        __Vtemp270[8U] = 0U;
        __Vtemp270[9U] = 0U;
        __Vtemp270[0xaU] = 0U;
        __Vtemp270[0xbU] = 0U;
        __Vtemp270[0xcU] = 0U;
        __Vtemp270[0xdU] = 0U;
        __Vtemp270[0xeU] = 0U;
        __Vtemp270[0xfU] = 0U;
        __Vtemp270[0x10U] = 0U;
        __Vtemp270[0x11U] = 0U;
        __Vtemp270[0x12U] = 0U;
        __Vtemp270[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp271, __Vtemp270);
        __Vtemp276[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp276[1U] = 0U;
        __Vtemp276[2U] = 0U;
        __Vtemp276[3U] = 0U;
        __Vtemp276[4U] = 0U;
        __Vtemp276[5U] = 0U;
        __Vtemp276[6U] = 0U;
        __Vtemp276[7U] = 0U;
        __Vtemp276[8U] = 0U;
        __Vtemp276[9U] = 0U;
        __Vtemp276[0xaU] = 0U;
        __Vtemp276[0xbU] = 0U;
        __Vtemp276[0xcU] = 0U;
        __Vtemp276[0xdU] = 0U;
        __Vtemp276[0xeU] = 0U;
        __Vtemp276[0xfU] = 0U;
        __Vtemp276[0x10U] = 0U;
        __Vtemp276[0x11U] = 0U;
        __Vtemp276[0x12U] = 0U;
        __Vtemp276[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp277, __Vtemp276);
        if (VL_UNLIKELY(((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                           & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                 & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                    == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == ((7U == (7U & __Vtemp259[0U]))
                                     ? 4U : ((6U == 
                                              (7U & 
                                               __Vtemp265[0U]))
                                              ? 4U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_46)))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                  == ((7U == (7U & 
                                              __Vtemp271[0U]))
                                       ? 4U : ((6U 
                                                == 
                                                (7U 
                                                 & __Vtemp277[0U]))
                                                ? 5U
                                                : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_46))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17570:11
done_reset        
    ) {
        VL_SHIFTR_WWI(640,640,11, __Vtemp280, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U));
        __Vtemp283[0U] = (7U & (__Vtemp280[0U] >> 1U));
        __Vtemp283[1U] = 0U;
        __Vtemp283[2U] = 0U;
        __Vtemp283[3U] = 0U;
        __Vtemp283[4U] = 0U;
        __Vtemp283[5U] = 0U;
        __Vtemp283[6U] = 0U;
        __Vtemp283[7U] = 0U;
        __Vtemp283[8U] = 0U;
        __Vtemp283[9U] = 0U;
        __Vtemp283[0xaU] = 0U;
        __Vtemp283[0xbU] = 0U;
        __Vtemp283[0xcU] = 0U;
        __Vtemp283[0xdU] = 0U;
        __Vtemp283[0xeU] = 0U;
        __Vtemp283[0xfU] = 0U;
        __Vtemp283[0x10U] = 0U;
        __Vtemp283[0x11U] = 0U;
        __Vtemp283[0x12U] = 0U;
        __Vtemp283[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp284, __Vtemp283);
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (0xfU & __Vtemp284[0U])) 
                         & (((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                             & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                      == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17573: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 17573, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17581:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(640,640,11, __Vtemp287, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U));
        __Vtemp290[0U] = (7U & (__Vtemp287[0U] >> 1U));
        __Vtemp290[1U] = 0U;
        __Vtemp290[2U] = 0U;
        __Vtemp290[3U] = 0U;
        __Vtemp290[4U] = 0U;
        __Vtemp290[5U] = 0U;
        __Vtemp290[6U] = 0U;
        __Vtemp290[7U] = 0U;
        __Vtemp290[8U] = 0U;
        __Vtemp290[9U] = 0U;
        __Vtemp290[0xaU] = 0U;
        __Vtemp290[0xbU] = 0U;
        __Vtemp290[0xcU] = 0U;
        __Vtemp290[0xdU] = 0U;
        __Vtemp290[0xeU] = 0U;
        __Vtemp290[0xfU] = 0U;
        __Vtemp290[0x10U] = 0U;
        __Vtemp290[0x11U] = 0U;
        __Vtemp290[0x12U] = 0U;
        __Vtemp290[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp291, __Vtemp290);
        if (VL_UNLIKELY(((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                           & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                 & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                    == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (0xfU & __Vtemp291[0U]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17594:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_d_ready)) 
                             | (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)))) 
                         & (((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                               & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                 == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17597: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 17597, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17605:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid)) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_d_ready)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17616:11
done_reset        
    ) {
        __Vtemp292[0U] = 1U;
        __Vtemp292[1U] = 0U;
        __Vtemp292[2U] = 0U;
        __Vtemp292[3U] = 0U;
        __Vtemp292[4U] = 0U;
        __Vtemp292[5U] = 0U;
        __Vtemp292[6U] = 0U;
        __Vtemp292[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp293, __Vtemp292, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source));
        __Vtemp298[0U] = 1U;
        __Vtemp298[1U] = 0U;
        __Vtemp298[2U] = 0U;
        __Vtemp298[3U] = 0U;
        __Vtemp298[4U] = 0U;
        __Vtemp298[5U] = 0U;
        __Vtemp298[6U] = 0U;
        __Vtemp298[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp299, __Vtemp298, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        __Vtemp304[0U] = 1U;
        __Vtemp304[1U] = 0U;
        __Vtemp304[2U] = 0U;
        __Vtemp304[3U] = 0U;
        __Vtemp304[4U] = 0U;
        __Vtemp304[5U] = 0U;
        __Vtemp304[6U] = 0U;
        __Vtemp304[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp305, __Vtemp304, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source));
        if (VL_UNLIKELY((1U & ((~ ((0U != ((((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                 ? 
                                                __Vtemp293[0U]
                                                 : 0U) 
                                               ^ ((
                                                   ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                   ? 
                                                  __Vtemp299[0U]
                                                   : 0U)) 
                                              | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                   ? 
                                                  __Vtemp293[1U]
                                                   : 0U) 
                                                 ^ 
                                                 ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                   ? 
                                                  __Vtemp299[1U]
                                                   : 0U))) 
                                             | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                  ? 
                                                 __Vtemp293[2U]
                                                  : 0U) 
                                                ^ (
                                                   (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                     & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                    ? 
                                                   __Vtemp299[2U]
                                                    : 0U))) 
                                            | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                 ? 
                                                __Vtemp293[3U]
                                                 : 0U) 
                                               ^ ((
                                                   ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                   ? 
                                                  __Vtemp299[3U]
                                                   : 0U))) 
                                           | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                ? __Vtemp293[4U]
                                                : 0U) 
                                              ^ (((
                                                   (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                  & (6U 
                                                     != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                  ? 
                                                 __Vtemp299[4U]
                                                  : 0U)))) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 (((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                       ? 
                                                      __Vtemp305[0U]
                                                       : 0U) 
                                                     | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                         ? 
                                                        __Vtemp305[1U]
                                                         : 0U)) 
                                                    | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                        & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                        ? 
                                                       __Vtemp305[2U]
                                                        : 0U)) 
                                                   | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                       ? 
                                                      __Vtemp305[3U]
                                                       : 0U)) 
                                                  | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                      & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                      ? 
                                                     __Vtemp305[4U]
                                                      : 0U))))))) 
                               & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17619: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 17619, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17627:11
verbose&&done_reset        
    ) {
        __Vtemp310[0U] = 1U;
        __Vtemp310[1U] = 0U;
        __Vtemp310[2U] = 0U;
        __Vtemp310[3U] = 0U;
        __Vtemp310[4U] = 0U;
        __Vtemp310[5U] = 0U;
        __Vtemp310[6U] = 0U;
        __Vtemp310[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp311, __Vtemp310, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source));
        __Vtemp316[0U] = 1U;
        __Vtemp316[1U] = 0U;
        __Vtemp316[2U] = 0U;
        __Vtemp316[3U] = 0U;
        __Vtemp316[4U] = 0U;
        __Vtemp316[5U] = 0U;
        __Vtemp316[6U] = 0U;
        __Vtemp316[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp317, __Vtemp316, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        __Vtemp322[0U] = 1U;
        __Vtemp322[1U] = 0U;
        __Vtemp322[2U] = 0U;
        __Vtemp322[3U] = 0U;
        __Vtemp322[4U] = 0U;
        __Vtemp322[5U] = 0U;
        __Vtemp322[6U] = 0U;
        __Vtemp322[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp323, __Vtemp322, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source));
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                               & (~ ((0U != ((((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                   ? 
                                                  __Vtemp311[0U]
                                                   : 0U) 
                                                 ^ 
                                                 ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                   ? 
                                                  __Vtemp317[0U]
                                                   : 0U)) 
                                                | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                     & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                     ? 
                                                    __Vtemp311[1U]
                                                     : 0U) 
                                                   ^ 
                                                   ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                      & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                     & (6U 
                                                        != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                     ? 
                                                    __Vtemp317[1U]
                                                     : 0U))) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                    ? 
                                                   __Vtemp311[2U]
                                                    : 0U) 
                                                  ^ 
                                                  ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                     & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                    ? 
                                                   __Vtemp317[2U]
                                                    : 0U))) 
                                              | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                   ? 
                                                  __Vtemp311[3U]
                                                   : 0U) 
                                                 ^ 
                                                 ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                   ? 
                                                  __Vtemp317[3U]
                                                   : 0U))) 
                                             | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                  ? 
                                                 __Vtemp311[4U]
                                                  : 0U) 
                                                ^ (
                                                   (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                     & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                    ? 
                                                   __Vtemp317[4U]
                                                    : 0U)))) 
                                     | (~ (IData)((0U 
                                                   != 
                                                   (((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                         ? 
                                                        __Vtemp323[0U]
                                                         : 0U) 
                                                       | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                           ? 
                                                          __Vtemp323[1U]
                                                           : 0U)) 
                                                      | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                          ? 
                                                         __Vtemp323[2U]
                                                          : 0U)) 
                                                     | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                         ? 
                                                        __Vtemp323[3U]
                                                         : 0U)) 
                                                    | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                        & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                        ? 
                                                       __Vtemp323[4U]
                                                        : 0U))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 3 (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17640:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (((~ (IData)((0U 
                                                != 
                                                ((((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
                                                    | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[1U]) 
                                                   | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[2U]) 
                                                  | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[3U]) 
                                                 | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[4U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                               & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17643: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 17643, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17651:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                               & (~ (((~ (IData)((0U 
                                                  != 
                                                  ((((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
                                                      | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[1U]) 
                                                     | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[2U]) 
                                                    | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[3U]) 
                                                   | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[4U])))) 
                                      | (0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                     | (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog 
                                        < vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17664:11
done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp328, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY(((~ __Vtemp328[0U]) & ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                                               & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17667: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 17667, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17675:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp329, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ __Vtemp329[0U])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17688:11
done_reset        
    ) {
        VL_SHIFTR_WWI(640,640,11, __Vtemp332, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U));
        __Vtemp335[0U] = (7U & (__Vtemp332[0U] >> 1U));
        __Vtemp335[1U] = 0U;
        __Vtemp335[2U] = 0U;
        __Vtemp335[3U] = 0U;
        __Vtemp335[4U] = 0U;
        __Vtemp335[5U] = 0U;
        __Vtemp335[6U] = 0U;
        __Vtemp335[7U] = 0U;
        __Vtemp335[8U] = 0U;
        __Vtemp335[9U] = 0U;
        __Vtemp335[0xaU] = 0U;
        __Vtemp335[0xbU] = 0U;
        __Vtemp335[0xcU] = 0U;
        __Vtemp335[0xdU] = 0U;
        __Vtemp335[0xeU] = 0U;
        __Vtemp335[0xfU] = 0U;
        __Vtemp335[0x10U] = 0U;
        __Vtemp335[0x11U] = 0U;
        __Vtemp335[0x12U] = 0U;
        __Vtemp335[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp336, __Vtemp335);
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (0xfU & __Vtemp336[0U])) 
                         & ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17691: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 17691, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17699:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(640,640,11, __Vtemp339, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U));
        __Vtemp342[0U] = (7U & (__Vtemp339[0U] >> 1U));
        __Vtemp342[1U] = 0U;
        __Vtemp342[2U] = 0U;
        __Vtemp342[3U] = 0U;
        __Vtemp342[4U] = 0U;
        __Vtemp342[5U] = 0U;
        __Vtemp342[6U] = 0U;
        __Vtemp342[7U] = 0U;
        __Vtemp342[8U] = 0U;
        __Vtemp342[9U] = 0U;
        __Vtemp342[0xaU] = 0U;
        __Vtemp342[0xbU] = 0U;
        __Vtemp342[0xcU] = 0U;
        __Vtemp342[0xdU] = 0U;
        __Vtemp342[0xeU] = 0U;
        __Vtemp342[0xfU] = 0U;
        __Vtemp342[0x10U] = 0U;
        __Vtemp342[0x11U] = 0U;
        __Vtemp342[0x12U] = 0U;
        __Vtemp342[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp343, __Vtemp342);
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (0xfU & __Vtemp343[0U]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17712:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (((~ (IData)((0U 
                                                != 
                                                ((((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[0U] 
                                                    | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[1U]) 
                                                   | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[2U]) 
                                                  | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[3U]) 
                                                 | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[4U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                               & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17715: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 17715, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:17723:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                               & (~ (((~ (IData)((0U 
                                                  != 
                                                  ((((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[0U] 
                                                      | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[1U]) 
                                                     | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[2U]) 
                                                    | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[3U]) 
                                                   | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[4U])))) 
                                      | (0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                     | (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog_1 
                                        < vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__65(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__65\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp344[5];
    WData/*159:0*/ __Vtemp345[5];
    WData/*159:0*/ __Vtemp346[5];
    WData/*159:0*/ __Vtemp347[5];
    WData/*639:0*/ __Vtemp352[20];
    WData/*639:0*/ __Vtemp353[20];
    WData/*639:0*/ __Vtemp358[20];
    WData/*639:0*/ __Vtemp359[20];
    WData/*639:0*/ __Vtemp364[20];
    WData/*639:0*/ __Vtemp365[20];
    WData/*639:0*/ __Vtemp370[20];
    WData/*639:0*/ __Vtemp371[20];
    WData/*639:0*/ __Vtemp376[20];
    WData/*639:0*/ __Vtemp377[20];
    WData/*639:0*/ __Vtemp382[20];
    WData/*639:0*/ __Vtemp383[20];
    WData/*639:0*/ __Vtemp388[20];
    WData/*639:0*/ __Vtemp389[20];
    WData/*639:0*/ __Vtemp394[20];
    WData/*639:0*/ __Vtemp395[20];
    WData/*639:0*/ __Vtemp398[20];
    WData/*639:0*/ __Vtemp401[20];
    WData/*639:0*/ __Vtemp402[20];
    WData/*639:0*/ __Vtemp405[20];
    WData/*639:0*/ __Vtemp408[20];
    WData/*639:0*/ __Vtemp409[20];
    // Body
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9419:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9422: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 9422, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9430:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9443:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9446: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 9446, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9454:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9467:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9470: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 9470, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9478:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9491:11
done_reset        
    ) {
        if (VL_UNLIKELY(((3U > (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9494: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 9494, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9502:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (3U > (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9515:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9518: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 9518, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9526:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9539:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U < (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                       ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                       : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x12U)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9542: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 9542, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9550:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (2U < (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                         ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                         : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0x12U))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9563:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9566: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 9566, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9574:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9587:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                           ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                           : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                              >> 9U)) & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                                         & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9590: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 9590, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9598:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                             ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                             : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                >> 9U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9611:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9614: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 9614, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9622:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9635:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9638: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 9638, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9646:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9659:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9662: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 9662, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9670:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9683:11
done_reset        
    ) {
        if (VL_UNLIKELY(((3U > (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9686: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 9686, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9694:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (3U > (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9707:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9710: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 9710, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9718:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9731:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U < (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                       ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                       : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x12U)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9734: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 9734, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9742:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (2U < (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                         ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                         : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0x12U))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9755:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                        ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                        : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           >> 0x12U)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9758: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 9758, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9766:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                          ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                          : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9779:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9782: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 9782, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9790:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9803:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                           ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                           : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                              >> 9U)) & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                                         & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9806: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 9806, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9814:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                             ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                             : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                >> 9U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9827:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9830: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 9830, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9838:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9851:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0x70000U & (0x20000U 
                                             ^ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9854: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 9854, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9862:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (0x70000U & (0x20000U 
                                               ^ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9875:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9878: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 9878, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9886:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9899:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9902: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 9902, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9910:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9923:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                        ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                        : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           >> 0x12U)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9926: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 9926, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9934:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                          ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                          : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9947:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9950: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 9950, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9958:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9971:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                           ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                           : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                              >> 9U)) & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                                         & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9974: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 9974, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9982:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                             ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                             : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                >> 9U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9995:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:9998: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 9998, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10006:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10019:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10022: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10022, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10030:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10043:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10046: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10046, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10054:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10067:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                        ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                        : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           >> 0x12U)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10070: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10070, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10078:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                          ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                          : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10091:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10094: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10094, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10102:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10115:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10118: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10118, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10126:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10139:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10142: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10142, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10150:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10163:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10166: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10166, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10174:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10187:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                        ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                        : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           >> 0x12U)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10190: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10190, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10198:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                          ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                          : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10211:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10214: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10214, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10222:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10235:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10238: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10238, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10246:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10259:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10262: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10262, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10270:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10283:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10286: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10286, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10294:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10307:11
done_reset        
    ) {
        if (VL_UNLIKELY(((4U < (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                       ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                       : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x12U)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10310: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10310, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10318:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (4U < (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                         ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                         : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0x12U))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10331:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10334: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10334, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10342:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10355:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10358: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10358, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10366:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10379:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10382: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10382, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10390:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10403:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10406: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10406, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10414:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10427:11
done_reset        
    ) {
        if (VL_UNLIKELY(((3U < (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                       ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                       : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x12U)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10430: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10430, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10438:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (3U < (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                         ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                         : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0x12U))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10451:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10454: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10454, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10462:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10475:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10478: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10478, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10486:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10499:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10502: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10502, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10510:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10523:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10526: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10526, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10534:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10547:11
done_reset        
    ) {
        if (VL_UNLIKELY(((1U < (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                       ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                       : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x12U)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10550: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10550, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10558:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (1U < (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                         ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                         : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0x12U))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10571:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10574: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10574, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10582:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10595:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                           ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                           : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                              >> 9U)) & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                                         & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10598: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10598, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10606:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                             ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                             : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                >> 9U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10630:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10633: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10633, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10641:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10720:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__opcode)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10723: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10723, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10731:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__opcode))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10744:11
done_reset        
    ) {
        if (VL_UNLIKELY((((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                  ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                  : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                     >> 0x12U))) != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10747: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10747, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10755:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                    : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0x12U))) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10768:11
done_reset        
    ) {
        if (VL_UNLIKELY((((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__size)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10771: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10771, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10779:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__size))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10792:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10795: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10795, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10803:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10816:11
done_reset        
    ) {
        if (VL_UNLIKELY(((vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                          != vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__address) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10819: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10819, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10827:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                            != vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__address)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10862:11
done_reset        
    ) {
        if (VL_UNLIKELY((((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__size_1)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10865: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10865, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10873:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__size_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10886:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__source_1)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10889: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10889, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10897:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__source_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10932:11
done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp344, vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source));
        if (VL_UNLIKELY((__Vtemp344[0U] & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))) 
                                           & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10935: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10935, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10943:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp345, vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source));
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & __Vtemp345[0U]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10956:11
done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp346, vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source));
        if (VL_UNLIKELY(((~ (__Vtemp346[0U] | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10959: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10959, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10967:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp347, vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source));
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ (__Vtemp347[0U] | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10980:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                      ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_30)))) 
                             | (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                        ? 4U : ((6U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_30)))))) 
                         & ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10983: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 10983, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:10991:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                           & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ ((1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                        ? 4U : ((6U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                                 ? 4U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_30)))) 
                               | (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                          ? 4U : ((6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                                   ? 5U
                                                   : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_30))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:11004:11
done_reset        
    ) {
        if (VL_UNLIKELY((((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                          != (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                         & ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:11007: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 11007, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:11015:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                           & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                            != (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:11028:11
done_reset        
    ) {
        __Vtemp352[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp352[1U] = 0U;
        __Vtemp352[2U] = 0U;
        __Vtemp352[3U] = 0U;
        __Vtemp352[4U] = 0U;
        __Vtemp352[5U] = 0U;
        __Vtemp352[6U] = 0U;
        __Vtemp352[7U] = 0U;
        __Vtemp352[8U] = 0U;
        __Vtemp352[9U] = 0U;
        __Vtemp352[0xaU] = 0U;
        __Vtemp352[0xbU] = 0U;
        __Vtemp352[0xcU] = 0U;
        __Vtemp352[0xdU] = 0U;
        __Vtemp352[0xeU] = 0U;
        __Vtemp352[0xfU] = 0U;
        __Vtemp352[0x10U] = 0U;
        __Vtemp352[0x11U] = 0U;
        __Vtemp352[0x12U] = 0U;
        __Vtemp352[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp353, __Vtemp352);
        __Vtemp358[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp358[1U] = 0U;
        __Vtemp358[2U] = 0U;
        __Vtemp358[3U] = 0U;
        __Vtemp358[4U] = 0U;
        __Vtemp358[5U] = 0U;
        __Vtemp358[6U] = 0U;
        __Vtemp358[7U] = 0U;
        __Vtemp358[8U] = 0U;
        __Vtemp358[9U] = 0U;
        __Vtemp358[0xaU] = 0U;
        __Vtemp358[0xbU] = 0U;
        __Vtemp358[0xcU] = 0U;
        __Vtemp358[0xdU] = 0U;
        __Vtemp358[0xeU] = 0U;
        __Vtemp358[0xfU] = 0U;
        __Vtemp358[0x10U] = 0U;
        __Vtemp358[0x11U] = 0U;
        __Vtemp358[0x12U] = 0U;
        __Vtemp358[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp359, __Vtemp358);
        __Vtemp364[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp364[1U] = 0U;
        __Vtemp364[2U] = 0U;
        __Vtemp364[3U] = 0U;
        __Vtemp364[4U] = 0U;
        __Vtemp364[5U] = 0U;
        __Vtemp364[6U] = 0U;
        __Vtemp364[7U] = 0U;
        __Vtemp364[8U] = 0U;
        __Vtemp364[9U] = 0U;
        __Vtemp364[0xaU] = 0U;
        __Vtemp364[0xbU] = 0U;
        __Vtemp364[0xcU] = 0U;
        __Vtemp364[0xdU] = 0U;
        __Vtemp364[0xeU] = 0U;
        __Vtemp364[0xfU] = 0U;
        __Vtemp364[0x10U] = 0U;
        __Vtemp364[0x11U] = 0U;
        __Vtemp364[0x12U] = 0U;
        __Vtemp364[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp365, __Vtemp364);
        __Vtemp370[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp370[1U] = 0U;
        __Vtemp370[2U] = 0U;
        __Vtemp370[3U] = 0U;
        __Vtemp370[4U] = 0U;
        __Vtemp370[5U] = 0U;
        __Vtemp370[6U] = 0U;
        __Vtemp370[7U] = 0U;
        __Vtemp370[8U] = 0U;
        __Vtemp370[9U] = 0U;
        __Vtemp370[0xaU] = 0U;
        __Vtemp370[0xbU] = 0U;
        __Vtemp370[0xcU] = 0U;
        __Vtemp370[0xdU] = 0U;
        __Vtemp370[0xeU] = 0U;
        __Vtemp370[0xfU] = 0U;
        __Vtemp370[0x10U] = 0U;
        __Vtemp370[0x11U] = 0U;
        __Vtemp370[0x12U] = 0U;
        __Vtemp370[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp371, __Vtemp370);
        if (VL_UNLIKELY(((~ ((1U == ((7U == (7U & __Vtemp353[0U]))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & __Vtemp359[0U]))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_46)))) 
                             | (1U == ((7U == (7U & 
                                               __Vtemp365[0U]))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & __Vtemp371[0U]))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_46)))))) 
                         & ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                             & (~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:11031: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 11031, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:11039:11
verbose&&done_reset        
    ) {
        __Vtemp376[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp376[1U] = 0U;
        __Vtemp376[2U] = 0U;
        __Vtemp376[3U] = 0U;
        __Vtemp376[4U] = 0U;
        __Vtemp376[5U] = 0U;
        __Vtemp376[6U] = 0U;
        __Vtemp376[7U] = 0U;
        __Vtemp376[8U] = 0U;
        __Vtemp376[9U] = 0U;
        __Vtemp376[0xaU] = 0U;
        __Vtemp376[0xbU] = 0U;
        __Vtemp376[0xcU] = 0U;
        __Vtemp376[0xdU] = 0U;
        __Vtemp376[0xeU] = 0U;
        __Vtemp376[0xfU] = 0U;
        __Vtemp376[0x10U] = 0U;
        __Vtemp376[0x11U] = 0U;
        __Vtemp376[0x12U] = 0U;
        __Vtemp376[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp377, __Vtemp376);
        __Vtemp382[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp382[1U] = 0U;
        __Vtemp382[2U] = 0U;
        __Vtemp382[3U] = 0U;
        __Vtemp382[4U] = 0U;
        __Vtemp382[5U] = 0U;
        __Vtemp382[6U] = 0U;
        __Vtemp382[7U] = 0U;
        __Vtemp382[8U] = 0U;
        __Vtemp382[9U] = 0U;
        __Vtemp382[0xaU] = 0U;
        __Vtemp382[0xbU] = 0U;
        __Vtemp382[0xcU] = 0U;
        __Vtemp382[0xdU] = 0U;
        __Vtemp382[0xeU] = 0U;
        __Vtemp382[0xfU] = 0U;
        __Vtemp382[0x10U] = 0U;
        __Vtemp382[0x11U] = 0U;
        __Vtemp382[0x12U] = 0U;
        __Vtemp382[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp383, __Vtemp382);
        __Vtemp388[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp388[1U] = 0U;
        __Vtemp388[2U] = 0U;
        __Vtemp388[3U] = 0U;
        __Vtemp388[4U] = 0U;
        __Vtemp388[5U] = 0U;
        __Vtemp388[6U] = 0U;
        __Vtemp388[7U] = 0U;
        __Vtemp388[8U] = 0U;
        __Vtemp388[9U] = 0U;
        __Vtemp388[0xaU] = 0U;
        __Vtemp388[0xbU] = 0U;
        __Vtemp388[0xcU] = 0U;
        __Vtemp388[0xdU] = 0U;
        __Vtemp388[0xeU] = 0U;
        __Vtemp388[0xfU] = 0U;
        __Vtemp388[0x10U] = 0U;
        __Vtemp388[0x11U] = 0U;
        __Vtemp388[0x12U] = 0U;
        __Vtemp388[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp389, __Vtemp388);
        __Vtemp394[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp394[1U] = 0U;
        __Vtemp394[2U] = 0U;
        __Vtemp394[3U] = 0U;
        __Vtemp394[4U] = 0U;
        __Vtemp394[5U] = 0U;
        __Vtemp394[6U] = 0U;
        __Vtemp394[7U] = 0U;
        __Vtemp394[8U] = 0U;
        __Vtemp394[9U] = 0U;
        __Vtemp394[0xaU] = 0U;
        __Vtemp394[0xbU] = 0U;
        __Vtemp394[0xcU] = 0U;
        __Vtemp394[0xdU] = 0U;
        __Vtemp394[0xeU] = 0U;
        __Vtemp394[0xfU] = 0U;
        __Vtemp394[0x10U] = 0U;
        __Vtemp394[0x11U] = 0U;
        __Vtemp394[0x12U] = 0U;
        __Vtemp394[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp395, __Vtemp394);
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                           & (~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ ((1U == ((7U == (7U & 
                                               __Vtemp377[0U]))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & __Vtemp383[0U]))
                                                 ? 4U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_46)))) 
                               | (1U == ((7U == (7U 
                                                 & __Vtemp389[0U]))
                                          ? 4U : ((6U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp395[0U]))
                                                   ? 5U
                                                   : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_46))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:11052:11
done_reset        
    ) {
        VL_SHIFTR_WWI(640,640,11, __Vtemp398, vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                       << 2U));
        __Vtemp401[0U] = (7U & (__Vtemp398[0U] >> 1U));
        __Vtemp401[1U] = 0U;
        __Vtemp401[2U] = 0U;
        __Vtemp401[3U] = 0U;
        __Vtemp401[4U] = 0U;
        __Vtemp401[5U] = 0U;
        __Vtemp401[6U] = 0U;
        __Vtemp401[7U] = 0U;
        __Vtemp401[8U] = 0U;
        __Vtemp401[9U] = 0U;
        __Vtemp401[0xaU] = 0U;
        __Vtemp401[0xbU] = 0U;
        __Vtemp401[0xcU] = 0U;
        __Vtemp401[0xdU] = 0U;
        __Vtemp401[0xeU] = 0U;
        __Vtemp401[0xfU] = 0U;
        __Vtemp401[0x10U] = 0U;
        __Vtemp401[0x11U] = 0U;
        __Vtemp401[0x12U] = 0U;
        __Vtemp401[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp402, __Vtemp401);
        if (VL_UNLIKELY((((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                          != (0xfU & __Vtemp402[0U])) 
                         & ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                             & (~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:11055: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 11055, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:11063:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(640,640,11, __Vtemp405, vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                       << 2U));
        __Vtemp408[0U] = (7U & (__Vtemp405[0U] >> 1U));
        __Vtemp408[1U] = 0U;
        __Vtemp408[2U] = 0U;
        __Vtemp408[3U] = 0U;
        __Vtemp408[4U] = 0U;
        __Vtemp408[5U] = 0U;
        __Vtemp408[6U] = 0U;
        __Vtemp408[7U] = 0U;
        __Vtemp408[8U] = 0U;
        __Vtemp408[9U] = 0U;
        __Vtemp408[0xaU] = 0U;
        __Vtemp408[0xbU] = 0U;
        __Vtemp408[0xcU] = 0U;
        __Vtemp408[0xdU] = 0U;
        __Vtemp408[0xeU] = 0U;
        __Vtemp408[0xfU] = 0U;
        __Vtemp408[0x10U] = 0U;
        __Vtemp408[0x11U] = 0U;
        __Vtemp408[0x12U] = 0U;
        __Vtemp408[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp409, __Vtemp408);
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                           & (~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                            != (0xfU & __Vtemp409[0U]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:11076:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready))) 
                         & (((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:11079: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 11079, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:11087:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:11098:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (((~ (IData)((0U 
                                                != 
                                                ((((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[0U] 
                                                    | vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[1U]) 
                                                   | vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[2U]) 
                                                  | vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[3U]) 
                                                 | vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[4U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                               & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:11101: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 11101, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:11109:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                               & (~ (((~ (IData)((0U 
                                                  != 
                                                  ((((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[0U] 
                                                      | vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[1U]) 
                                                     | vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[2U]) 
                                                    | vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[3U]) 
                                                   | vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[4U])))) 
                                      | (0U == vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                     | (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__watchdog 
                                        < vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}
