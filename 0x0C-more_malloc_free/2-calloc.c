#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory and set it to 0
 * @nmemb: number of members of that array
 * @size: size of each member in bytes
 * Return: pointer to the memory that allocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int*p;
	void *ptr;
	unsigned int i = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	while (i < size)
	{
		p[i] = 0;
		i++;
	}
	ptr = p;
	return (ptr);
}
