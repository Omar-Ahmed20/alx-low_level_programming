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
		_putchar(48);
		while (j < 10)
		{
			_putchar(',');
			_putchar(' ');
			re = i * j;
			if (re >= 10)
			{
				_putchar((re / 10) + 48);
				_putchar((re % 10) + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(re + 48);
			}
			j++;
		}
		i++;
		j = 0;
		_putchar('\n');
	}
}
