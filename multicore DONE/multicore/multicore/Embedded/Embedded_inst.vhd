	component Embedded is
		port (
			clk_clk                                         : in  std_logic                     := 'X';             -- clk
			ledgslave1_external_connection_export           : out std_logic_vector(7 downto 0);                     -- export
			ledrslave2_external_connection_export           : out std_logic_vector(7 downto 0);                     -- export
			pioslave1_external_connection_export            : in  std_logic_vector(15 downto 0) := (others => 'X'); -- export
			pioslave2_external_connection_export            : in  std_logic_vector(15 downto 0) := (others => 'X'); -- export
			reg16_0_conduit_end_readdata                    : out std_logic_vector(15 downto 0);                    -- readdata
			reset_reset_n                                   : in  std_logic                     := 'X';             -- reset_n
			video_vga_controller_0_external_interface_CLK   : out std_logic;                                        -- CLK
			video_vga_controller_0_external_interface_HS    : out std_logic;                                        -- HS
			video_vga_controller_0_external_interface_VS    : out std_logic;                                        -- VS
			video_vga_controller_0_external_interface_BLANK : out std_logic;                                        -- BLANK
			video_vga_controller_0_external_interface_SYNC  : out std_logic;                                        -- SYNC
			video_vga_controller_0_external_interface_R     : out std_logic_vector(7 downto 0);                     -- R
			video_vga_controller_0_external_interface_G     : out std_logic_vector(7 downto 0);                     -- G
			video_vga_controller_0_external_interface_B     : out std_logic_vector(7 downto 0);                     -- B
			uart_0_external_connection_rxd                  : in  std_logic                     := 'X';             -- rxd
			uart_0_external_connection_txd                  : out std_logic                                         -- txd
		);
	end component Embedded;

	u0 : component Embedded
		port map (
			clk_clk                                         => CONNECTED_TO_clk_clk,                                         --                                       clk.clk
			ledgslave1_external_connection_export           => CONNECTED_TO_ledgslave1_external_connection_export,           --            ledgslave1_external_connection.export
			ledrslave2_external_connection_export           => CONNECTED_TO_ledrslave2_external_connection_export,           --            ledrslave2_external_connection.export
			pioslave1_external_connection_export            => CONNECTED_TO_pioslave1_external_connection_export,            --             pioslave1_external_connection.export
			pioslave2_external_connection_export            => CONNECTED_TO_pioslave2_external_connection_export,            --             pioslave2_external_connection.export
			reg16_0_conduit_end_readdata                    => CONNECTED_TO_reg16_0_conduit_end_readdata,                    --                       reg16_0_conduit_end.readdata
			reset_reset_n                                   => CONNECTED_TO_reset_reset_n,                                   --                                     reset.reset_n
			video_vga_controller_0_external_interface_CLK   => CONNECTED_TO_video_vga_controller_0_external_interface_CLK,   -- video_vga_controller_0_external_interface.CLK
			video_vga_controller_0_external_interface_HS    => CONNECTED_TO_video_vga_controller_0_external_interface_HS,    --                                          .HS
			video_vga_controller_0_external_interface_VS    => CONNECTED_TO_video_vga_controller_0_external_interface_VS,    --                                          .VS
			video_vga_controller_0_external_interface_BLANK => CONNECTED_TO_video_vga_controller_0_external_interface_BLANK, --                                          .BLANK
			video_vga_controller_0_external_interface_SYNC  => CONNECTED_TO_video_vga_controller_0_external_interface_SYNC,  --                                          .SYNC
			video_vga_controller_0_external_interface_R     => CONNECTED_TO_video_vga_controller_0_external_interface_R,     --                                          .R
			video_vga_controller_0_external_interface_G     => CONNECTED_TO_video_vga_controller_0_external_interface_G,     --                                          .G
			video_vga_controller_0_external_interface_B     => CONNECTED_TO_video_vga_controller_0_external_interface_B,     --                                          .B
			uart_0_external_connection_rxd                  => CONNECTED_TO_uart_0_external_connection_rxd,                  --                uart_0_external_connection.rxd
			uart_0_external_connection_txd                  => CONNECTED_TO_uart_0_external_connection_txd                   --                                          .txd
		);

