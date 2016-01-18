/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'CPUSlave1' in SOPC Builder design 'Embedded'
 * SOPC Builder design path: ../../Embedded.sopcinfo
 *
 * Generated: Mon Dec 07 09:47:08 EST 2015
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00140820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "fast"
#define ALT_CPU_DATA_ADDR_WIDTH 0x1a
#define ALT_CPU_DCACHE_BYPASS_MASK 0x80000000
#define ALT_CPU_DCACHE_LINE_SIZE 32
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_DCACHE_SIZE 2048
#define ALT_CPU_EXCEPTION_ADDR 0x00120020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 1
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_EXTRA_EXCEPTION_INFO
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 4096
#define ALT_CPU_INITDA_SUPPORTED
#define ALT_CPU_INST_ADDR_WIDTH 0x15
#define ALT_CPU_NAME "CPUSlave1"
#define ALT_CPU_NUM_OF_SHADOW_REG_SETS 0
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00120000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00140820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "fast"
#define NIOS2_DATA_ADDR_WIDTH 0x1a
#define NIOS2_DCACHE_BYPASS_MASK 0x80000000
#define NIOS2_DCACHE_LINE_SIZE 32
#define NIOS2_DCACHE_LINE_SIZE_LOG2 5
#define NIOS2_DCACHE_SIZE 2048
#define NIOS2_EXCEPTION_ADDR 0x00120020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 1
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_EXTRA_EXCEPTION_INFO
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_ICACHE_SIZE 4096
#define NIOS2_INITDA_SUPPORTED
#define NIOS2_INST_ADDR_WIDTH 0x15
#define NIOS2_NUM_OF_SHADOW_REG_SETS 0
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00120000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_MUTEX
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_UART
#define __ALTERA_NIOS2_GEN2
#define __ALTERA_UP_AVALON_VIDEO_CHARACTER_BUFFER_WITH_DMA
#define __REG16


/*
 * JTAGSlave1 configuration
 *
 */

#define ALT_MODULE_CLASS_JTAGSlave1 altera_avalon_jtag_uart
#define JTAGSLAVE1_BASE 0x141020
#define JTAGSLAVE1_IRQ 1
#define JTAGSLAVE1_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAGSLAVE1_NAME "/dev/JTAGSlave1"
#define JTAGSLAVE1_READ_DEPTH 64
#define JTAGSLAVE1_READ_THRESHOLD 8
#define JTAGSLAVE1_SPAN 8
#define JTAGSLAVE1_TYPE "altera_avalon_jtag_uart"
#define JTAGSLAVE1_WRITE_DEPTH 64
#define JTAGSLAVE1_WRITE_THRESHOLD 8


/*
 * LEDGSlave1 configuration
 *
 */

#define ALT_MODULE_CLASS_LEDGSlave1 altera_avalon_pio
#define LEDGSLAVE1_BASE 0x141000
#define LEDGSLAVE1_BIT_CLEARING_EDGE_REGISTER 0
#define LEDGSLAVE1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LEDGSLAVE1_CAPTURE 0
#define LEDGSLAVE1_DATA_WIDTH 8
#define LEDGSLAVE1_DO_TEST_BENCH_WIRING 0
#define LEDGSLAVE1_DRIVEN_SIM_VALUE 0
#define LEDGSLAVE1_EDGE_TYPE "NONE"
#define LEDGSLAVE1_FREQ 50000000
#define LEDGSLAVE1_HAS_IN 0
#define LEDGSLAVE1_HAS_OUT 1
#define LEDGSLAVE1_HAS_TRI 0
#define LEDGSLAVE1_IRQ -1
#define LEDGSLAVE1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LEDGSLAVE1_IRQ_TYPE "NONE"
#define LEDGSLAVE1_NAME "/dev/LEDGSlave1"
#define LEDGSLAVE1_RESET_VALUE 0
#define LEDGSLAVE1_SPAN 16
#define LEDGSLAVE1_TYPE "altera_avalon_pio"


