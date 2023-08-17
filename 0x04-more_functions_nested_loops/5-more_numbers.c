#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 ten times
 *
 */

void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		while (j < 15)
		{
			if (j > 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
