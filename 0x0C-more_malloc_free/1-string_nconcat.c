#include "main.h"
#include <stdlib.h>
/**
 * _strlen - count number of characters of a string
 * @str: input string
 * Return:: lenght of the input string
 */
int _strlen(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}
/**
 * string_nconcat - concatenates two strings together with n chs.
 * @s1: first string
 * @s2: second string
 * @n: n number of characters to be concatinated from s2
 * Return: pointer to the new concatinated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = _strlen(s1);
	unsigned int len2 = _strlen(s2);
	char *p = malloc(len1 + len2 + 1);
	unsigned int i = 0, j = 0;

	if (p == NULL)
		return (NULL);
	while (i < len1)
	{
		p[i] = s1[i];
		i++;
	}
	if (n >= len2)
	{
		while (j < len2)
		{
			p[i] = s2[j];
			j++;
			i++;
		}
	}
	else
	{
		while (j < n)
		{
			p[i] = s2[j];
			i++;
			j++;
		}
	}
	p[i] = '\0';
	return (p);
}
