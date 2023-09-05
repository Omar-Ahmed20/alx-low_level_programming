#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy content of string into new alocatted space with malloc
 * @str: the string to copy
 * Return: pointer to the new alocatted space
 */

char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	p = malloc(i);

	if (p == NULL)
		return (NULL);

	while (j < i)
	{
		p[j] = str[j];
		j++;
	}
	return (p);
}
