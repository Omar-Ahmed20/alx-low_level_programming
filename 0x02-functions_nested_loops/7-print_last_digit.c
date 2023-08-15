#include "main.h"

/**
 * print_last_digit - prints last digit of the number
 * @a: user input
 * Return: the value of the last digit
 */
int print_last_digit(int a)
{
	_putchar(a%10);
	return (a%10);
}
