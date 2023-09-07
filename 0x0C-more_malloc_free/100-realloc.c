#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer of the memory block
 * @old_size: the size of the memory block
 * @new_size: the new size of the memory block
 * Return: the new pointer of the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p = ptr;
	unsigned int i = 0;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		while (i < old_size)
		{
			*((char *)p + i) = *((char *)ptr + i);
			i++;
		}
	}
	if (new_size < old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		while (i < new_size)
		{
			*((char *)p + i) = *((char *)ptr + i);
			i++;
		}
	}
	return (p);
}
