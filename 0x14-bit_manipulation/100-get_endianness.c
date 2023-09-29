#include "main.h"

/**
 * get_endianness - return the endinanness of the system
 * Return: 1 if small endian 0 if big endian
 */

int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
