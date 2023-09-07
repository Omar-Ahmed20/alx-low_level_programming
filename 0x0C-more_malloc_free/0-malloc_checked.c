#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - assigne memory locations
 * @b: szie of the memory to be allocated
 * Return: pointer to that location
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
