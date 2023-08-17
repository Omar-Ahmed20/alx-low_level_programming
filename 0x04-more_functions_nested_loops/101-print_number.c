#include "main.h"
/**
 * print_number - print any input number by recrussion
 * @n: user input int
 */

void print_number(int n)
{
	unsigned int nu = n;

	if (nu < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((nu / 10) > 0)
		print_number(nu / 10);
	_putchar((nu % 10) + '0');
}
