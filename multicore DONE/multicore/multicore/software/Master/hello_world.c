/*
 * "Hello World" example.
 *
 * This example prints 'Hello from Nios II' to the STDOUT stream. It runs on
 * the Nios II 'standard', 'full_featured', 'fast', and 'low_cost' example
 * designs. It runs with or without the MicroC/OS-II RTOS and requires a STDOUT
 * device in your system's hardware.
 * The memory footprint of this hosted application is ~69 kbytes by default
 * using the standard reference design.
 *
 * For a reduced footprint version of this template, and an explanation of how
 * to reduce the memory footprint for a given application, see the
 * "small_hello_world" template.
 *
 */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "io.h"
#include "system.h"
#include "alt_types.h"
#include "altera_avalon_mutex.h"
#include "altera_avalon_mutex_regs.h"
#include "altera_avalon_uart.h"
#include "altera_avalon_uart_regs.h"
#include "altera_up_avalon_video_character_buffer_with_dma.h"



int main()
{
	char str1[]={"MASTER (ON)"};
	char str2[]={"MASTER (SWITCH)"};
	char str3[]={"MASTER (OFF)"};
	 alt_mutex_dev *Mymutex;
	 Mymutex=altera_avalon_mutex_open("/dev/mutex_0");
	 printf("Hello from Nios II#1!\n");
	 while(altera_avalon_mutex_trylock(Mymutex,ALT_CPU_CPU_ID_VALUE ))
	 {}

	 alt_up_char_buffer_dev * vga_dev;
	 	// open the VGA port
	 	vga_dev = alt_up_char_buffer_open_dev("/dev/video_character_buffer_with_dma_0");

	 	if (vga_dev == NULL)
	 	    	alt_printf ("Error: could not open VGA device \n");
	 	    	else
	 	    	alt_printf ("Opened VGA device \n");
  IOWR_16DIRECT(REG16_0_BASE, 0, 0x0);
  altera_avalon_mutex_unlock (Mymutex);
  while(1){
  delay10ms(1000);
  printf("SEND ON SIGNAL");
  while(altera_avalon_mutex_trylock(Mymutex,ALT_CPU_CPU_ID_VALUE ))
 	 {}
  alt_up_char_buffer_string(vga_dev, str1, 1, 1);
  IOWR_16DIRECT(REG16_0_BASE, 0, 0xff);
  altera_avalon_mutex_unlock (Mymutex);
  delay10ms(3000);
  printf("SEND SWITCH SIGNAL");
    while(altera_avalon_mutex_trylock(Mymutex,ALT_CPU_CPU_ID_VALUE ))
     	 {}
    alt_up_char_buffer_string(vga_dev, str2, 1, 1);
    IOWR_16DIRECT(REG16_0_BASE, 0, 0x0f);
    altera_avalon_mutex_unlock (Mymutex);
    delay10ms(3000);
  printf("SEND OFF SIGNAL");
  while(altera_avalon_mutex_trylock(Mymutex,ALT_CPU_CPU_ID_VALUE ))
   	 {}
  alt_up_char_buffer_string(vga_dev, str3, 1, 1);
  IOWR_16DIRECT(REG16_0_BASE, 0, 0x0);
  altera_avalon_mutex_unlock (Mymutex);
  }
  return 0;
}
void delay10ms(unsigned long time)
{
	while(time>0)
	{
		int i=13333;
		while(i>0)
		i--;
		time--;
	}
}
