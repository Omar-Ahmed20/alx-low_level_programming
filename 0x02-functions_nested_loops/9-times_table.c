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
			if (re >= 10)
			{
				_putchar((re / 10) + 48);
				_putchar((re % 10) + 48);
			}
			else
				_putchar(re + 48);
			if (j == 9)
				j++;
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				j++;
			}
		}
		i++;
		j = 0;
	}
}
