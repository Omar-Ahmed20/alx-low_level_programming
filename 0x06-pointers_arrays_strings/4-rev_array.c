#include "main.h"

/**
 * reverse_array - reverses array elements
 * @a: array input
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n / 2)
	{
		int temp = a[i];

		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		i++;
	}
}
