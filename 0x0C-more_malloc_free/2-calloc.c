#include "main.h"
#include <stdlib.h>
char *_set(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while(n--)
	{
		*s = b;
		s++;
	}
	return (ptr);
}
/**
 * _calloc - allocates memory and set it to 0
 * @nmemb: number of members of that array
 * @size: size of each member in bytes
 * Return: pointer to the memory that allocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ptr = malloc(nmemb * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	_set(ptr, 0, sizeof(int) * nmemb);
	return (ptr);
}
