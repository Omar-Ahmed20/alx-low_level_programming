#include "main.h"
#include <stdio.h>
/**
 * print_array - print whole array
 * @a: array input
 * @n: number of items of the array
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if ((n - i) != 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
