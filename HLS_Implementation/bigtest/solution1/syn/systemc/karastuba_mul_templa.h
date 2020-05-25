// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _karastuba_mul_templa_HH_
#define _karastuba_mul_templa_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "karastuba_mul_templa_4.h"
#include "karastuba_mul_temEe0.h"

namespace ap_rtl {

struct karastuba_mul_templa : public sc_module {
    // Port declarations 29
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<5> > lhs0_tmp_digits_data_V_address0;
    sc_out< sc_logic > lhs0_tmp_digits_data_V_ce0;
    sc_in< sc_lv<64> > lhs0_tmp_digits_data_V_q0;
    sc_out< sc_lv<5> > lhs1_tmp_digits_data_V_address0;
    sc_out< sc_logic > lhs1_tmp_digits_data_V_ce0;
    sc_in< sc_lv<64> > lhs1_tmp_digits_data_V_q0;
    sc_out< sc_lv<5> > rhs0_tmp_digits_data_V_address0;
    sc_out< sc_logic > rhs0_tmp_digits_data_V_ce0;
    sc_in< sc_lv<64> > rhs0_tmp_digits_data_V_q0;
    sc_out< sc_lv<5> > rhs1_tmp_digits_data_V_address0;
    sc_out< sc_logic > rhs1_tmp_digits_data_V_ce0;
    sc_in< sc_lv<64> > rhs1_tmp_digits_data_V_q0;
    sc_out< sc_lv<6> > cross_mul_digits_data_V_address0;
    sc_out< sc_logic > cross_mul_digits_data_V_ce0;
    sc_out< sc_logic > cross_mul_digits_data_V_we0;
    sc_out< sc_lv<64> > cross_mul_digits_data_V_d0;
    sc_in< sc_lv<64> > cross_mul_digits_data_V_q0;
    sc_out< sc_lv<6> > cross_mul_digits_data_V_address1;
    sc_out< sc_logic > cross_mul_digits_data_V_ce1;
    sc_out< sc_logic > cross_mul_digits_data_V_we1;
    sc_out< sc_lv<64> > cross_mul_digits_data_V_d1;
    sc_in< sc_lv<64> > cross_mul_digits_data_V_q1;
    sc_out< sc_lv<4> > ap_return;


    // Module declarations
    karastuba_mul_templa(sc_module_name name);
    SC_HAS_PROCESS(karastuba_mul_templa);

    ~karastuba_mul_templa();

    sc_trace_file* mVcdFile;

