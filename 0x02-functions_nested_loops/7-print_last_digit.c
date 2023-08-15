#include "main.h"

/**
 * print_last_digit - prints last digit of the number
 * @a: user input
 * Return: the value of the last digit
 */
int print_last_digit(int a)
{
	int last;

	if (a < 0)
		last = (-1 * a) % 10;
	else
		last = a % 10;
	_putchar(last + '0');
	return (last);
}
