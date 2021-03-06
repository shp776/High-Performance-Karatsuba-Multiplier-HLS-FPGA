// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _karastuba_mul_HH_
#define _karastuba_mul_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "Loop_1_proc.h"
#include "karastuba_mul_templa_3.h"
#include "Loop_2_proc.h"
#include "karastuba_mul_lhsbek.h"
#include "karastuba_mul_resbgk.h"
#include "karastuba_mul_AXILiteS_s_axi.h"

namespace ap_rtl {

template<unsigned int C_S_AXI_AXILITES_ADDR_WIDTH = 4,
         unsigned int C_S_AXI_AXILITES_DATA_WIDTH = 32>
struct karastuba_mul : public sc_module {
    // Port declarations 26
    sc_in< sc_logic > s_axi_AXILiteS_AWVALID;
    sc_out< sc_logic > s_axi_AXILiteS_AWREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_AWADDR;
    sc_in< sc_logic > s_axi_AXILiteS_WVALID;
    sc_out< sc_logic > s_axi_AXILiteS_WREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_WDATA;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH/8> > s_axi_AXILiteS_WSTRB;
    sc_in< sc_logic > s_axi_AXILiteS_ARVALID;
    sc_out< sc_logic > s_axi_AXILiteS_ARREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_ARADDR;
    sc_out< sc_logic > s_axi_AXILiteS_RVALID;
    sc_in< sc_logic > s_axi_AXILiteS_RREADY;
    sc_out< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_RDATA;
    sc_out< sc_lv<2> > s_axi_AXILiteS_RRESP;
    sc_out< sc_logic > s_axi_AXILiteS_BVALID;
    sc_in< sc_logic > s_axi_AXILiteS_BREADY;
    sc_out< sc_lv<2> > s_axi_AXILiteS_BRESP;
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_out< sc_logic > interrupt;
    sc_in< sc_lv<64> > hs_input_V_TDATA;
    sc_out< sc_lv<64> > res_output_V_TDATA;
    sc_in< sc_logic > hs_input_V_TVALID;
    sc_out< sc_logic > hs_input_V_TREADY;
    sc_out< sc_logic > res_output_V_TVALID;
    sc_in< sc_logic > res_output_V_TREADY;
    sc_signal< sc_logic > ap_var_for_const0;
    sc_signal< sc_lv<64> > ap_var_for_const2;
    sc_signal< sc_logic > ap_var_for_const1;


    // Module declarations
    karastuba_mul(sc_module_name name);
    SC_HAS_PROCESS(karastuba_mul);

