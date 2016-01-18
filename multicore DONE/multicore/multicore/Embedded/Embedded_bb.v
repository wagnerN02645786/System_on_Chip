
module Embedded (
	clk_clk,
	ledgslave1_external_connection_export,
	ledrslave2_external_connection_export,
	pioslave1_external_connection_export,
	pioslave2_external_connection_export,
	reg16_0_conduit_end_readdata,
	reset_reset_n,
	video_vga_controller_0_external_interface_CLK,
	video_vga_controller_0_external_interface_HS,
	video_vga_controller_0_external_interface_VS,
	video_vga_controller_0_external_interface_BLANK,
	video_vga_controller_0_external_interface_SYNC,
	video_vga_controller_0_external_interface_R,
	video_vga_controller_0_external_interface_G,
	video_vga_controller_0_external_interface_B,
	uart_0_external_connection_rxd,
	uart_0_external_connection_txd);	

	input		clk_clk;
	output	[7:0]	ledgslave1_external_connection_export;
	output	[7:0]	ledrslave2_external_connection_export;
	input	[15:0]	pioslave1_external_connection_export;
	input	[15:0]	pioslave2_external_connection_export;
	output	[15:0]	reg16_0_conduit_end_readdata;
	input		reset_reset_n;
	output		video_vga_controller_0_external_interface_CLK;
	output		video_vga_controller_0_external_interface_HS;
	output		video_vga_controller_0_external_interface_VS;
	output		video_vga_controller_0_external_interface_BLANK;
	output		video_vga_controller_0_external_interface_SYNC;
	output	[7:0]	video_vga_controller_0_external_interface_R;
	output	[7:0]	video_vga_controller_0_external_interface_G;
	output	[7:0]	video_vga_controller_0_external_interface_B;
	input		uart_0_external_connection_rxd;
	output		uart_0_external_connection_txd;
endmodule
