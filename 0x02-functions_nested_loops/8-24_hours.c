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
			_putchar((h / 10) + 48);
			_putchar((h % 10) + 48);
			_putchar(':');
			_putchar((m / 10) + 48);
			_putchar((m % 10) + 48);
			_putchar('\n');
			m++;
		}
		h++;
	}
}
