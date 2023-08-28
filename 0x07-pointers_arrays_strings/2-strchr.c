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
	char *p = NULL;

	while (s)
	{
		if (*s == c)
		{
			p = s;
			break;
		}
		s++;
	}
	return (p);
}
