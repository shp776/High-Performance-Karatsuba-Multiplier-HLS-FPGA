// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module CAT_I_I_I_O_1 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        x0_digits_data_V_address0,
        x0_digits_data_V_ce0,
        x0_digits_data_V_q0,
        x1_tmp_bits_read,
        x1_digits_data_V_address0,
        x1_digits_data_V_ce0,
        x1_digits_data_V_q0,
        x2_digits_data_V_address0,
        x2_digits_data_V_ce0,
        x2_digits_data_V_q0,
        w_digits_data_V_address0,
        w_digits_data_V_ce0,
        w_digits_data_V_we0,
        w_digits_data_V_d0,
        w_digits_data_V_q0,
        w_digits_data_V_address1,
        w_digits_data_V_ce1,
        w_digits_data_V_we1,
        w_digits_data_V_d1,
        w_digits_data_V_q1
);

parameter    ap_ST_fsm_state1 = 12'd1;
parameter    ap_ST_fsm_state2 = 12'd2;
parameter    ap_ST_fsm_state3 = 12'd4;
parameter    ap_ST_fsm_state4 = 12'd8;
parameter    ap_ST_fsm_state5 = 12'd16;
parameter    ap_ST_fsm_pp0_stage0 = 12'd32;
parameter    ap_ST_fsm_state11 = 12'd64;
parameter    ap_ST_fsm_state12 = 12'd128;
parameter    ap_ST_fsm_state13 = 12'd256;
parameter    ap_ST_fsm_state14 = 12'd512;
parameter    ap_ST_fsm_pp1_stage0 = 12'd1024;
parameter    ap_ST_fsm_state20 = 12'd2048;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [4:0] x0_digits_data_V_address0;
output   x0_digits_data_V_ce0;
input  [63:0] x0_digits_data_V_q0;
input  [6:0] x1_tmp_bits_read;
output  [4:0] x1_digits_data_V_address0;
output   x1_digits_data_V_ce0;
input  [63:0] x1_digits_data_V_q0;
output  [4:0] x2_digits_data_V_address0;
output   x2_digits_data_V_ce0;
input  [63:0] x2_digits_data_V_q0;
output  [5:0] w_digits_data_V_address0;
output   w_digits_data_V_ce0;
output   w_digits_data_V_we0;
output  [63:0] w_digits_data_V_d0;
input  [63:0] w_digits_data_V_q0;
output  [5:0] w_digits_data_V_address1;
output   w_digits_data_V_ce1;
output   w_digits_data_V_we1;
output  [63:0] w_digits_data_V_d1;
input  [63:0] w_digits_data_V_q1;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg x0_digits_data_V_ce0;
reg x1_digits_data_V_ce0;
reg x2_digits_data_V_ce0;
reg[5:0] w_digits_data_V_address0;
reg w_digits_data_V_ce0;
reg w_digits_data_V_we0;
reg[63:0] w_digits_data_V_d0;
reg[5:0] w_digits_data_V_address1;
reg w_digits_data_V_ce1;
reg w_digits_data_V_we1;
reg[63:0] w_digits_data_V_d1;

