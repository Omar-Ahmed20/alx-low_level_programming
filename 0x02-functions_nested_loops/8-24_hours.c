#include "main.h"

/**
 *
 *
 *
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;
	while (h < 24)
	{
		while (m < 60)
		{
			_putchar('0' + h);
			_putchar(':');
			_putchar(m + '0');
			m++;
		}
		h++;
	}
}
