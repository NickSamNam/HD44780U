/*
 * test.c
 *
 * Created: 26-2-2018 21:02:28
 *  Author: snick
 *	Short:	Simple test.
 */ 

#define F_CPU 8000000

#include <util/delay.h>
#include "HD44780U.h"

void wait(int ms)
{
	int i;
	for (i = 0; i < ms; i++)
	{
		_delay_ms(1);
	}
}

int main(void)
{	
	LCD_init();
	LCD_display_text("Hello World!");
	LCD_set_cursor(40);
	LCD_display_text("// EOF");
}
