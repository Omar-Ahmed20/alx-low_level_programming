#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array by dynamic memory allocation
 * @size: size of the array
 * @c: the character to fill the array with
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *p = (char *) malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (size == 0 || p == NULL)
		return (NULL);
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
