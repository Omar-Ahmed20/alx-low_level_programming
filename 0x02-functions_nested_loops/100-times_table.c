#include "main.h"

/**
 * times_table - times table all
 *
 */
void print_times_table(int n)
{
	int i = 0;
	int j = 1;
	int re;
	
	if (n <= 15 && n >= 0)
	{
		while (i < n+1)
		{
			_putchar(48);
			while (j < n+1)
			{
				_putchar(',');
				_putchar(' ');
				re = i * j;
				if (re <= 9)
					_putchar(' ');
				if (re <= 99)
					_putchar(' ');
				if (re >= 100)
				{
					_putchar((re / 100) + 48);
					_putchar((re / 10) % 10 + 48);
				}
				else if (re <= 99 && re >= 10)
					_putchar((re / 10) + 48);
				_putchar((re % 10) + 48);
				j++;
			}
			i++;
			j = 1;
			_putchar('\n');
		}
	}
}