    karastuba_mul_temEe0* add0_digits_data_V_U;
    karastuba_mul_temEe0* add1_digits_data_V_U;
    karastuba_mul_templa_4* grp_karastuba_mul_templa_4_fu_180;
    sc_signal< sc_lv<6> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<2> > p_088_0_i_reg_134;
    sc_signal< sc_lv<6> > i_0_i_reg_146;
    sc_signal< sc_lv<2> > p_088_0_i1_reg_157;
    sc_signal< sc_lv<6> > i_0_i2_reg_169;
    sc_signal< sc_lv<1> > icmp_ln51_fu_192_p2;
    sc_signal< sc_lv<1> > icmp_ln51_reg_326;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter4;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > icmp_ln51_reg_326_pp0_iter1_reg;
    sc_signal< sc_lv<1> > icmp_ln51_reg_326_pp0_iter2_reg;
    sc_signal< sc_lv<1> > icmp_ln51_reg_326_pp0_iter3_reg;
    sc_signal< sc_lv<6> > i_fu_198_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<64> > zext_ln56_fu_204_p1;
    sc_signal< sc_lv<64> > zext_ln56_reg_335;
    sc_signal< sc_lv<64> > zext_ln56_reg_335_pp0_iter1_reg;
    sc_signal< sc_lv<64> > zext_ln56_reg_335_pp0_iter2_reg;
    sc_signal< sc_lv<64> > zext_ln56_reg_335_pp0_iter3_reg;
    sc_signal< sc_lv<64> > lhs0_tmp_digits_data_6_reg_350;
    sc_signal< sc_lv<64> > lhs0_tmp_digits_data_6_reg_350_pp0_iter2_reg;
    sc_signal< sc_lv<64> > lhs1_tmp_digits_data_6_reg_356;
    sc_signal< sc_lv<64> > lhs1_tmp_digits_data_6_reg_356_pp0_iter2_reg;
    sc_signal< sc_lv<65> > add_ln700_fu_216_p2;
    sc_signal< sc_lv<65> > add_ln700_reg_362;
    sc_signal< sc_lv<64> > add_ln209_6_fu_244_p2;
    sc_signal< sc_lv<64> > add_ln209_6_reg_367;
    sc_signal< sc_lv<2> > trunc_ln_reg_372;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_lv<1> > icmp_ln51_1_fu_259_p2;
    sc_signal< sc_lv<1> > icmp_ln51_1_reg_377;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage0;
    sc_signal< bool > ap_block_state8_pp1_stage0_iter0;
    sc_signal< bool > ap_block_state9_pp1_stage0_iter1;
    sc_signal< bool > ap_block_state10_pp1_stage0_iter2;
    sc_signal< bool > ap_block_state11_pp1_stage0_iter3;
    sc_signal< bool > ap_block_state12_pp1_stage0_iter4;
    sc_signal< bool > ap_block_pp1_stage0_11001;
    sc_signal< sc_lv<1> > icmp_ln51_1_reg_377_pp1_iter1_reg;
    sc_signal< sc_lv<1> > icmp_ln51_1_reg_377_pp1_iter2_reg;
    sc_signal< sc_lv<1> > icmp_ln51_1_reg_377_pp1_iter3_reg;
    sc_signal< sc_lv<6> > i_23_fu_265_p2;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter0;
    sc_signal< sc_lv<64> > zext_ln56_1_fu_271_p1;
    sc_signal< sc_lv<64> > zext_ln56_1_reg_386;
    sc_signal< sc_lv<64> > zext_ln56_1_reg_386_pp1_iter1_reg;
    sc_signal< sc_lv<64> > zext_ln56_1_reg_386_pp1_iter2_reg;
    sc_signal< sc_lv<64> > zext_ln56_1_reg_386_pp1_iter3_reg;
    sc_signal< sc_lv<64> > rhs0_tmp_digits_data_6_reg_401;
    sc_signal< sc_lv<64> > rhs0_tmp_digits_data_6_reg_401_pp1_iter2_reg;
    sc_signal< sc_lv<64> > rhs1_tmp_digits_data_6_reg_407;
    sc_signal< sc_lv<64> > rhs1_tmp_digits_data_6_reg_407_pp1_iter2_reg;
    sc_signal< sc_lv<65> > add_ln700_7_fu_283_p2;
    sc_signal< sc_lv<65> > add_ln700_7_reg_413;
    sc_signal< sc_lv<64> > add_ln209_8_fu_311_p2;
    sc_signal< sc_lv<64> > add_ln209_8_reg_418;
    sc_signal< sc_lv<2> > trunc_ln858_3_reg_423;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter3;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< bool > ap_block_pp1_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp1_exit_iter0_state8;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter4;
    sc_signal< sc_lv<5> > add0_digits_data_V_address0;
    sc_signal< sc_logic > add0_digits_data_V_ce0;
    sc_signal< sc_logic > add0_digits_data_V_we0;
    sc_signal< sc_lv<64> > add0_digits_data_V_q0;
    sc_signal< sc_lv<5> > add1_digits_data_V_address0;
    sc_signal< sc_logic > add1_digits_data_V_ce0;
    sc_signal< sc_logic > add1_digits_data_V_we0;
    sc_signal< sc_lv<64> > add1_digits_data_V_q0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_180_ap_start;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_180_ap_done;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_180_ap_idle;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_180_ap_ready;
    sc_signal< sc_lv<5> > grp_karastuba_mul_templa_4_fu_180_lhs_digits_data_V_address0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_180_lhs_digits_data_V_ce0;
    sc_signal< sc_lv<5> > grp_karastuba_mul_templa_4_fu_180_rhs_digits_data_V_address0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_180_rhs_digits_data_V_ce0;
    sc_signal< sc_lv<6> > grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_address0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_ce0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_we0;
    sc_signal< sc_lv<64> > grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_d0;
    sc_signal< sc_lv<6> > grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_address1;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_ce1;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_we1;
    sc_signal< sc_lv<64> > grp_karastuba_mul_templa_4_fu_180_res_digits_data_V_d1;
    sc_signal< sc_lv<4> > grp_karastuba_mul_templa_4_fu_180_ap_return;
    sc_signal< sc_lv<2> > ap_phi_mux_p_088_0_i_phi_fu_138_p4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<2> > ap_phi_mux_p_088_0_i1_phi_fu_161_p4;
    sc_signal< bool > ap_block_pp1_stage0;
    sc_signal< sc_logic > grp_karastuba_mul_templa_4_fu_180_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<65> > zext_ln209_fu_210_p1;
    sc_signal< sc_lv<65> > zext_ln700_fu_213_p1;
    sc_signal< sc_lv<66> > zext_ln700_10_fu_230_p1;
    sc_signal< sc_lv<66> > zext_ln51_fu_222_p1;
    sc_signal< sc_lv<64> > zext_ln700_9_fu_226_p1;
    sc_signal< sc_lv<64> > add_ln209_fu_239_p2;
    sc_signal< sc_lv<66> > tmp_V_fu_233_p2;
    sc_signal< sc_lv<65> > zext_ln209_1_fu_277_p1;
    sc_signal< sc_lv<65> > zext_ln700_11_fu_280_p1;
    sc_signal< sc_lv<66> > zext_ln700_13_fu_297_p1;
    sc_signal< sc_lv<66> > zext_ln51_1_fu_289_p1;
    sc_signal< sc_lv<64> > zext_ln700_12_fu_293_p1;
    sc_signal< sc_lv<64> > add_ln209_7_fu_306_p2;
    sc_signal< sc_lv<66> > tmp_V_14_fu_300_p2;
    sc_signal< sc_lv<4> > ap_return_preg;
    sc_signal< sc_lv<6> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_logic > ap_idle_pp1;
    sc_signal< sc_logic > ap_enable_pp1;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<6> ap_ST_fsm_state1;
    static const sc_lv<6> ap_ST_fsm_pp0_stage0;
    static const sc_lv<6> ap_ST_fsm_state7;
    static const sc_lv<6> ap_ST_fsm_pp1_stage0;
    static const sc_lv<6> ap_ST_fsm_state13;
    static const sc_lv<6> ap_ST_fsm_state14;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<6> ap_const_lv6_20;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<32> ap_const_lv32_40;
    static const sc_lv<32> ap_const_lv32_41;
    static const sc_lv<4> ap_const_lv4_0;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add0_digits_data_V_address0();
    void thread_add0_digits_data_V_ce0();
    void thread_add0_digits_data_V_we0();
    void thread_add1_digits_data_V_address0();
    void thread_add1_digits_data_V_ce0();
    void thread_add1_digits_data_V_we0();
    void thread_add_ln209_6_fu_244_p2();
    void thread_add_ln209_7_fu_306_p2();
    void thread_add_ln209_8_fu_311_p2();
    void thread_add_ln209_fu_239_p2();
    void thread_add_ln700_7_fu_283_p2();
    void thread_add_ln700_fu_216_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp1_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state7();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp1_stage0();
    void thread_ap_block_pp1_stage0_11001();
    void thread_ap_block_pp1_stage0_subdone();
    void thread_ap_block_state10_pp1_stage0_iter2();
    void thread_ap_block_state11_pp1_stage0_iter3();
    void thread_ap_block_state12_pp1_stage0_iter4();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage0_iter1();
    void thread_ap_block_state4_pp0_stage0_iter2();
    void thread_ap_block_state5_pp0_stage0_iter3();
    void thread_ap_block_state6_pp0_stage0_iter4();
    void thread_ap_block_state8_pp1_stage0_iter0();
    void thread_ap_block_state9_pp1_stage0_iter1();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_condition_pp1_exit_iter0_state8();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_pp1();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp1();
    void thread_ap_phi_mux_p_088_0_i1_phi_fu_161_p4();
    void thread_ap_phi_mux_p_088_0_i_phi_fu_138_p4();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_cross_mul_digits_data_V_address0();
    void thread_cross_mul_digits_data_V_address1();
    void thread_cross_mul_digits_data_V_ce0();
    void thread_cross_mul_digits_data_V_ce1();
    void thread_cross_mul_digits_data_V_d0();
    void thread_cross_mul_digits_data_V_d1();
    void thread_cross_mul_digits_data_V_we0();
    void thread_cross_mul_digits_data_V_we1();
    void thread_grp_karastuba_mul_templa_4_fu_180_ap_start();
    void thread_i_23_fu_265_p2();
    void thread_i_fu_198_p2();
    void thread_icmp_ln51_1_fu_259_p2();
    void thread_icmp_ln51_fu_192_p2();
    void thread_lhs0_tmp_digits_data_V_address0();
    void thread_lhs0_tmp_digits_data_V_ce0();
    void thread_lhs1_tmp_digits_data_V_address0();
    void thread_lhs1_tmp_digits_data_V_ce0();
    void thread_rhs0_tmp_digits_data_V_address0();
    void thread_rhs0_tmp_digits_data_V_ce0();
    void thread_rhs1_tmp_digits_data_V_address0();
    void thread_rhs1_tmp_digits_data_V_ce0();
    void thread_tmp_V_14_fu_300_p2();
    void thread_tmp_V_fu_233_p2();
    void thread_zext_ln209_1_fu_277_p1();
    void thread_zext_ln209_fu_210_p1();
    void thread_zext_ln51_1_fu_289_p1();
    void thread_zext_ln51_fu_222_p1();
    void thread_zext_ln56_1_fu_271_p1();
    void thread_zext_ln56_fu_204_p1();
    void thread_zext_ln700_10_fu_230_p1();
    void thread_zext_ln700_11_fu_280_p1();
    void thread_zext_ln700_12_fu_293_p1();
    void thread_zext_ln700_13_fu_297_p1();
    void thread_zext_ln700_9_fu_226_p1();
    void thread_zext_ln700_fu_213_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
