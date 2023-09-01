#include "main.h"

/**
 * _memset - fill n bytes of memory with b
 * @s: string input
 * @b: value to be filled with
 * @n: number of bytes
 * Return: pointer of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