/*
 * LEDRSlave2 configuration
 *
 */

#define ALT_MODULE_CLASS_LEDRSlave2 altera_avalon_pio
#define LEDRSLAVE2_BASE 0x241000
#define LEDRSLAVE2_BIT_CLEARING_EDGE_REGISTER 0
#define LEDRSLAVE2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LEDRSLAVE2_CAPTURE 0
#define LEDRSLAVE2_DATA_WIDTH 8
#define LEDRSLAVE2_DO_TEST_BENCH_WIRING 0
#define LEDRSLAVE2_DRIVEN_SIM_VALUE 0
#define LEDRSLAVE2_EDGE_TYPE "NONE"
#define LEDRSLAVE2_FREQ 50000000
#define LEDRSLAVE2_HAS_IN 0
#define LEDRSLAVE2_HAS_OUT 1
#define LEDRSLAVE2_HAS_TRI 0
#define LEDRSLAVE2_IRQ -1
#define LEDRSLAVE2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LEDRSLAVE2_IRQ_TYPE "NONE"
#define LEDRSLAVE2_NAME "/dev/LEDRSlave2"
#define LEDRSLAVE2_RESET_VALUE 0
#define LEDRSLAVE2_SPAN 16
#define LEDRSLAVE2_TYPE "altera_avalon_pio"


/*
 * MEMSlave1 configuration
 *
 */

#define ALT_MODULE_CLASS_MEMSlave1 altera_avalon_onchip_memory2
#define MEMSLAVE1_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define MEMSLAVE1_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define MEMSLAVE1_BASE 0x120000
#define MEMSLAVE1_CONTENTS_INFO ""
#define MEMSLAVE1_DUAL_PORT 0
#define MEMSLAVE1_GUI_RAM_BLOCK_TYPE "AUTO"
#define MEMSLAVE1_INIT_CONTENTS_FILE "Embedded_MEMSlave1"
#define MEMSLAVE1_INIT_MEM_CONTENT 1
#define MEMSLAVE1_INSTANCE_ID "NONE"
#define MEMSLAVE1_IRQ -1
#define MEMSLAVE1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define MEMSLAVE1_NAME "/dev/MEMSlave1"
#define MEMSLAVE1_NON_DEFAULT_INIT_FILE_ENABLED 0
#define MEMSLAVE1_RAM_BLOCK_TYPE "AUTO"
#define MEMSLAVE1_READ_DURING_WRITE_MODE "DONT_CARE"
#define MEMSLAVE1_SINGLE_CLOCK_OP 0
#define MEMSLAVE1_SIZE_MULTIPLE 1
#define MEMSLAVE1_SIZE_VALUE 80000
#define MEMSLAVE1_SPAN 80000
#define MEMSLAVE1_TYPE "altera_avalon_onchip_memory2"
#define MEMSLAVE1_WRITABLE 1


/*
 * PIOSlave1 configuration
 *
 */

#define ALT_MODULE_CLASS_PIOSlave1 altera_avalon_pio
#define PIOSLAVE1_BASE 0x141010
#define PIOSLAVE1_BIT_CLEARING_EDGE_REGISTER 0
#define PIOSLAVE1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIOSLAVE1_CAPTURE 0
#define PIOSLAVE1_DATA_WIDTH 16
#define PIOSLAVE1_DO_TEST_BENCH_WIRING 0
#define PIOSLAVE1_DRIVEN_SIM_VALUE 0
#define PIOSLAVE1_EDGE_TYPE "NONE"
#define PIOSLAVE1_FREQ 50000000
#define PIOSLAVE1_HAS_IN 1
#define PIOSLAVE1_HAS_OUT 0
#define PIOSLAVE1_HAS_TRI 0
#define PIOSLAVE1_IRQ -1
#define PIOSLAVE1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIOSLAVE1_IRQ_TYPE "NONE"
#define PIOSLAVE1_NAME "/dev/PIOSlave1"
#define PIOSLAVE1_RESET_VALUE 0
#define PIOSLAVE1_SPAN 16
#define PIOSLAVE1_TYPE "altera_avalon_pio"


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone IV E"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/JTAGSlave1"
#define ALT_STDERR_BASE 0x141020
#define ALT_STDERR_DEV JTAGSlave1
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/JTAGSlave1"
#define ALT_STDIN_BASE 0x141020
#define ALT_STDIN_DEV JTAGSlave1
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/JTAGSlave1"
#define ALT_STDOUT_BASE 0x141020
#define ALT_STDOUT_DEV JTAGSlave1
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "Embedded"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 32
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * mutex_0 configuration
 *
 */

