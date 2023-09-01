#include "main.h"

/**
 * _strspn - gets the length of a prefix
 * @s: string originl
 * @accept: prefix
 * Return: length of prefix
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0')
	{
		int j = 0;

		while (s[i] != accept[j])
		{
			if (accept[j] == '\0')
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
