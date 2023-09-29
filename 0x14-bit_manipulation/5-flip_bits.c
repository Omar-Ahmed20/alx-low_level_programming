#include "main.h"

/**
 * flip_bits - number of bits need to be flipped to get m
 * @n: input number
 * @m: number to be converted to
 * Return: number of bits to be flipped
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