    ~karastuba_mul();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    karastuba_mul_AXILiteS_s_axi<C_S_AXI_AXILITES_ADDR_WIDTH,C_S_AXI_AXILITES_DATA_WIDTH>* karastuba_mul_AXILiteS_s_axi_U;
    karastuba_mul_lhsbek* lhs_digits_data_V_U;
    karastuba_mul_lhsbek* rhs_digits_data_V_U;
    karastuba_mul_resbgk* res_digits_data_V_U;
    Loop_1_proc* Loop_1_proc_U0;
    karastuba_mul_templa_3* karastuba_mul_templa_3_U0;
    Loop_2_proc* Loop_2_proc_U0;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > ap_start;
    sc_signal< sc_logic > ap_ready;
    sc_signal< sc_logic > ap_done;
    sc_signal< sc_logic > ap_idle;
    sc_signal< sc_lv<64> > lhs_digits_data_V_i_q0;
    sc_signal< sc_lv<64> > lhs_digits_data_V_t_q0;
    sc_signal< sc_lv<64> > rhs_digits_data_V_i_q0;
    sc_signal< sc_lv<64> > rhs_digits_data_V_t_q0;
    sc_signal< sc_lv<64> > res_digits_data_V_i_q0;
    sc_signal< sc_lv<64> > res_digits_data_V_t_q0;
    sc_signal< sc_logic > Loop_1_proc_U0_ap_start;
    sc_signal< sc_logic > Loop_1_proc_U0_ap_done;
    sc_signal< sc_logic > Loop_1_proc_U0_ap_continue;
    sc_signal< sc_logic > Loop_1_proc_U0_ap_idle;
    sc_signal< sc_logic > Loop_1_proc_U0_ap_ready;
    sc_signal< sc_logic > Loop_1_proc_U0_hs_input_V_TREADY;
    sc_signal< sc_lv<6> > Loop_1_proc_U0_lhs_digits_data_V_address0;
    sc_signal< sc_logic > Loop_1_proc_U0_lhs_digits_data_V_ce0;
    sc_signal< sc_logic > Loop_1_proc_U0_lhs_digits_data_V_we0;
    sc_signal< sc_lv<64> > Loop_1_proc_U0_lhs_digits_data_V_d0;
    sc_signal< sc_lv<6> > Loop_1_proc_U0_rhs_digits_data_V_address0;
    sc_signal< sc_logic > Loop_1_proc_U0_rhs_digits_data_V_ce0;
    sc_signal< sc_logic > Loop_1_proc_U0_rhs_digits_data_V_we0;
    sc_signal< sc_lv<64> > Loop_1_proc_U0_rhs_digits_data_V_d0;
    sc_signal< sc_logic > ap_channel_done_rhs_digits_data_V;
    sc_signal< sc_logic > Loop_1_proc_U0_rhs_digits_data_V_full_n;
    sc_signal< sc_logic > ap_sync_reg_channel_write_rhs_digits_data_V;
    sc_signal< sc_logic > ap_sync_channel_write_rhs_digits_data_V;
    sc_signal< sc_logic > ap_channel_done_lhs_digits_data_V;
    sc_signal< sc_logic > Loop_1_proc_U0_lhs_digits_data_V_full_n;
    sc_signal< sc_logic > ap_sync_reg_channel_write_lhs_digits_data_V;
    sc_signal< sc_logic > ap_sync_channel_write_lhs_digits_data_V;
    sc_signal< sc_lv<6> > karastuba_mul_templa_3_U0_lhs_digits_data_V_address0;
    sc_signal< sc_logic > karastuba_mul_templa_3_U0_lhs_digits_data_V_ce0;
    sc_signal< sc_lv<64> > karastuba_mul_templa_3_U0_lhs_digits_data_V_d0;
    sc_signal< sc_logic > karastuba_mul_templa_3_U0_lhs_digits_data_V_we0;
    sc_signal< sc_lv<6> > karastuba_mul_templa_3_U0_lhs_digits_data_V_address1;
    sc_signal< sc_logic > karastuba_mul_templa_3_U0_lhs_digits_data_V_ce1;
    sc_signal< sc_lv<64> > karastuba_mul_templa_3_U0_lhs_digits_data_V_d1;
    sc_signal< sc_logic > karastuba_mul_templa_3_U0_lhs_digits_data_V_we1;
    sc_signal< sc_lv<6> > karastuba_mul_templa_3_U0_rhs_digits_data_V_address0;
    sc_signal< sc_logic > karastuba_mul_templa_3_U0_rhs_digits_data_V_ce0;
    sc_signal< sc_lv<64> > karastuba_mul_templa_3_U0_rhs_digits_data_V_d0;
    sc_signal< sc_logic > karastuba_mul_templa_3_U0_rhs_digits_data_V_we0;
    sc_signal< sc_lv<6> > karastuba_mul_templa_3_U0_rhs_digits_data_V_address1;
    sc_signal< sc_logic > karastuba_mul_templa_3_U0_rhs_digits_data_V_ce1;
    sc_signal< sc_lv<64> > karastuba_mul_templa_3_U0_rhs_digits_data_V_d1;
    sc_signal< sc_logic > karastuba_mul_templa_3_U0_rhs_digits_data_V_we1;
    sc_signal< sc_lv<7> > karastuba_mul_templa_3_U0_res_digits_data_V_address0;
    sc_signal< sc_logic > karastuba_mul_templa_3_U0_res_digits_data_V_ce0;
    sc_signal< sc_lv<64> > karastuba_mul_templa_3_U0_res_digits_data_V_d0;
    sc_signal< sc_logic > karastuba_mul_templa_3_U0_res_digits_data_V_we0;
    sc_signal< sc_lv<7> > karastuba_mul_templa_3_U0_res_digits_data_V_address1;
    sc_signal< sc_logic > karastuba_mul_templa_3_U0_res_digits_data_V_ce1;
    sc_signal< sc_lv<64> > karastuba_mul_templa_3_U0_res_digits_data_V_d1;
    sc_signal< sc_logic > karastuba_mul_templa_3_U0_res_digits_data_V_we1;
    sc_signal< sc_logic > karastuba_mul_templa_3_U0_lhs_digits_data_V_read;
    sc_signal< sc_logic > karastuba_mul_templa_3_U0_rhs_digits_data_V_read;
    sc_signal< sc_logic > karastuba_mul_templa_3_U0_ap_start;
    sc_signal< sc_logic > karastuba_mul_templa_3_U0_res_digits_data_V_full_n;
    sc_signal< sc_logic > karastuba_mul_templa_3_U0_res_digits_data_V_write;
    sc_signal< sc_logic > karastuba_mul_templa_3_U0_ap_done;
    sc_signal< sc_logic > karastuba_mul_templa_3_U0_ap_ready;
    sc_signal< sc_logic > karastuba_mul_templa_3_U0_ap_idle;
    sc_signal< sc_logic > karastuba_mul_templa_3_U0_ap_continue;
    sc_signal< sc_logic > ap_channel_done_res_digits_data_V;
    sc_signal< sc_logic > Loop_2_proc_U0_ap_start;
    sc_signal< sc_logic > Loop_2_proc_U0_ap_done;
    sc_signal< sc_logic > Loop_2_proc_U0_ap_continue;
    sc_signal< sc_logic > Loop_2_proc_U0_ap_idle;
    sc_signal< sc_logic > Loop_2_proc_U0_ap_ready;
    sc_signal< sc_lv<7> > Loop_2_proc_U0_res_digits_data_V_address0;
    sc_signal< sc_logic > Loop_2_proc_U0_res_digits_data_V_ce0;
    sc_signal< sc_lv<64> > Loop_2_proc_U0_res_output_V_TDATA;
    sc_signal< sc_logic > Loop_2_proc_U0_res_output_V_TVALID;
    sc_signal< sc_logic > ap_sync_continue;
    sc_signal< sc_logic > lhs_digits_data_V_i_full_n;
    sc_signal< sc_logic > lhs_digits_data_V_t_empty_n;
    sc_signal< sc_logic > rhs_digits_data_V_i_full_n;
    sc_signal< sc_logic > rhs_digits_data_V_t_empty_n;
    sc_signal< sc_logic > res_digits_data_V_i_full_n;
    sc_signal< sc_logic > res_digits_data_V_t_empty_n;
    sc_signal< sc_logic > ap_sync_done;
    sc_signal< sc_logic > ap_sync_ready;
    sc_signal< sc_logic > Loop_1_proc_U0_start_full_n;
    sc_signal< sc_logic > Loop_1_proc_U0_start_write;
    sc_signal< sc_logic > karastuba_mul_templa_3_U0_start_full_n;
    sc_signal< sc_logic > karastuba_mul_templa_3_U0_start_write;
    sc_signal< sc_logic > Loop_2_proc_U0_start_full_n;
    sc_signal< sc_logic > Loop_2_proc_U0_start_write;
    static const int C_S_AXI_DATA_WIDTH;
    static const int C_S_AXI_WSTRB_WIDTH;
    static const int C_S_AXI_ADDR_WIDTH;
    static const sc_logic ap_const_logic_1;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<64> ap_const_lv64_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const2();
    void thread_ap_var_for_const1();
    void thread_ap_clk_no_reset_();
    void thread_Loop_1_proc_U0_ap_continue();
    void thread_Loop_1_proc_U0_ap_start();
    void thread_Loop_1_proc_U0_lhs_digits_data_V_full_n();
    void thread_Loop_1_proc_U0_rhs_digits_data_V_full_n();
    void thread_Loop_1_proc_U0_start_full_n();
    void thread_Loop_1_proc_U0_start_write();
    void thread_Loop_2_proc_U0_ap_continue();
    void thread_Loop_2_proc_U0_ap_start();
    void thread_Loop_2_proc_U0_start_full_n();
    void thread_Loop_2_proc_U0_start_write();
    void thread_ap_channel_done_lhs_digits_data_V();
    void thread_ap_channel_done_res_digits_data_V();
    void thread_ap_channel_done_rhs_digits_data_V();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_ap_sync_channel_write_lhs_digits_data_V();
    void thread_ap_sync_channel_write_rhs_digits_data_V();
    void thread_ap_sync_continue();
    void thread_ap_sync_done();
    void thread_ap_sync_ready();
    void thread_hs_input_V_TREADY();
    void thread_karastuba_mul_templa_3_U0_ap_continue();
    void thread_karastuba_mul_templa_3_U0_ap_start();
    void thread_karastuba_mul_templa_3_U0_res_digits_data_V_full_n();
    void thread_karastuba_mul_templa_3_U0_start_full_n();
    void thread_karastuba_mul_templa_3_U0_start_write();
    void thread_res_output_V_TDATA();
    void thread_res_output_V_TVALID();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
