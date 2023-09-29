#include "main.h"

/**
 * clear_bit - set 0 to a bit of given index
 * @n: input integer
 * @index: index to be cleared
 * Return: 1 if success or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
