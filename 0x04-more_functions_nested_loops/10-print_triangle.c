#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints inverted triangle
 * @size: user input to determine the size of the triangle
 */

void print_triangle(int size)
{
	int i = 0;

	while (i < size)
	{
		int j = 0;

		while (j < size)
		{
			if (j < (size - i - 1))
				printf(" ");
			else
				printf("#");
			j++;
		}
		printf("\n");
		i++;
	}
	if (size <= 0)
		printf("\n");
}
