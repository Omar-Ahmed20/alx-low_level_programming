#include "main.h"

/**
 * print_diagonal - prints diagonal based on n
 * @n: user input number of diagonals he wants
 */

void print_diagonal(int n)
{
	int i = 0;

	while (i < n)
	{
		int j = 0;

		while (j <= i)
		{
			if (j == i)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
			j++;
		}
		i++;
	}
	if (n <= 0)
		_putchar('\n');

}
