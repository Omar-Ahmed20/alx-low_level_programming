#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates charachter in a string
 * @s: string input
 * @c: the character
 * Return: pointer to the c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
