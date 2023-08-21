#include "main.h"

/**
 * puts_half - print second half
 * @str: string inpute
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	i++;
	while (str[i / 2] != '\0')
	{
		_putchar(str[i / 2]);
		i += 2;
	}
	_putchar('\n');
}
