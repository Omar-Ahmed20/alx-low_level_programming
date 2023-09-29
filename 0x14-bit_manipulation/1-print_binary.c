#include "main.h"

/**
 * print_binary - print binary values of int
 * @n: input integer
 */
void print_binary(unsigned long int n)
{
	int mask = sizeof(n) * 8;
	int p = 0;

	while (mask)
	{
		if (n & 1L << --mask)
		{
			_putchar('1');
			p++;
		}
		else if (p)
			_putchar('0');
	}
	if (!p)
		_putchar('0');
}
