#include "main.h"

/**
 * set_bit - change a single bit in number
 * @n: input integer
 * @index: index to be changed
 * Return: 1 if succed -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1L << index));
}
