#include "main.h"

/**
 * _strpbrk - locates first occurrence in the string
 * @s: input string
 * @accept: second string
 * Return: string pointer if matches found or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0')
	{
		int j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return ('\0');
}
