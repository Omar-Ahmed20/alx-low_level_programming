#include "main.h"

/**
 * swap_int-function that dinameclly swapping two ints
 * @a: first int to be swapped
 * @b: second int to be swapped
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