(* fsm_encoding = "none" *) reg   [11:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [1:0] p_0136_0_reg_178;
reg   [5:0] j1_0_reg_190;
reg   [5:0] i2_0_reg_201;
reg   [1:0] p_0136_2_reg_212;
reg   [6:0] j1_1_reg_224;
reg   [5:0] i3_0_reg_235;
reg   [63:0] reg_246;
wire    ap_CS_fsm_pp0_stage0;
reg    ap_enable_reg_pp0_iter1;
wire    ap_block_state6_pp0_stage0_iter0;
wire    ap_block_state7_pp0_stage0_iter1;
wire    ap_block_state8_pp0_stage0_iter2;
wire    ap_block_state9_pp0_stage0_iter3;
wire    ap_block_state10_pp0_stage0_iter4;
wire    ap_block_pp0_stage0_11001;
reg   [0:0] icmp_ln169_reg_506;
reg   [63:0] reg_246_pp0_iter2_reg;
reg   [63:0] reg_246_pp1_iter2_reg;
wire    ap_block_state15_pp1_stage0_iter0;
wire    ap_block_state16_pp1_stage0_iter1;
wire    ap_block_state17_pp1_stage0_iter2;
wire    ap_block_state18_pp1_stage0_iter3;
wire    ap_block_state19_pp1_stage0_iter4;
wire    ap_block_pp1_stage0_11001;
wire    ap_CS_fsm_state12;
wire    ap_CS_fsm_pp1_stage0;
reg    ap_enable_reg_pp1_iter1;
reg   [0:0] icmp_ln185_reg_567;
wire  signed [31:0] sext_ln158_fu_251_p1;
reg  signed [31:0] sext_ln158_reg_469;
wire   [6:0] j_fu_266_p2;
wire    ap_CS_fsm_state2;
wire   [0:0] icmp_ln162_fu_255_p2;
wire   [0:0] icmp_ln164_fu_272_p2;
wire    ap_CS_fsm_state3;
wire   [5:0] i_fu_278_p2;
reg   [5:0] i_reg_486;
wire   [63:0] zext_ln164_fu_284_p1;
reg   [63:0] zext_ln164_reg_491;
reg   [63:0] x0_digits_data_V_loa_reg_501;
wire    ap_CS_fsm_state4;
wire   [0:0] icmp_ln169_fu_289_p2;
reg   [0:0] icmp_ln169_reg_506_pp0_iter1_reg;
reg   [0:0] icmp_ln169_reg_506_pp0_iter2_reg;
reg   [0:0] icmp_ln169_reg_506_pp0_iter3_reg;
wire   [5:0] i_28_fu_295_p2;
reg    ap_enable_reg_pp0_iter0;
reg   [5:0] w_digits_data_V_addr_11_reg_520;
reg   [5:0] w_digits_data_V_addr_11_reg_520_pp0_iter1_reg;
reg   [5:0] w_digits_data_V_addr_11_reg_520_pp0_iter2_reg;
reg   [5:0] w_digits_data_V_addr_11_reg_520_pp0_iter3_reg;
wire   [5:0] j_8_fu_311_p2;
reg   [63:0] x1_digits_data_V_loa_reg_531;
reg   [63:0] x1_digits_data_V_loa_reg_531_pp0_iter2_reg;
wire   [64:0] add_ln700_fu_324_p2;
reg   [64:0] add_ln700_reg_537;
wire   [63:0] add_ln209_8_fu_353_p2;
reg   [63:0] add_ln209_8_reg_542;
reg   [1:0] trunc_ln_reg_547;
reg    ap_enable_reg_pp0_iter3;
wire   [5:0] w_digits_data_V_addr_10_reg_552;
wire    ap_CS_fsm_state11;
wire   [32:0] add_ln209_fu_375_p2;
reg   [32:0] add_ln209_reg_557;
wire   [63:0] add_ln209_2_fu_384_p2;
reg   [63:0] add_ln209_2_reg_562;
wire    ap_CS_fsm_state13;
wire   [0:0] icmp_ln185_fu_390_p2;
reg   [0:0] icmp_ln185_reg_567_pp1_iter1_reg;
reg   [0:0] icmp_ln185_reg_567_pp1_iter2_reg;
reg   [0:0] icmp_ln185_reg_567_pp1_iter3_reg;
wire   [5:0] i_29_fu_396_p2;
reg    ap_enable_reg_pp1_iter0;
reg   [5:0] w_digits_data_V_addr_12_reg_581;
reg   [5:0] w_digits_data_V_addr_12_reg_581_pp1_iter1_reg;
reg   [5:0] w_digits_data_V_addr_12_reg_581_pp1_iter2_reg;
reg   [5:0] w_digits_data_V_addr_12_reg_581_pp1_iter3_reg;
wire   [6:0] j_9_fu_412_p2;
reg   [63:0] x2_digits_data_V_loa_reg_592;
reg   [63:0] x2_digits_data_V_loa_reg_592_pp1_iter2_reg;
wire   [64:0] add_ln700_29_fu_425_p2;
reg   [64:0] add_ln700_29_reg_598;
wire   [63:0] add_ln209_9_fu_454_p2;
reg   [63:0] add_ln209_9_reg_603;
reg   [1:0] trunc_ln858_s_reg_608;
reg    ap_enable_reg_pp1_iter3;
wire    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state6;
reg    ap_enable_reg_pp0_iter2;
reg    ap_enable_reg_pp0_iter4;
wire    ap_CS_fsm_state14;
wire    ap_block_pp1_stage0_subdone;
reg    ap_condition_pp1_exit_iter0_state15;
reg    ap_enable_reg_pp1_iter2;
reg    ap_enable_reg_pp1_iter4;
reg   [6:0] j_0_reg_156;
reg   [5:0] i_0_reg_167;
wire    ap_CS_fsm_state5;
reg   [1:0] ap_phi_mux_p_0136_0_phi_fu_182_p4;
wire    ap_block_pp0_stage0;
reg   [1:0] ap_phi_mux_p_0136_2_phi_fu_216_p4;
wire    ap_block_pp1_stage0;
wire   [63:0] zext_ln162_fu_261_p1;
wire   [63:0] zext_ln174_fu_301_p1;
wire   [63:0] zext_ln175_fu_306_p1;
wire   [63:0] zext_ln190_fu_402_p1;
wire   [63:0] zext_ln191_fu_407_p1;
wire   [64:0] zext_ln175_2_fu_317_p1;
wire   [64:0] zext_ln700_fu_320_p1;
wire   [65:0] zext_ln700_32_fu_338_p1;
wire   [65:0] zext_ln169_fu_330_p1;
wire   [63:0] zext_ln700_31_fu_334_p1;
wire   [63:0] add_ln209_16_fu_347_p2;
wire   [65:0] tmp_V_fu_341_p2;
wire   [32:0] zext_ln1468_fu_368_p1;
wire   [32:0] zext_ln209_fu_372_p1;
wire   [63:0] zext_ln209_4_fu_381_p1;
wire   [64:0] zext_ln191_2_fu_418_p1;
wire   [64:0] zext_ln700_33_fu_421_p1;
wire   [65:0] zext_ln700_35_fu_439_p1;
wire   [65:0] zext_ln185_fu_431_p1;
wire   [63:0] zext_ln700_34_fu_435_p1;
wire   [63:0] add_ln209_17_fu_448_p2;
wire   [65:0] tmp_V_16_fu_442_p2;
wire    ap_CS_fsm_state20;
reg   [11:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;
reg    ap_idle_pp1;
wire    ap_enable_pp1;

// power-on initialization
initial begin
#0 ap_CS_fsm = 12'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp1_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter3 = 1'b0;
#0 ap_enable_reg_pp1_iter0 = 1'b0;
#0 ap_enable_reg_pp1_iter3 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter4 = 1'b0;
#0 ap_enable_reg_pp1_iter2 = 1'b0;
#0 ap_enable_reg_pp1_iter4 = 1'b0;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_condition_pp0_exit_iter0_state6))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if (((1'b1 == ap_CS_fsm_state3) & (icmp_ln164_fu_272_p2 == 1'd1))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            if ((1'b1 == ap_condition_pp0_exit_iter0_state6)) begin
                ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state6);
            end else if ((1'b1 == 1'b1)) begin
                ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
            end
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter3 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter4 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter4 <= ap_enable_reg_pp0_iter3;
        end else if (((1'b1 == ap_CS_fsm_state3) & (icmp_ln164_fu_272_p2 == 1'd1))) begin
            ap_enable_reg_pp0_iter4 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp1_iter0 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp1_stage0_subdone) & (1'b1 == ap_condition_pp1_exit_iter0_state15) & (1'b1 == ap_CS_fsm_pp1_stage0))) begin
            ap_enable_reg_pp1_iter0 <= 1'b0;
        end else if ((1'b1 == ap_CS_fsm_state14)) begin
            ap_enable_reg_pp1_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp1_iter1 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp1_stage0_subdone)) begin
            if ((1'b1 == ap_condition_pp1_exit_iter0_state15)) begin
                ap_enable_reg_pp1_iter1 <= (1'b1 ^ ap_condition_pp1_exit_iter0_state15);
            end else if ((1'b1 == 1'b1)) begin
                ap_enable_reg_pp1_iter1 <= ap_enable_reg_pp1_iter0;
            end
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp1_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp1_stage0_subdone)) begin
            ap_enable_reg_pp1_iter2 <= ap_enable_reg_pp1_iter1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp1_iter3 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp1_stage0_subdone)) begin
            ap_enable_reg_pp1_iter3 <= ap_enable_reg_pp1_iter2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp1_iter4 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp1_stage0_subdone)) begin
            ap_enable_reg_pp1_iter4 <= ap_enable_reg_pp1_iter3;
        end else if ((1'b1 == ap_CS_fsm_state14)) begin
            ap_enable_reg_pp1_iter4 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (icmp_ln164_fu_272_p2 == 1'd1))) begin
        i2_0_reg_201 <= 6'd0;
    end else if (((icmp_ln169_fu_289_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
        i2_0_reg_201 <= i_28_fu_295_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln185_fu_390_p2 == 1'd0) & (ap_enable_reg_pp1_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        i3_0_reg_235 <= i_29_fu_396_p2;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        i3_0_reg_235 <= 6'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln162_fu_255_p2 == 1'd1))) begin
        i_0_reg_167 <= 6'd0;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        i_0_reg_167 <= i_reg_486;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (icmp_ln164_fu_272_p2 == 1'd1))) begin
        j1_0_reg_190 <= 6'd16;
    end else if (((icmp_ln169_fu_289_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
        j1_0_reg_190 <= j_8_fu_311_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln185_fu_390_p2 == 1'd0) & (ap_enable_reg_pp1_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        j1_1_reg_224 <= j_9_fu_412_p2;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        j1_1_reg_224 <= 7'd32;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln162_fu_255_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        j_0_reg_156 <= j_fu_266_p2;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        j_0_reg_156 <= 7'd32;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (icmp_ln164_fu_272_p2 == 1'd1))) begin
        p_0136_0_reg_178 <= 2'd0;
    end else if (((icmp_ln169_reg_506_pp0_iter3_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
        p_0136_0_reg_178 <= trunc_ln_reg_547;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln185_reg_567_pp1_iter3_reg == 1'd0) & (ap_enable_reg_pp1_iter4 == 1'b1) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        p_0136_2_reg_212 <= trunc_ln858_s_reg_608;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        p_0136_2_reg_212 <= 2'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state12)) begin
        reg_246 <= w_digits_data_V_q1;
    end else if ((((icmp_ln169_reg_506 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | ((icmp_ln185_reg_567 == 1'd0) & (ap_enable_reg_pp1_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001)))) begin
        reg_246 <= w_digits_data_V_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        add_ln209_2_reg_562 <= add_ln209_2_fu_384_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln169_reg_506_pp0_iter2_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        add_ln209_8_reg_542 <= add_ln209_8_fu_353_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln185_reg_567_pp1_iter2_reg == 1'd0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        add_ln209_9_reg_603 <= add_ln209_9_fu_454_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state12)) begin
        add_ln209_reg_557 <= add_ln209_fu_375_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln185_reg_567_pp1_iter1_reg == 1'd0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        add_ln700_29_reg_598 <= add_ln700_29_fu_425_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln169_reg_506_pp0_iter1_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        add_ln700_reg_537 <= add_ln700_fu_324_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        i_reg_486 <= i_fu_278_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        icmp_ln169_reg_506 <= icmp_ln169_fu_289_p2;
        icmp_ln169_reg_506_pp0_iter1_reg <= icmp_ln169_reg_506;
        w_digits_data_V_addr_11_reg_520_pp0_iter1_reg <= w_digits_data_V_addr_11_reg_520;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b0 == ap_block_pp0_stage0_11001)) begin
        icmp_ln169_reg_506_pp0_iter2_reg <= icmp_ln169_reg_506_pp0_iter1_reg;
        icmp_ln169_reg_506_pp0_iter3_reg <= icmp_ln169_reg_506_pp0_iter2_reg;
        reg_246_pp0_iter2_reg <= reg_246;
        w_digits_data_V_addr_11_reg_520_pp0_iter2_reg <= w_digits_data_V_addr_11_reg_520_pp0_iter1_reg;
        w_digits_data_V_addr_11_reg_520_pp0_iter3_reg <= w_digits_data_V_addr_11_reg_520_pp0_iter2_reg;
        x1_digits_data_V_loa_reg_531_pp0_iter2_reg <= x1_digits_data_V_loa_reg_531;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        icmp_ln185_reg_567 <= icmp_ln185_fu_390_p2;
        icmp_ln185_reg_567_pp1_iter1_reg <= icmp_ln185_reg_567;
        w_digits_data_V_addr_12_reg_581_pp1_iter1_reg <= w_digits_data_V_addr_12_reg_581;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b0 == ap_block_pp1_stage0_11001)) begin
        icmp_ln185_reg_567_pp1_iter2_reg <= icmp_ln185_reg_567_pp1_iter1_reg;
        icmp_ln185_reg_567_pp1_iter3_reg <= icmp_ln185_reg_567_pp1_iter2_reg;
        reg_246_pp1_iter2_reg <= reg_246;
        w_digits_data_V_addr_12_reg_581_pp1_iter2_reg <= w_digits_data_V_addr_12_reg_581_pp1_iter1_reg;
        w_digits_data_V_addr_12_reg_581_pp1_iter3_reg <= w_digits_data_V_addr_12_reg_581_pp1_iter2_reg;
        x2_digits_data_V_loa_reg_592_pp1_iter2_reg <= x2_digits_data_V_loa_reg_592;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        sext_ln158_reg_469 <= sext_ln158_fu_251_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln185_reg_567_pp1_iter2_reg == 1'd0) & (ap_enable_reg_pp1_iter3 == 1'b1) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        trunc_ln858_s_reg_608 <= {{tmp_V_16_fu_442_p2[65:64]}};
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln169_reg_506_pp0_iter2_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter3 == 1'b1))) begin
        trunc_ln_reg_547 <= {{tmp_V_fu_341_p2[65:64]}};
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln169_fu_289_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        w_digits_data_V_addr_11_reg_520 <= zext_ln175_fu_306_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln185_fu_390_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        w_digits_data_V_addr_12_reg_581 <= zext_ln191_fu_407_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        x0_digits_data_V_loa_reg_501 <= x0_digits_data_V_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln169_reg_506 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        x1_digits_data_V_loa_reg_531 <= x1_digits_data_V_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln185_reg_567 == 1'd0) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        x2_digits_data_V_loa_reg_592 <= x2_digits_data_V_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln164_fu_272_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        zext_ln164_reg_491[5 : 0] <= zext_ln164_fu_284_p1[5 : 0];
    end
end

always @ (*) begin
    if ((icmp_ln169_fu_289_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state6 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state6 = 1'b0;
    end
end

always @ (*) begin
    if ((icmp_ln185_fu_390_p2 == 1'd1)) begin
        ap_condition_pp1_exit_iter0_state15 = 1'b1;
    end else begin
        ap_condition_pp1_exit_iter0_state15 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state20) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter4 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter3 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp1_iter4 == 1'b0) & (ap_enable_reg_pp1_iter2 == 1'b0) & (ap_enable_reg_pp1_iter3 == 1'b0) & (ap_enable_reg_pp1_iter0 == 1'b0) & (ap_enable_reg_pp1_iter1 == 1'b0))) begin
        ap_idle_pp1 = 1'b1;
    end else begin
        ap_idle_pp1 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln169_reg_506_pp0_iter3_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
        ap_phi_mux_p_0136_0_phi_fu_182_p4 = trunc_ln_reg_547;
    end else begin
        ap_phi_mux_p_0136_0_phi_fu_182_p4 = p_0136_0_reg_178;
    end
end

always @ (*) begin
    if (((icmp_ln185_reg_567_pp1_iter3_reg == 1'd0) & (1'b0 == ap_block_pp1_stage0) & (ap_enable_reg_pp1_iter4 == 1'b1))) begin
        ap_phi_mux_p_0136_2_phi_fu_216_p4 = trunc_ln858_s_reg_608;
    end else begin
        ap_phi_mux_p_0136_2_phi_fu_216_p4 = p_0136_2_reg_212;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state20)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp1_stage0) & (ap_enable_reg_pp1_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0))) begin
        w_digits_data_V_address0 = zext_ln191_fu_407_p1;
    end else if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
        w_digits_data_V_address0 = zext_ln175_fu_306_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        w_digits_data_V_address0 = zext_ln164_reg_491;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        w_digits_data_V_address0 = zext_ln162_fu_261_p1;
    end else begin
        w_digits_data_V_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp1_stage0) & (ap_enable_reg_pp1_iter4 == 1'b1))) begin
        w_digits_data_V_address1 = w_digits_data_V_addr_12_reg_581_pp1_iter3_reg;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        w_digits_data_V_address1 = w_digits_data_V_addr_10_reg_552;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        w_digits_data_V_address1 = 64'd48;
    end else if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
        w_digits_data_V_address1 = w_digits_data_V_addr_11_reg_520_pp0_iter3_reg;
    end else begin
        w_digits_data_V_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state2) | ((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1)) | ((ap_enable_reg_pp1_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001)))) begin
        w_digits_data_V_ce0 = 1'b1;
    end else begin
        w_digits_data_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state11) | ((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter4 == 1'b1)) | ((ap_enable_reg_pp1_iter4 == 1'b1) & (1'b0 == ap_block_pp1_stage0_11001)))) begin
        w_digits_data_V_ce1 = 1'b1;
    end else begin
        w_digits_data_V_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        w_digits_data_V_d0 = x0_digits_data_V_loa_reg_501;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        w_digits_data_V_d0 = 64'd0;
    end else begin
        w_digits_data_V_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp1_stage0) & (ap_enable_reg_pp1_iter4 == 1'b1))) begin
        w_digits_data_V_d1 = add_ln209_9_reg_603;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        w_digits_data_V_d1 = add_ln209_2_reg_562;
    end else if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
        w_digits_data_V_d1 = add_ln209_8_reg_542;
    end else begin
        w_digits_data_V_d1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) | ((icmp_ln162_fu_255_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        w_digits_data_V_we0 = 1'b1;
    end else begin
        w_digits_data_V_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state14) | ((icmp_ln169_reg_506_pp0_iter3_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter4 == 1'b1)) | ((icmp_ln185_reg_567_pp1_iter3_reg == 1'd0) & (ap_enable_reg_pp1_iter4 == 1'b1) & (1'b0 == ap_block_pp1_stage0_11001)))) begin
        w_digits_data_V_we1 = 1'b1;
    end else begin
        w_digits_data_V_we1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        x0_digits_data_V_ce0 = 1'b1;
    end else begin
        x0_digits_data_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
        x1_digits_data_V_ce0 = 1'b1;
    end else begin
        x1_digits_data_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp1_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        x2_digits_data_V_ce0 = 1'b1;
    end else begin
        x2_digits_data_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln162_fu_255_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((1'b1 == ap_CS_fsm_state3) & (icmp_ln164_fu_272_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((ap_enable_reg_pp0_iter1 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (icmp_ln169_fu_289_p2 == 1'd1)) & ~((1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter3 == 1'b0) & (ap_enable_reg_pp0_iter4 == 1'b1)))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if ((((1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter3 == 1'b0) & (ap_enable_reg_pp0_iter4 == 1'b1)) | ((ap_enable_reg_pp0_iter1 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (icmp_ln169_fu_289_p2 == 1'd1)))) begin
                ap_NS_fsm = ap_ST_fsm_state11;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state14;
        end
        ap_ST_fsm_state14 : begin
            ap_NS_fsm = ap_ST_fsm_pp1_stage0;
        end
        ap_ST_fsm_pp1_stage0 : begin
            if ((~((1'b0 == ap_block_pp1_stage0_subdone) & (icmp_ln185_fu_390_p2 == 1'd1) & (ap_enable_reg_pp1_iter0 == 1'b1) & (ap_enable_reg_pp1_iter1 == 1'b0)) & ~((1'b0 == ap_block_pp1_stage0_subdone) & (ap_enable_reg_pp1_iter3 == 1'b0) & (ap_enable_reg_pp1_iter4 == 1'b1)))) begin
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            end else if ((((1'b0 == ap_block_pp1_stage0_subdone) & (ap_enable_reg_pp1_iter3 == 1'b0) & (ap_enable_reg_pp1_iter4 == 1'b1)) | ((1'b0 == ap_block_pp1_stage0_subdone) & (icmp_ln185_fu_390_p2 == 1'd1) & (ap_enable_reg_pp1_iter0 == 1'b1) & (ap_enable_reg_pp1_iter1 == 1'b0)))) begin
                ap_NS_fsm = ap_ST_fsm_state20;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            end
        end
        ap_ST_fsm_state20 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln209_16_fu_347_p2 = (reg_246_pp0_iter2_reg + zext_ln700_31_fu_334_p1);

assign add_ln209_17_fu_448_p2 = (reg_246_pp1_iter2_reg + zext_ln700_34_fu_435_p1);

assign add_ln209_2_fu_384_p2 = (zext_ln209_4_fu_381_p1 + reg_246);

assign add_ln209_8_fu_353_p2 = (add_ln209_16_fu_347_p2 + x1_digits_data_V_loa_reg_531_pp0_iter2_reg);

assign add_ln209_9_fu_454_p2 = (add_ln209_17_fu_448_p2 + x2_digits_data_V_loa_reg_592_pp1_iter2_reg);

assign add_ln209_fu_375_p2 = (zext_ln1468_fu_368_p1 + zext_ln209_fu_372_p1);

assign add_ln700_29_fu_425_p2 = (zext_ln191_2_fu_418_p1 + zext_ln700_33_fu_421_p1);

assign add_ln700_fu_324_p2 = (zext_ln175_2_fu_317_p1 + zext_ln700_fu_320_p1);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_pp1_stage0 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd8];

assign ap_CS_fsm_state14 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state20 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_pp1_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp1_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp1_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_state10_pp0_stage0_iter4 = ~(1'b1 == 1'b1);

assign ap_block_state15_pp1_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state16_pp1_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state17_pp1_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state18_pp1_stage0_iter3 = ~(1'b1 == 1'b1);

assign ap_block_state19_pp1_stage0_iter4 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state9_pp0_stage0_iter3 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_enable_pp1 = (ap_idle_pp1 ^ 1'b1);

assign i_28_fu_295_p2 = (i2_0_reg_201 + 6'd1);

assign i_29_fu_396_p2 = (i3_0_reg_235 + 6'd1);

assign i_fu_278_p2 = (i_0_reg_167 + 6'd1);

assign icmp_ln162_fu_255_p2 = ((j_0_reg_156 == 7'd64) ? 1'b1 : 1'b0);

assign icmp_ln164_fu_272_p2 = ((i_0_reg_167 == 6'd32) ? 1'b1 : 1'b0);

assign icmp_ln169_fu_289_p2 = ((i2_0_reg_201 == 6'd32) ? 1'b1 : 1'b0);

assign icmp_ln185_fu_390_p2 = ((i3_0_reg_235 == 6'd32) ? 1'b1 : 1'b0);

assign j_8_fu_311_p2 = (j1_0_reg_190 + 6'd1);

assign j_9_fu_412_p2 = (j1_1_reg_224 + 7'd1);

assign j_fu_266_p2 = (j_0_reg_156 + 7'd1);

assign sext_ln158_fu_251_p1 = $signed(x1_tmp_bits_read);

assign tmp_V_16_fu_442_p2 = (zext_ln700_35_fu_439_p1 + zext_ln185_fu_431_p1);

assign tmp_V_fu_341_p2 = (zext_ln700_32_fu_338_p1 + zext_ln169_fu_330_p1);

assign w_digits_data_V_addr_10_reg_552 = 64'd48;

assign x0_digits_data_V_address0 = zext_ln164_fu_284_p1;

assign x1_digits_data_V_address0 = zext_ln174_fu_301_p1;

assign x2_digits_data_V_address0 = zext_ln190_fu_402_p1;

assign zext_ln1468_fu_368_p1 = p_0136_0_reg_178;

assign zext_ln162_fu_261_p1 = j_0_reg_156;

assign zext_ln164_fu_284_p1 = i_0_reg_167;

assign zext_ln169_fu_330_p1 = ap_phi_mux_p_0136_0_phi_fu_182_p4;

assign zext_ln174_fu_301_p1 = i2_0_reg_201;

assign zext_ln175_2_fu_317_p1 = x1_digits_data_V_loa_reg_531;

assign zext_ln175_fu_306_p1 = j1_0_reg_190;

assign zext_ln185_fu_431_p1 = ap_phi_mux_p_0136_2_phi_fu_216_p4;

assign zext_ln190_fu_402_p1 = i3_0_reg_235;

assign zext_ln191_2_fu_418_p1 = x2_digits_data_V_loa_reg_592;

assign zext_ln191_fu_407_p1 = j1_1_reg_224;

assign zext_ln209_4_fu_381_p1 = add_ln209_reg_557;

assign zext_ln209_fu_372_p1 = $unsigned(sext_ln158_reg_469);

assign zext_ln700_31_fu_334_p1 = ap_phi_mux_p_0136_0_phi_fu_182_p4;

assign zext_ln700_32_fu_338_p1 = add_ln700_reg_537;

assign zext_ln700_33_fu_421_p1 = reg_246;

assign zext_ln700_34_fu_435_p1 = ap_phi_mux_p_0136_2_phi_fu_216_p4;

assign zext_ln700_35_fu_439_p1 = add_ln700_29_reg_598;

assign zext_ln700_fu_320_p1 = reg_246;

always @ (posedge ap_clk) begin
    zext_ln164_reg_491[63:6] <= 58'b0000000000000000000000000000000000000000000000000000000000;
end

endmodule //CAT_I_I_I_O_1
