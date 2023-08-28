#include "main.h"
#include <stdio.h>

/**
 * print_digsums - print sum of diagonals
 * @a: input array pointer
 * @size: size of that square array
 */

void print_digsums(int *a, int size)
{
	int i = 0;
	int sum = 0;
	int sum2 = 0;

	while (i < size)
	{
		sum += a[i];
		sum2 += a[size - 1 - i];
		a += size;
		i++;
	}
	printf("%d, ", sum);
	printf("%d\n", sum2);
}
