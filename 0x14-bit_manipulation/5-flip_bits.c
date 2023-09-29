#include "main.h"

/**
 *
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XORvalue = n ^ m;
	unsigned int count = 0;

	while (XORvalue)
	{
		if (XORvalue & 1ul)
			count++;
		XORvalue = XORvalue >> 1;
	}
	return (count);
}
