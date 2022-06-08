#include "main.h"

/**
 * -24_hours.c - prints every minute of the day
 */

void jack_bauer(void)
{
	int hour, min;
	for (hour = 0; hour <= 23; hour++)
	{	
		for (min = 0; min <= 59; min++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar('\n');
		}
	}

}

