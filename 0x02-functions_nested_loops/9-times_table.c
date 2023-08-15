#include "main.h"

/**
 *
 *
 */
void times_table(void)
{
	int i , j = 0;
	int re;

	while (i < 10)
	{
		while (j < 10)
		{
			re = i * j;
			_putchar(re + 48);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			j++;
		}
		i++;
		i = 0;
	}
}
