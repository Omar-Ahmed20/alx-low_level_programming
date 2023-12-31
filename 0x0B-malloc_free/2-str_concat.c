#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two string into new memory allocation
 * @s1: first string input
 * @s2: second string input
 * Return: pointer to new array
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, m = 0;
	char *p;

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
			i++;
	}
	if (s2 != NULL)
	{
		while (s2[j] != '\0')
			j++;
	}
	p = malloc(i + j + 1);
	if (p == NULL)
		return (NULL);
	if (s1 == NULL && s2 == NULL)
		p[0] = '\0';
	while (k < i)
	{
		p[k] = s1[k];
		k++;
	}
	while (m < j)
	{
		p[k] = s2[m];
		k++;
		m++;
	}
	return (p);
}
