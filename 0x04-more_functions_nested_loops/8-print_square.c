#include "main.h"

/**
 * print_square - print square based on size innput
 * @size: user input to determine the size of the square
 */

void print_square(int size)
{
	int i = 0;
	int j = 0;

	while (i < size)
	{
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		i++;
		j = 0;
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
