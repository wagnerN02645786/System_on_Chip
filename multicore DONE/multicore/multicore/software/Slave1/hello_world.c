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
#include "system.h"
#include "alt_types.h"
#include "altera_avalon_pio_regs.h"
#include "altera_avalon_mutex.h"
#include "altera_avalon_mutex_regs.h"
#include "io.h"
#include "altera_avalon_uart.h"
#include "altera_avalon_uart_regs.h"
#include "altera_up_avalon_video_character_buffer_with_dma.h"

int main()
{
	char str1[]={"SLAVE1 (Green ON)"};
	char str2[]={"SLAVE1 (Red ON)"};
	char str3[]={"SLAVE1 (OFF)"};
	 alt_mutex_dev *Mymutex;
		 Mymutex=altera_avalon_mutex_open("/dev/mutex_0");
  printf("Hello from Nios II#2!\n");
  int y=0;
  while(altera_avalon_mutex_trylock(Mymutex,ALT_CPU_CPU_ID_VALUE ))
  	 {}
  FILE *fp;

  	 alt_up_char_buffer_dev * vga_dev;
  	 	// open the VGA port
  	 	vga_dev = alt_up_char_buffer_open_dev("/dev/video_character_buffer_with_dma_0");

  	 	if (vga_dev == NULL)
  	 	    	alt_printf ("Error: could not open VGA device \n");
  	 	    	else
  	 	    	alt_printf ("Opened VGA device \n");
    altera_avalon_mutex_unlock (Mymutex);

  while(1){
	  //int x=IORD_ALTERA_AVALON_PIO_DATA(PIOSLAVE1_BASE);
	  while(altera_avalon_mutex_trylock(Mymutex,ALT_CPU_CPU_ID_VALUE ))
	  	 {}
	  fp = fopen("/dev/uart_0","w");
	  int y0=IORD_ALTERA_AVALON_UART_RXDATA(UART_0_BASE);
	  int x=IORD_16DIRECT(0x41008,0);
	  if((y0==0xF)||(y0==0xFF)) x=0;
	  //printf("%d", y0);
	  fclose(fp);
	  altera_avalon_mutex_unlock (Mymutex);

	  if(x==255) {
		  printf("GreenON\n");
		  if(y==256)y=0;
		  while(altera_avalon_mutex_trylock(Mymutex,ALT_CPU_CPU_ID_VALUE ))
		  	  	 {}
		  alt_up_char_buffer_string(vga_dev, str1, 1, 2);
		  IOWR_ALTERA_AVALON_PIO_DATA(LEDGSLAVE1_BASE, y);
		  altera_avalon_mutex_unlock (Mymutex);
		  y=y*2;
		  if(y==0)y=1;
		  delay10ms(20);
	  }
	  if(x==15) {
	  		  printf("redON\n");
	  		  if(y==256)y=0;
	  		  while(altera_avalon_mutex_trylock(Mymutex,ALT_CPU_CPU_ID_VALUE ))
	  		  	  	 {}
	  		alt_up_char_buffer_string(vga_dev, str2, 1, 2);
	  		  IOWR_ALTERA_AVALON_PIO_DATA(0x241000, y);
	  		  altera_avalon_mutex_unlock (Mymutex);
	  		  y=y*2;
	  		  if(y==0)y=1;
	  		  delay10ms(20);
	  	  }
	  if(x==0){
		  printf("GreenredOFF\n");
		  while(altera_avalon_mutex_trylock(Mymutex,ALT_CPU_CPU_ID_VALUE ))
		  		  	  	 {}
		  alt_up_char_buffer_string(vga_dev, str3, 1, 2);
		  IOWR_ALTERA_AVALON_PIO_DATA(LEDGSLAVE1_BASE, 0);
		  IOWR_ALTERA_AVALON_PIO_DATA(0x241000, 0);
		  altera_avalon_mutex_unlock (Mymutex);
		  y=0;
	  }


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
