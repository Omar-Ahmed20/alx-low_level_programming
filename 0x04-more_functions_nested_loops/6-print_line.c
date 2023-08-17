#include "main.h"

/**
 * print_line - print lines using n variable
 * @n: number of _ to make line
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