#define ALT_MODULE_CLASS_mutex_0 altera_avalon_mutex
#define MUTEX_0_BASE 0x0
#define MUTEX_0_IRQ -1
#define MUTEX_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define MUTEX_0_NAME "/dev/mutex_0"
#define MUTEX_0_OWNER_INIT 0
#define MUTEX_0_OWNER_WIDTH 16
#define MUTEX_0_SPAN 8
#define MUTEX_0_TYPE "altera_avalon_mutex"
#define MUTEX_0_VALUE_INIT 0
#define MUTEX_0_VALUE_WIDTH 16


/*
 * reg16_0 configuration
 *
 */

#define ALT_MODULE_CLASS_reg16_0 reg16
#define REG16_0_BASE 0x41008
#define REG16_0_IRQ -1
#define REG16_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define REG16_0_NAME "/dev/reg16_0"
#define REG16_0_SPAN 2
#define REG16_0_TYPE "reg16"


/*
 * uart_0 configuration
 *
 */

#define ALT_MODULE_CLASS_uart_0 altera_avalon_uart
#define UART_0_BASE 0x1000000
#define UART_0_BAUD 2400
#define UART_0_DATA_BITS 8
#define UART_0_FIXED_BAUD 1
#define UART_0_FREQ 50000000
#define UART_0_IRQ 4
#define UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define UART_0_NAME "/dev/uart_0"
#define UART_0_PARITY 'N'
#define UART_0_SIM_CHAR_STREAM ""
#define UART_0_SIM_TRUE_BAUD 0
#define UART_0_SPAN 32
#define UART_0_STOP_BITS 1
#define UART_0_SYNC_REG_DEPTH 2
#define UART_0_TYPE "altera_avalon_uart"
#define UART_0_USE_CTS_RTS 0
#define UART_0_USE_EOP_REGISTER 0


/*
 * video_character_buffer_with_dma_0_avalon_char_buffer_slave configuration
 *
 */

#define ALT_MODULE_CLASS_video_character_buffer_with_dma_0_avalon_char_buffer_slave altera_up_avalon_video_character_buffer_with_dma
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_BUFFER_SLAVE_BASE 0x3000000
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_BUFFER_SLAVE_IRQ -1
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_BUFFER_SLAVE_IRQ_INTERRUPT_CONTROLLER_ID -1
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_BUFFER_SLAVE_NAME "/dev/video_character_buffer_with_dma_0_avalon_char_buffer_slave"
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_BUFFER_SLAVE_SPAN 8192
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_BUFFER_SLAVE_TYPE "altera_up_avalon_video_character_buffer_with_dma"


/*
 * video_character_buffer_with_dma_0_avalon_char_control_slave configuration
 *
 */

#define ALT_MODULE_CLASS_video_character_buffer_with_dma_0_avalon_char_control_slave altera_up_avalon_video_character_buffer_with_dma
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_CONTROL_SLAVE_BASE 0x2000000
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_CONTROL_SLAVE_IRQ -1
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_CONTROL_SLAVE_IRQ_INTERRUPT_CONTROLLER_ID -1
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_CONTROL_SLAVE_NAME "/dev/video_character_buffer_with_dma_0_avalon_char_control_slave"
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_CONTROL_SLAVE_SPAN 8
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_CONTROL_SLAVE_TYPE "altera_up_avalon_video_character_buffer_with_dma"

#endif /* __SYSTEM_H_ */
