#include "main.h"

/**
 * print_sign - check if the number is + or -
 * @n: user input
 * Return: 1 if +, 0 if zero, -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		return ('/');
	}
}
