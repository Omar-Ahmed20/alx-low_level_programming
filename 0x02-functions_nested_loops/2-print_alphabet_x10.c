#include "main.h"

/**
 *print_alphabet_x10 - prints alphabets 10 times
 *
 */
void print_alphabet_x10(void)
{
	int i = 10;
	char j = 97;

	while (j < 123)
	{
		_putchar(j);
		j++;
	}
	_putchar('\n');
}

