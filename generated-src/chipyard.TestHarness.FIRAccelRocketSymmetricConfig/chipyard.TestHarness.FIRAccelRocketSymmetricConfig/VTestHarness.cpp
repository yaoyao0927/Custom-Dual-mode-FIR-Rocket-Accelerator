// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

//==========

void VTestHarness::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTestHarness::eval\n"); );
    VTestHarness__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 28715, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VTestHarness::_eval_initial_loop(VTestHarness__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 28715, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__58(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__58\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:29141:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((2U <= vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fexit) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"*** FAILED *** (exit code = %10#)\n",
                       32,(0x7fffffffU & (vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fexit 
                                          >> 1U)));
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:29152:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U <= vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fexit) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:29155: Assertion failed in %NTestHarness\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 29155, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__59(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__59\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__uart_sim_0__DOT__rxState 
        = vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxState;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_4__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__60(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__60\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp124[5];
    WData/*159:0*/ __Vtemp125[5];
    WData/*159:0*/ __Vtemp126[5];
    WData/*159:0*/ __Vtemp127[5];
    WData/*639:0*/ __Vtemp132[20];
    WData/*639:0*/ __Vtemp133[20];
    WData/*639:0*/ __Vtemp138[20];
    WData/*639:0*/ __Vtemp139[20];
    WData/*639:0*/ __Vtemp144[20];
    WData/*639:0*/ __Vtemp145[20];
    WData/*639:0*/ __Vtemp150[20];
    WData/*639:0*/ __Vtemp151[20];
    WData/*639:0*/ __Vtemp156[20];
    WData/*639:0*/ __Vtemp157[20];
    WData/*639:0*/ __Vtemp162[20];
    WData/*639:0*/ __Vtemp163[20];
    WData/*639:0*/ __Vtemp168[20];
    WData/*639:0*/ __Vtemp169[20];
    WData/*639:0*/ __Vtemp174[20];
    WData/*639:0*/ __Vtemp175[20];
    WData/*639:0*/ __Vtemp178[20];
    WData/*639:0*/ __Vtemp181[20];
    WData/*639:0*/ __Vtemp182[20];
    WData/*639:0*/ __Vtemp185[20];
    WData/*639:0*/ __Vtemp188[20];
    WData/*639:0*/ __Vtemp189[20];
    WData/*255:0*/ __Vtemp190[8];
    WData/*255:0*/ __Vtemp191[8];
    WData/*255:0*/ __Vtemp196[8];
    WData/*255:0*/ __Vtemp197[8];
    WData/*255:0*/ __Vtemp202[8];
    WData/*255:0*/ __Vtemp203[8];
    WData/*255:0*/ __Vtemp208[8];
    WData/*255:0*/ __Vtemp209[8];
    WData/*255:0*/ __Vtemp214[8];
    WData/*255:0*/ __Vtemp215[8];
    WData/*255:0*/ __Vtemp220[8];
    WData/*255:0*/ __Vtemp221[8];
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__uart_sim_0__DOT__txState 
        = vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txState;
    vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1;
    vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1;
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6411:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6414: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 6414, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6422:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6435:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6438: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 6438, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6446:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6459:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6462: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 6462, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6470:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6483:11
done_reset        
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6486: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 6486, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6494:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (3U > (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6507:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6510: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 6510, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6518:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6531:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U < vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                          [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6534: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 6534, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6542:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (2U < vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                            [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6555:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6558: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 6558, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6566:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6579:11
done_reset        
    ) {
        if (VL_UNLIKELY((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                         [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1] 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6582: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 6582, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6590:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                         [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6603:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6606: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 6606, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6614:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6627:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6630: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 6630, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6638:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6651:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6654: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 6654, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6662:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6675:11
done_reset        
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6678: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 6678, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6686:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (3U > (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6699:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6702: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 6702, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6710:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6723:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U < vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                          [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6726: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 6726, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6734:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (2U < vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                            [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6747:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                          [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6750: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 6750, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6758:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                            [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6771:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6774: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 6774, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6782:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6795:11
done_reset        
    ) {
        if (VL_UNLIKELY((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                         [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1] 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6798: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 6798, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6806:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                         [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6819:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6822: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 6822, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6830:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6843:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0x3ffff000U & (0x10000000U 
                                                ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6846: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 6846, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6854:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (0x3ffff000U & (0x10000000U 
                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6867:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6870: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 6870, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6878:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6891:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6894: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 6894, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6902:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6915:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                          [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6918: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 6918, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6926:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                            [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6939:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6942: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 6942, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6950:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6963:11
done_reset        
    ) {
        if (VL_UNLIKELY((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                         [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1] 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6966: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 6966, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6974:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                         [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6987:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                             & (0U == (0x3ffff000U 
                                       & (0x10000000U 
                                          ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6990: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 6990, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:6998:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               & (0U == (0x3ffff000U 
                                         & (0x10000000U 
                                            ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7011:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7014: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 7014, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7022:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7035:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7038: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 7038, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7046:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7059:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                          [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7062: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 7062, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7070:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                            [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7083:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7086: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 7086, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7094:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7107:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                             & (0U == (0x3ffff000U 
                                       & (0x10000000U 
                                          ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7110: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 7110, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7118:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               & (0U == (0x3ffff000U 
                                         & (0x10000000U 
                                            ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7131:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7134: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 7134, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7142:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7155:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7158: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 7158, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7166:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7179:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                          [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7182: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 7182, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7190:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                            [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7203:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask)))) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7206: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 7206, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7214:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7227:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7230: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 7230, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7238:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7251:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7254: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 7254, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7262:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7275:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7278: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 7278, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7286:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7299:11
done_reset        
    ) {
        if (VL_UNLIKELY(((4U < vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                          [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7302: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 7302, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7310:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (4U < vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                            [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7323:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7326: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 7326, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7334:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7347:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7350: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 7350, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7358:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7371:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7374: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 7374, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7382:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7395:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7398: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 7398, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7406:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7419:11
done_reset        
    ) {
        if (VL_UNLIKELY(((3U < vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                          [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7422: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 7422, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7430:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (3U < vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                            [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7443:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7446: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 7446, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7454:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7467:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7470: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 7470, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7478:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7491:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7494: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 7494, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7502:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7515:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7518: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 7518, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7526:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7539:11
done_reset        
    ) {
        if (VL_UNLIKELY(((1U < vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                          [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7542: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 7542, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7550:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (1U < vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                            [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7563:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7566: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 7566, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7574:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7587:11
done_reset        
    ) {
        if (VL_UNLIKELY((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                         [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1] 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7590: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 7590, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7598:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                         [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7948:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7951: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 7951, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:7959:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8005:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8008: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 8008, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8016:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8152:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__opcode)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8155: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 8155, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8163:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__opcode))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8176:11
done_reset        
    ) {
        if (VL_UNLIKELY(((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                          [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1] 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__param)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8179: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 8179, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8187:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                            [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1] 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8200:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__size)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8203: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 8203, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8211:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__size))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8224:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__source)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8227: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 8227, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8235:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8248:11
done_reset        
    ) {
        if (VL_UNLIKELY(((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                          != vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__address) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8251: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 8251, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8259:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                            != vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__address)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8272:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__opcode_1)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8275: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 8275, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8283:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__opcode_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8307:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_size) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__size_1)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8310: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 8310, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8318:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_size) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__size_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8331:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__source_1)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8334: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 8334, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8342:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__source_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8377:11
done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp124, vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY((__Vtemp124[0U] & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                                           & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8380: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 8380, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8388:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp125, vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & __Vtemp125[0U]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8401:11
done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp126, vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source));
        if (VL_UNLIKELY(((~ (__Vtemp126[0U] | (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                                               & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8404: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 8404, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8412:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp127, vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source));
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ (__Vtemp127[0U] | (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8425:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                              == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                   ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                            ? 4U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_30)))) 
                             | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                                == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                     ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                              ? 5U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_30)))))) 
                         & ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                             & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source)))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8428: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 8428, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8436:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                           & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                              & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                 == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source)))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                                == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                     ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                              ? 4U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_30)))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                                  == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                       ? 4U : ((6U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                                ? 5U
                                                : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_30))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8449:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_size)) 
                         & ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                             & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source)))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8452: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 8452, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8460:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                           & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                              & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                 == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source)))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_size))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8473:11
done_reset        
    ) {
        __Vtemp132[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp132[1U] = 0U;
        __Vtemp132[2U] = 0U;
        __Vtemp132[3U] = 0U;
        __Vtemp132[4U] = 0U;
        __Vtemp132[5U] = 0U;
        __Vtemp132[6U] = 0U;
        __Vtemp132[7U] = 0U;
        __Vtemp132[8U] = 0U;
        __Vtemp132[9U] = 0U;
        __Vtemp132[0xaU] = 0U;
        __Vtemp132[0xbU] = 0U;
        __Vtemp132[0xcU] = 0U;
        __Vtemp132[0xdU] = 0U;
        __Vtemp132[0xeU] = 0U;
        __Vtemp132[0xfU] = 0U;
        __Vtemp132[0x10U] = 0U;
        __Vtemp132[0x11U] = 0U;
        __Vtemp132[0x12U] = 0U;
        __Vtemp132[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp133, __Vtemp132);
        __Vtemp138[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp138[1U] = 0U;
        __Vtemp138[2U] = 0U;
        __Vtemp138[3U] = 0U;
        __Vtemp138[4U] = 0U;
        __Vtemp138[5U] = 0U;
        __Vtemp138[6U] = 0U;
        __Vtemp138[7U] = 0U;
        __Vtemp138[8U] = 0U;
        __Vtemp138[9U] = 0U;
        __Vtemp138[0xaU] = 0U;
        __Vtemp138[0xbU] = 0U;
        __Vtemp138[0xcU] = 0U;
        __Vtemp138[0xdU] = 0U;
        __Vtemp138[0xeU] = 0U;
        __Vtemp138[0xfU] = 0U;
        __Vtemp138[0x10U] = 0U;
        __Vtemp138[0x11U] = 0U;
        __Vtemp138[0x12U] = 0U;
        __Vtemp138[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp139, __Vtemp138);
        __Vtemp144[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp144[1U] = 0U;
        __Vtemp144[2U] = 0U;
        __Vtemp144[3U] = 0U;
        __Vtemp144[4U] = 0U;
        __Vtemp144[5U] = 0U;
        __Vtemp144[6U] = 0U;
        __Vtemp144[7U] = 0U;
        __Vtemp144[8U] = 0U;
        __Vtemp144[9U] = 0U;
        __Vtemp144[0xaU] = 0U;
        __Vtemp144[0xbU] = 0U;
        __Vtemp144[0xcU] = 0U;
        __Vtemp144[0xdU] = 0U;
        __Vtemp144[0xeU] = 0U;
        __Vtemp144[0xfU] = 0U;
        __Vtemp144[0x10U] = 0U;
        __Vtemp144[0x11U] = 0U;
        __Vtemp144[0x12U] = 0U;
        __Vtemp144[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp145, __Vtemp144);
        __Vtemp150[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp150[1U] = 0U;
        __Vtemp150[2U] = 0U;
        __Vtemp150[3U] = 0U;
        __Vtemp150[4U] = 0U;
        __Vtemp150[5U] = 0U;
        __Vtemp150[6U] = 0U;
        __Vtemp150[7U] = 0U;
        __Vtemp150[8U] = 0U;
        __Vtemp150[9U] = 0U;
        __Vtemp150[0xaU] = 0U;
        __Vtemp150[0xbU] = 0U;
        __Vtemp150[0xcU] = 0U;
        __Vtemp150[0xdU] = 0U;
        __Vtemp150[0xeU] = 0U;
        __Vtemp150[0xfU] = 0U;
        __Vtemp150[0x10U] = 0U;
        __Vtemp150[0x11U] = 0U;
        __Vtemp150[0x12U] = 0U;
        __Vtemp150[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp151, __Vtemp150);
        if (VL_UNLIKELY(((~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                              == ((7U == (7U & __Vtemp133[0U]))
                                   ? 4U : ((6U == (7U 
                                                   & __Vtemp139[0U]))
                                            ? 4U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_46)))) 
                             | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                                == ((7U == (7U & __Vtemp145[0U]))
                                     ? 4U : ((6U == 
                                              (7U & 
                                               __Vtemp151[0U]))
                                              ? 5U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_46)))))) 
                         & ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                             & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                      == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source))))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8476: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 8476, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8484:11
verbose&&done_reset        
    ) {
        __Vtemp156[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp156[1U] = 0U;
        __Vtemp156[2U] = 0U;
        __Vtemp156[3U] = 0U;
        __Vtemp156[4U] = 0U;
        __Vtemp156[5U] = 0U;
        __Vtemp156[6U] = 0U;
        __Vtemp156[7U] = 0U;
        __Vtemp156[8U] = 0U;
        __Vtemp156[9U] = 0U;
        __Vtemp156[0xaU] = 0U;
        __Vtemp156[0xbU] = 0U;
        __Vtemp156[0xcU] = 0U;
        __Vtemp156[0xdU] = 0U;
        __Vtemp156[0xeU] = 0U;
        __Vtemp156[0xfU] = 0U;
        __Vtemp156[0x10U] = 0U;
        __Vtemp156[0x11U] = 0U;
        __Vtemp156[0x12U] = 0U;
        __Vtemp156[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp157, __Vtemp156);
        __Vtemp162[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp162[1U] = 0U;
        __Vtemp162[2U] = 0U;
        __Vtemp162[3U] = 0U;
        __Vtemp162[4U] = 0U;
        __Vtemp162[5U] = 0U;
        __Vtemp162[6U] = 0U;
        __Vtemp162[7U] = 0U;
        __Vtemp162[8U] = 0U;
        __Vtemp162[9U] = 0U;
        __Vtemp162[0xaU] = 0U;
        __Vtemp162[0xbU] = 0U;
        __Vtemp162[0xcU] = 0U;
        __Vtemp162[0xdU] = 0U;
        __Vtemp162[0xeU] = 0U;
        __Vtemp162[0xfU] = 0U;
        __Vtemp162[0x10U] = 0U;
        __Vtemp162[0x11U] = 0U;
        __Vtemp162[0x12U] = 0U;
        __Vtemp162[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp163, __Vtemp162);
        __Vtemp168[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp168[1U] = 0U;
        __Vtemp168[2U] = 0U;
        __Vtemp168[3U] = 0U;
        __Vtemp168[4U] = 0U;
        __Vtemp168[5U] = 0U;
        __Vtemp168[6U] = 0U;
        __Vtemp168[7U] = 0U;
        __Vtemp168[8U] = 0U;
        __Vtemp168[9U] = 0U;
        __Vtemp168[0xaU] = 0U;
        __Vtemp168[0xbU] = 0U;
        __Vtemp168[0xcU] = 0U;
        __Vtemp168[0xdU] = 0U;
        __Vtemp168[0xeU] = 0U;
        __Vtemp168[0xfU] = 0U;
        __Vtemp168[0x10U] = 0U;
        __Vtemp168[0x11U] = 0U;
        __Vtemp168[0x12U] = 0U;
        __Vtemp168[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp169, __Vtemp168);
        __Vtemp174[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp174[1U] = 0U;
        __Vtemp174[2U] = 0U;
        __Vtemp174[3U] = 0U;
        __Vtemp174[4U] = 0U;
        __Vtemp174[5U] = 0U;
        __Vtemp174[6U] = 0U;
        __Vtemp174[7U] = 0U;
        __Vtemp174[8U] = 0U;
        __Vtemp174[9U] = 0U;
        __Vtemp174[0xaU] = 0U;
        __Vtemp174[0xbU] = 0U;
        __Vtemp174[0xcU] = 0U;
        __Vtemp174[0xdU] = 0U;
        __Vtemp174[0xeU] = 0U;
        __Vtemp174[0xfU] = 0U;
        __Vtemp174[0x10U] = 0U;
        __Vtemp174[0x11U] = 0U;
        __Vtemp174[0x12U] = 0U;
        __Vtemp174[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp175, __Vtemp174);
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                           & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                                 & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                    == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source))))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                                == ((7U == (7U & __Vtemp157[0U]))
                                     ? 4U : ((6U == 
                                              (7U & 
                                               __Vtemp163[0U]))
                                              ? 4U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_46)))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                                  == ((7U == (7U & 
                                              __Vtemp169[0U]))
                                       ? 4U : ((6U 
                                                == 
                                                (7U 
                                                 & __Vtemp175[0U]))
                                                ? 5U
                                                : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_46))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8497:11
done_reset        
    ) {
        VL_SHIFTR_WWI(640,640,11, __Vtemp178, vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source) 
                       << 2U));
        __Vtemp181[0U] = (7U & (__Vtemp178[0U] >> 1U));
        __Vtemp181[1U] = 0U;
        __Vtemp181[2U] = 0U;
        __Vtemp181[3U] = 0U;
        __Vtemp181[4U] = 0U;
        __Vtemp181[5U] = 0U;
        __Vtemp181[6U] = 0U;
        __Vtemp181[7U] = 0U;
        __Vtemp181[8U] = 0U;
        __Vtemp181[9U] = 0U;
        __Vtemp181[0xaU] = 0U;
        __Vtemp181[0xbU] = 0U;
        __Vtemp181[0xcU] = 0U;
        __Vtemp181[0xdU] = 0U;
        __Vtemp181[0xeU] = 0U;
        __Vtemp181[0xfU] = 0U;
        __Vtemp181[0x10U] = 0U;
        __Vtemp181[0x11U] = 0U;
        __Vtemp181[0x12U] = 0U;
        __Vtemp181[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp182, __Vtemp181);
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_size) 
                          != (0xfU & __Vtemp182[0U])) 
                         & ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                             & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                      == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source))))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8500: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 8500, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8508:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(640,640,11, __Vtemp185, vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source) 
                       << 2U));
        __Vtemp188[0U] = (7U & (__Vtemp185[0U] >> 1U));
        __Vtemp188[1U] = 0U;
        __Vtemp188[2U] = 0U;
        __Vtemp188[3U] = 0U;
        __Vtemp188[4U] = 0U;
        __Vtemp188[5U] = 0U;
        __Vtemp188[6U] = 0U;
        __Vtemp188[7U] = 0U;
        __Vtemp188[8U] = 0U;
        __Vtemp188[9U] = 0U;
        __Vtemp188[0xaU] = 0U;
        __Vtemp188[0xbU] = 0U;
        __Vtemp188[0xcU] = 0U;
        __Vtemp188[0xdU] = 0U;
        __Vtemp188[0xeU] = 0U;
        __Vtemp188[0xfU] = 0U;
        __Vtemp188[0x10U] = 0U;
        __Vtemp188[0x11U] = 0U;
        __Vtemp188[0x12U] = 0U;
        __Vtemp188[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp189, __Vtemp188);
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                           & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                                 & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                    == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source))))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_size) 
                            != (0xfU & __Vtemp189[0U]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8521:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full) 
                             | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor_io_in_a_ready))) 
                         & ((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8524: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 8524, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8532:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))) 
                           & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                              == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full) 
                               | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor_io_in_a_ready)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8543:11
done_reset        
    ) {
        __Vtemp190[0U] = 1U;
        __Vtemp190[1U] = 0U;
        __Vtemp190[2U] = 0U;
        __Vtemp190[3U] = 0U;
        __Vtemp190[4U] = 0U;
        __Vtemp190[5U] = 0U;
        __Vtemp190[6U] = 0U;
        __Vtemp190[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp191, __Vtemp190, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
        __Vtemp196[0U] = 1U;
        __Vtemp196[1U] = 0U;
        __Vtemp196[2U] = 0U;
        __Vtemp196[3U] = 0U;
        __Vtemp196[4U] = 0U;
        __Vtemp196[5U] = 0U;
        __Vtemp196[6U] = 0U;
        __Vtemp196[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp197, __Vtemp196, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source));
        __Vtemp202[0U] = 1U;
        __Vtemp202[1U] = 0U;
        __Vtemp202[2U] = 0U;
        __Vtemp202[3U] = 0U;
        __Vtemp202[4U] = 0U;
        __Vtemp202[5U] = 0U;
        __Vtemp202[6U] = 0U;
        __Vtemp202[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp203, __Vtemp202, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY((1U & ((~ ((0U != (((((((1U 
                                                 & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                 ? 
                                                __Vtemp191[0U]
                                                 : 0U) 
                                               ^ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                   ? 
                                                  __Vtemp197[0U]
                                                   : 0U)) 
                                              | (((1U 
                                                   & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                      & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                   ? 
                                                  __Vtemp191[1U]
                                                   : 0U) 
                                                 ^ 
                                                 (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                   ? 
                                                  __Vtemp197[1U]
                                                   : 0U))) 
                                             | (((1U 
                                                  & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                     & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                  ? 
                                                 __Vtemp191[2U]
                                                  : 0U) 
                                                ^ (
                                                   ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                    ? 
                                                   __Vtemp197[2U]
                                                    : 0U))) 
                                            | (((1U 
                                                 & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                 ? 
                                                __Vtemp191[3U]
                                                 : 0U) 
                                               ^ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                   ? 
                                                  __Vtemp197[3U]
                                                   : 0U))) 
                                           | (((1U 
                                                & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                ? __Vtemp191[4U]
                                                : 0U) 
                                              ^ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                  ? 
                                                 __Vtemp197[4U]
                                                  : 0U)))) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 ((((((1U 
                                                       & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                       ? 
                                                      __Vtemp203[0U]
                                                       : 0U) 
                                                     | ((1U 
                                                         & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                         ? 
                                                        __Vtemp203[1U]
                                                         : 0U)) 
                                                    | ((1U 
                                                        & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                        ? 
                                                       __Vtemp203[2U]
                                                        : 0U)) 
                                                   | ((1U 
                                                       & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                       ? 
                                                      __Vtemp203[3U]
                                                       : 0U)) 
                                                  | ((1U 
                                                      & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                      ? 
                                                     __Vtemp203[4U]
                                                      : 0U))))))) 
                               & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8546: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 8546, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8554:11
verbose&&done_reset        
    ) {
        __Vtemp208[0U] = 1U;
        __Vtemp208[1U] = 0U;
        __Vtemp208[2U] = 0U;
        __Vtemp208[3U] = 0U;
        __Vtemp208[4U] = 0U;
        __Vtemp208[5U] = 0U;
        __Vtemp208[6U] = 0U;
        __Vtemp208[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp209, __Vtemp208, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
        __Vtemp214[0U] = 1U;
        __Vtemp214[1U] = 0U;
        __Vtemp214[2U] = 0U;
        __Vtemp214[3U] = 0U;
        __Vtemp214[4U] = 0U;
        __Vtemp214[5U] = 0U;
        __Vtemp214[6U] = 0U;
        __Vtemp214[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp215, __Vtemp214, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source));
        __Vtemp220[0U] = 1U;
        __Vtemp220[1U] = 0U;
        __Vtemp220[2U] = 0U;
        __Vtemp220[3U] = 0U;
        __Vtemp220[4U] = 0U;
        __Vtemp220[5U] = 0U;
        __Vtemp220[6U] = 0U;
        __Vtemp220[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp221, __Vtemp220, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                               & (~ ((0U != (((((((1U 
                                                   & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                      & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                   ? 
                                                  __Vtemp209[0U]
                                                   : 0U) 
                                                 ^ 
                                                 (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                   ? 
                                                  __Vtemp215[0U]
                                                   : 0U)) 
                                                | (((1U 
                                                     & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                        & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                     ? 
                                                    __Vtemp209[1U]
                                                     : 0U) 
                                                   ^ 
                                                   (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                     & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                     ? 
                                                    __Vtemp215[1U]
                                                     : 0U))) 
                                               | (((1U 
                                                    & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                    ? 
                                                   __Vtemp209[2U]
                                                    : 0U) 
                                                  ^ 
                                                  (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                    ? 
                                                   __Vtemp215[2U]
                                                    : 0U))) 
                                              | (((1U 
                                                   & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                      & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                   ? 
                                                  __Vtemp209[3U]
                                                   : 0U) 
                                                 ^ 
                                                 (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                   ? 
                                                  __Vtemp215[3U]
                                                   : 0U))) 
                                             | (((1U 
                                                  & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                     & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                  ? 
                                                 __Vtemp209[4U]
                                                  : 0U) 
                                                ^ (
                                                   ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                    ? 
                                                   __Vtemp215[4U]
                                                    : 0U)))) 
                                     | (~ (IData)((0U 
                                                   != 
                                                   ((((((1U 
                                                         & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                         ? 
                                                        __Vtemp221[0U]
                                                         : 0U) 
                                                       | ((1U 
                                                           & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                           ? 
                                                          __Vtemp221[1U]
                                                           : 0U)) 
                                                      | ((1U 
                                                          & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                          ? 
                                                         __Vtemp221[2U]
                                                          : 0U)) 
                                                     | ((1U 
                                                         & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                         ? 
                                                        __Vtemp221[3U]
                                                         : 0U)) 
                                                    | ((1U 
                                                        & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))
                                                        ? 
                                                       __Vtemp221[4U]
                                                        : 0U))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8567:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (((~ (IData)((0U 
                                                != 
                                                ((((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[0U] 
                                                    | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[1U]) 
                                                   | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[2U]) 
                                                  | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[3U]) 
                                                 | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[4U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                               & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8570: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 8570, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8578:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                               & (~ (((~ (IData)((0U 
                                                  != 
                                                  ((((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[0U] 
                                                      | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[1U]) 
                                                     | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[2U]) 
                                                    | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[3U]) 
                                                   | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[4U])))) 
                                      | (0U == vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                     | (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog 
                                        < vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8639:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (((~ (IData)((0U 
                                                != 
                                                ((((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[0U] 
                                                    | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[1U]) 
                                                   | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[2U]) 
                                                  | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[3U]) 
                                                 | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[4U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                               & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8642: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 8642, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:8650:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                               & (~ (((~ (IData)((0U 
                                                  != 
                                                  ((((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[0U] 
                                                      | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[1U]) 
                                                     | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[2U]) 
                                                    | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[3U]) 
                                                   | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[4U])))) 
                                      | (0U == vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                     | (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog_1 
                                        < vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__61(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__61\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__adapter__DOT__idx 
        = vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__success_sim__DOT_____05Fin_bits_reg 
        = vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_bits_reg;
    vlTOPp->__Vdly__TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg 
        = vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg;
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25089:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                             & ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_89)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25092: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 25092, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25100:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                               & ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_89))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25113:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25116: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 25116, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25124:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25148:11
done_reset        
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25151: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 25151, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25159:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (3U > (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25172:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25175: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 25175, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25183:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25207:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25210: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 25210, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25218:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (6U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25242:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                             & ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_89)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25245: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 25245, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25253:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                               & ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_89))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25266:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25269: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 25269, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25277:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25301:11
done_reset        
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25304: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 25304, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25312:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (3U > (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25325:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25328: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 25328, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25336:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25360:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25363: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 25363, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25371:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25384:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25387: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 25387, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25395:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25419:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0xcU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25422: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 25422, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25430:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0xcU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25443:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_398) 
                             | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                & ((((((((((VL_ULL(0) 
                                            == (VL_ULL(0x1ffffb000) 
                                                & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1ffff0000) 
                                                  & (QData)((IData)(
                                                                    (0x10000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1ffff0000) 
                                                 & (QData)((IData)(
                                                                   (0x20000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                         | (VL_ULL(0) 
                                            == (VL_ULL(0x1fffef000) 
                                                & (QData)((IData)(
                                                                  (0x100000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                        | (VL_ULL(0) 
                                           == (VL_ULL(0x1ffff0000) 
                                               & (QData)((IData)(
                                                                 (0x2000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                       | (VL_ULL(0) 
                                          == (VL_ULL(0x1fffff000) 
                                              & (QData)((IData)(
                                                                (0x2010000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                      | (VL_ULL(0) 
                                         == (VL_ULL(0x1fc000000) 
                                             & (QData)((IData)(
                                                               (0xc000000U 
                                                                ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                     | (VL_ULL(0) == 
                                        (VL_ULL(0x1fffff000) 
                                         & (QData)((IData)(
                                                           (0x10000000U 
                                                            ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                    | (VL_ULL(0) == 
                                       (VL_ULL(0x1fffff000) 
                                        & (QData)((IData)(
                                                          (0x54000000U 
                                                           ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                   | (VL_ULL(0) == 
                                      (VL_ULL(0x1f0000000) 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25446: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 25446, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25454:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_398) 
                               | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                  & ((((((((((VL_ULL(0) 
                                              == (VL_ULL(0x1ffffb000) 
                                                  & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))) 
                                             | (VL_ULL(0) 
                                                == 
                                                (VL_ULL(0x1ffff0000) 
                                                 & (QData)((IData)(
                                                                   (0x10000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                            | (VL_ULL(0) 
                                               == (VL_ULL(0x1ffff0000) 
                                                   & (QData)((IData)(
                                                                     (0x20000U 
                                                                      ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1fffef000) 
                                                  & (QData)((IData)(
                                                                    (0x100000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1ffff0000) 
                                                 & (QData)((IData)(
                                                                   (0x2000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                         | (VL_ULL(0) 
                                            == (VL_ULL(0x1fffff000) 
                                                & (QData)((IData)(
                                                                  (0x2010000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                        | (VL_ULL(0) 
                                           == (VL_ULL(0x1fc000000) 
                                               & (QData)((IData)(
                                                                 (0xc000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                       | (VL_ULL(0) 
                                          == (VL_ULL(0x1fffff000) 
                                              & (QData)((IData)(
                                                                (0x10000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                      | (VL_ULL(0) 
                                         == (VL_ULL(0x1fffff000) 
                                             & (QData)((IData)(
                                                               (0x54000000U 
                                                                ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                     | (VL_ULL(0) == 
                                        (VL_ULL(0x1f0000000) 
                                         & (QData)((IData)(
                                                           (0x80000000U 
                                                            ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25478:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25481: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 25481, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25489:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25513:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25516: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 25516, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25524:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (4U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25548:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_398) 
                                | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                   & ((((((((VL_ULL(0) 
                                             == (VL_ULL(0x1ffffb000) 
                                                 & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))) 
                                            | (VL_ULL(0) 
                                               == (VL_ULL(0x1fffef000) 
                                                   & (QData)((IData)(
                                                                     (0x100000U 
                                                                      ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1ffff0000) 
                                                  & (QData)((IData)(
                                                                    (0x2000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x2010000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                         | (VL_ULL(0) 
                                            == (VL_ULL(0x1fc000000) 
                                                & (QData)((IData)(
                                                                  (0xc000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                        | (VL_ULL(0) 
                                           == (VL_ULL(0x1fffff000) 
                                               & (QData)((IData)(
                                                                 (0x10000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                       | (VL_ULL(0) 
                                          == (VL_ULL(0x1fffff000) 
                                              & (QData)((IData)(
                                                                (0x54000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                      | (VL_ULL(0) 
                                         == (VL_ULL(0x1f0000000) 
                                             & (QData)((IData)(
                                                               (0x80000000U 
                                                                ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (0U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25551: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 25551, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25559:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (0U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                               & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_398) 
                                  | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                     & ((((((((VL_ULL(0) 
                                               == (VL_ULL(0x1ffffb000) 
                                                   & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))) 
                                              | (VL_ULL(0) 
                                                 == 
                                                 (VL_ULL(0x1fffef000) 
                                                  & (QData)((IData)(
                                                                    (0x100000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                             | (VL_ULL(0) 
                                                == 
                                                (VL_ULL(0x1ffff0000) 
                                                 & (QData)((IData)(
                                                                   (0x2000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                            | (VL_ULL(0) 
                                               == (VL_ULL(0x1fffff000) 
                                                   & (QData)((IData)(
                                                                     (0x2010000U 
                                                                      ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1fc000000) 
                                                  & (QData)((IData)(
                                                                    (0xc000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x10000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                         | (VL_ULL(0) 
                                            == (VL_ULL(0x1fffff000) 
                                                & (QData)((IData)(
                                                                  (0x54000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                        | (VL_ULL(0) 
                                           == (VL_ULL(0x1f0000000) 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25583:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (0U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25586: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 25586, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25594:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (0U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25618:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (0U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25621: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 25621, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25629:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (0U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25642:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_398) 
                                | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                   & ((((((((VL_ULL(0) 
                                             == (VL_ULL(0x1ffffb000) 
                                                 & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))) 
                                            | (VL_ULL(0) 
                                               == (VL_ULL(0x1fffef000) 
                                                   & (QData)((IData)(
                                                                     (0x100000U 
                                                                      ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1ffff0000) 
                                                  & (QData)((IData)(
                                                                    (0x2000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x2010000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                         | (VL_ULL(0) 
                                            == (VL_ULL(0x1fc000000) 
                                                & (QData)((IData)(
                                                                  (0xc000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                        | (VL_ULL(0) 
                                           == (VL_ULL(0x1fffff000) 
                                               & (QData)((IData)(
                                                                 (0x10000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                       | (VL_ULL(0) 
                                          == (VL_ULL(0x1fffff000) 
                                              & (QData)((IData)(
                                                                (0x54000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                      | (VL_ULL(0) 
                                         == (VL_ULL(0x1f0000000) 
                                             & (QData)((IData)(
                                                               (0x80000000U 
                                                                ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25645: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 25645, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25653:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                               & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_398) 
                                  | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                     & ((((((((VL_ULL(0) 
                                               == (VL_ULL(0x1ffffb000) 
                                                   & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))) 
                                              | (VL_ULL(0) 
                                                 == 
                                                 (VL_ULL(0x1fffef000) 
                                                  & (QData)((IData)(
                                                                    (0x100000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                             | (VL_ULL(0) 
                                                == 
                                                (VL_ULL(0x1ffff0000) 
                                                 & (QData)((IData)(
                                                                   (0x2000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                            | (VL_ULL(0) 
                                               == (VL_ULL(0x1fffff000) 
                                                   & (QData)((IData)(
                                                                     (0x2010000U 
                                                                      ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1fc000000) 
                                                  & (QData)((IData)(
                                                                    (0xc000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x10000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                         | (VL_ULL(0) 
                                            == (VL_ULL(0x1fffff000) 
                                                & (QData)((IData)(
                                                                  (0x54000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                        | (VL_ULL(0) 
                                           == (VL_ULL(0x1f0000000) 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25677:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25680: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 25680, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25688:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25712:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25715: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 25715, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25723:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25736:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                             & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                & (((((((((VL_ULL(0) 
                                           == (VL_ULL(0x1ffffb000) 
                                               & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x3000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                         | (VL_ULL(0) 
                                            == (VL_ULL(0x1fffef000) 
                                                & (QData)((IData)(
                                                                  (0x100000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                        | (VL_ULL(0) 
                                           == (VL_ULL(0x1ffff0000) 
                                               & (QData)((IData)(
                                                                 (0x2000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                       | (VL_ULL(0) 
                                          == (VL_ULL(0x1fffff000) 
                                              & (QData)((IData)(
                                                                (0x2010000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                      | (VL_ULL(0) 
                                         == (VL_ULL(0x1fc000000) 
                                             & (QData)((IData)(
                                                               (0xc000000U 
                                                                ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                     | (VL_ULL(0) == 
                                        (VL_ULL(0x1fffff000) 
                                         & (QData)((IData)(
                                                           (0x10000000U 
                                                            ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                    | (VL_ULL(0) == 
                                       (VL_ULL(0x1fffff000) 
                                        & (QData)((IData)(
                                                          (0x54000000U 
                                                           ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                   | (VL_ULL(0) == 
                                      (VL_ULL(0x1f0000000) 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (2U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25739: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 25739, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25747:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (2U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                               & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                  & (((((((((VL_ULL(0) 
                                             == (VL_ULL(0x1ffffb000) 
                                                 & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))) 
                                            | (VL_ULL(0) 
                                               == (VL_ULL(0x1fffff000) 
                                                   & (QData)((IData)(
                                                                     (0x3000U 
                                                                      ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1fffef000) 
                                                  & (QData)((IData)(
                                                                    (0x100000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1ffff0000) 
                                                 & (QData)((IData)(
                                                                   (0x2000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                         | (VL_ULL(0) 
                                            == (VL_ULL(0x1fffff000) 
                                                & (QData)((IData)(
                                                                  (0x2010000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                        | (VL_ULL(0) 
                                           == (VL_ULL(0x1fc000000) 
                                               & (QData)((IData)(
                                                                 (0xc000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                       | (VL_ULL(0) 
                                          == (VL_ULL(0x1fffff000) 
                                              & (QData)((IData)(
                                                                (0x10000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                      | (VL_ULL(0) 
                                         == (VL_ULL(0x1fffff000) 
                                             & (QData)((IData)(
                                                               (0x54000000U 
                                                                ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                     | (VL_ULL(0) == 
                                        (VL_ULL(0x1f0000000) 
                                         & (QData)((IData)(
                                                           (0x80000000U 
                                                            ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25771:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (2U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25774: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 25774, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25782:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (2U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25806:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (2U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25809: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 25809, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25817:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (2U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25830:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                             & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                & (((((((((VL_ULL(0) 
                                           == (VL_ULL(0x1ffffb000) 
                                               & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x3000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                         | (VL_ULL(0) 
                                            == (VL_ULL(0x1fffef000) 
                                                & (QData)((IData)(
                                                                  (0x100000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                        | (VL_ULL(0) 
                                           == (VL_ULL(0x1ffff0000) 
                                               & (QData)((IData)(
                                                                 (0x2000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                       | (VL_ULL(0) 
                                          == (VL_ULL(0x1fffff000) 
                                              & (QData)((IData)(
                                                                (0x2010000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                      | (VL_ULL(0) 
                                         == (VL_ULL(0x1fc000000) 
                                             & (QData)((IData)(
                                                               (0xc000000U 
                                                                ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                     | (VL_ULL(0) == 
                                        (VL_ULL(0x1fffff000) 
                                         & (QData)((IData)(
                                                           (0x10000000U 
                                                            ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                    | (VL_ULL(0) == 
                                       (VL_ULL(0x1fffff000) 
                                        & (QData)((IData)(
                                                          (0x54000000U 
                                                           ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                   | (VL_ULL(0) == 
                                      (VL_ULL(0x1f0000000) 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (3U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25833: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 25833, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25841:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (3U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                               & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                  & (((((((((VL_ULL(0) 
                                             == (VL_ULL(0x1ffffb000) 
                                                 & (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))) 
                                            | (VL_ULL(0) 
                                               == (VL_ULL(0x1fffff000) 
                                                   & (QData)((IData)(
                                                                     (0x3000U 
                                                                      ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1fffef000) 
                                                  & (QData)((IData)(
                                                                    (0x100000U 
                                                                     ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1ffff0000) 
                                                 & (QData)((IData)(
                                                                   (0x2000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                         | (VL_ULL(0) 
                                            == (VL_ULL(0x1fffff000) 
                                                & (QData)((IData)(
                                                                  (0x2010000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                        | (VL_ULL(0) 
                                           == (VL_ULL(0x1fc000000) 
                                               & (QData)((IData)(
                                                                 (0xc000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                       | (VL_ULL(0) 
                                          == (VL_ULL(0x1fffff000) 
                                              & (QData)((IData)(
                                                                (0x10000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                      | (VL_ULL(0) 
                                         == (VL_ULL(0x1fffff000) 
                                             & (QData)((IData)(
                                                               (0x54000000U 
                                                                ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                     | (VL_ULL(0) == 
                                        (VL_ULL(0x1f0000000) 
                                         & (QData)((IData)(
                                                           (0x80000000U 
                                                            ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25865:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (3U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25868: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 25868, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25876:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (3U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25900:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (3U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25903: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 25903, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25911:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (3U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25924:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_398) 
                                | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_89))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (5U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25927: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 25927, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25935:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (5U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                               & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_398) 
                                  | ((6U >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_89)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25959:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (5U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25962: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 25962, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25970:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (5U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (0xfffU & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25994:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (5U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:25997: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 25997, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26005:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (5U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26029:11
done_reset        
    ) {
        if (VL_UNLIKELY(((6U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                         & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26032: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26032, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26040:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (6U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26053:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26056: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26056, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26064:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26077:11
done_reset        
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26080: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26080, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26088:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (3U > (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26101:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                          [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26104: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26104, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26112:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                            [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26125:11
done_reset        
    ) {
        if (VL_UNLIKELY((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26128: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26128, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26136:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26149:11
done_reset        
    ) {
        if (VL_UNLIKELY((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                         [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26152: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26152, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26160:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                         [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26173:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26176: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26176, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26184:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26208:11
done_reset        
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26211: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26211, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26219:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (3U > (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26232:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U < vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                          [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26235: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26235, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26243:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (2U < vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                            [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26256:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U == vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                          [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26259: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26259, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26267:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (2U == vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                            [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26280:11
done_reset        
    ) {
        if (VL_UNLIKELY((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26283: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26283, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26291:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26315:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26318: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26318, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26326:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26350:11
done_reset        
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26353: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26353, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26361:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (3U > (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26374:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U < vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                          [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26377: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26377, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26385:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (2U < vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                            [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26398:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U == vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                          [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26401: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26401, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26409:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (2U == vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                            [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26422:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                              [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                             | vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                             [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1])) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26425: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26425, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26433:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                               [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26457:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26460: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26460, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26468:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26481:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                          [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26484: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26484, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26492:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                            [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26505:11
done_reset        
    ) {
        if (VL_UNLIKELY((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26508: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26508, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26516:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26540:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26543: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26543, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26551:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26564:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                          [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26567: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26567, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26575:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                            [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26588:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                              [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                             | vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                             [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1])) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26591: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26591, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26599:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                               [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26623:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26626: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26626, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26634:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26647:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                          [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26650: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26650, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26658:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                            [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26671:11
done_reset        
    ) {
        if (VL_UNLIKELY((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26674: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26674, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26682:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26739:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                            ? 1U : 4U) != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__opcode)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26742: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26742, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26750:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                              ? 1U : 4U) != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__opcode))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26774:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__size)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26777: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26777, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26785:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__size))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26809:11
done_reset        
    ) {
        if (VL_UNLIKELY(((vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                          != vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__address) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26812: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26812, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26820:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                            != vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__address)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26833:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__opcode_1)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26836: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26836, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26844:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__opcode_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26857:11
done_reset        
    ) {
        if (VL_UNLIKELY(((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                          [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__param_1)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26860: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26860, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26868:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                            [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__param_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26881:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__size_1)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26884: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26884, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26892:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__size_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26905:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__source_1)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26908: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26908, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26916:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__source_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26929:11
done_reset        
    ) {
        if (VL_UNLIKELY(((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink
                          [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__sink)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26932: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26932, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26940:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink
                            [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__sink))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26953:11
done_reset        
    ) {
        if (VL_UNLIKELY(((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                          [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__denied)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26956: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26956, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26964:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                            [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__denied))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26977:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26980: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 26980, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:26988:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:27001:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight) 
                              >> (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                             | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:27004: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 27004, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:27012:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight) 
                                >> (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:27025:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                              == ((7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                           ? 1U : 4U))
                                   ? 4U : ((6U == (
                                                   (7U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                    ? 1U
                                                    : 4U))
                                            ? 4U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___GEN_30)))) 
                             | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == ((7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                             ? 1U : 4U))
                                     ? 4U : ((6U == 
                                              ((7U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                ? 1U
                                                : 4U))
                                              ? 5U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___GEN_30)))))) 
                         & (((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                             & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:27028: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 27028, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:27036:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                           & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == ((7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                             ? 1U : 4U))
                                     ? 4U : ((6U == 
                                              ((7U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                ? 1U
                                                : 4U))
                                              ? 4U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___GEN_30)))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                  == ((7U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                               ? 1U
                                               : 4U))
                                       ? 4U : ((6U 
                                                == 
                                                ((7U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                  ? 1U
                                                  : 4U))
                                                ? 5U
                                                : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___GEN_30))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:27049:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                             & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:27052: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 27052, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:27060:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                           & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:27073:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                              == ((7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                >> 1U)))
                                   ? 4U : ((6U == (7U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                      >> 1U)))
                                            ? 4U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___GEN_46)))) 
                             | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == ((7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                  >> 1U)))
                                     ? 4U : ((6U == 
                                              (7U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                >> 1U)))
                                              ? 5U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___GEN_46)))))) 
                         & (((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                             & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:27076: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 27076, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:27084:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                           & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == ((7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                  >> 1U)))
                                     ? 4U : ((6U == 
                                              (7U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                >> 1U)))
                                              ? 4U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___GEN_46)))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                  == ((7U == (7U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                               >> 1U)))
                                       ? 4U : ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                    >> 1U)))
                                                ? 5U
                                                : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___GEN_46))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:27097:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (0x7fU & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes) 
                                        >> ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            << 3U)) 
                                       >> 1U))) & (
                                                   ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                      & (0U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                     & (6U 
                                                        != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                                                    & (~ 
                                                       (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                                         & (0U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                                        & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                                                   & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:27100: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 27100, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:27108:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                           & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (0x7fU & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes) 
                                          >> ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                              << 3U)) 
                                         >> 1U)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:27121:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_d_ready)) 
                             | (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)))) 
                         & (((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                               & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid)) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:27124: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 27124, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:27132:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid)) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_d_ready)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:27143:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                                      ? 1U : 0U) != 
                                    ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                      ? (1U & ((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                      : 0U)) | (~ (
                                                   ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                                                    ? 1U
                                                    : 0U)))) 
                               & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:27146: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 27146, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:27154:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                               & (~ (((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                                        ? 1U : 0U) 
                                      != ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                           ? (1U & 
                                              ((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                           : 0U)) | 
                                     (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                                          ? 1U : 0U)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 8 (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:27167:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight)) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                               & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:27170: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 27170, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:27178:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                               & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight)) 
                                      | (0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                     | (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__watchdog 
                                        < vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:27191:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:27194: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 27194, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:27202:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:27215:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (0x7fU & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes_1) 
                                        >> ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            << 3U)) 
                                       >> 1U))) & (
                                                   (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                     & (0U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                                    & (6U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                                                   & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:27218: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v", 27218, "");
        }
    }
    if (
        // $c function at /home/hmy/chipyard/sims/verilator/generated-src/chipyard.TestHarness.FIRAccelRocketSymmetricConfig/chipyard.TestHarness.FIRAccelRocketSymmetricConfig.harness.v:27226:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (0x7fU & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes_1) 
                                          >> ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                              << 3U)) 
                                         >> 1U)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}
