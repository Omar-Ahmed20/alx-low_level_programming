#include "main.h"

/**
 * print_number - print all numbers
 * @n: user input
 */

void print_number(int n)
{
	unsigned int num;

	num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}

	if (num / 10)
		print_number(num / 10);
	_putchar((num % 10) + 48);
}
