#include "main.h"

/**
 *
 *
 */
void times_table(void)
{
	int i = 0;
	int j = 1;
	int re;

	while (i < 10)
	{
		_putchar(48);
		while (j < 10)
		{
			_putchar(',');
			_putchar(' ');
			re = i * j;
			if (re <= 9)
				_putchar(' ');
			else
				_putchar((re / 10) + 48);
			_putchar((re % 10) + 48);
			j++;
		}
		i++;
		j = 0;
		_putchar('\n');
	}
}
