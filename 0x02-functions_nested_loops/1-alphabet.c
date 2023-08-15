#include "main.h"

/**
 * print_alphabet - print lowercase alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
