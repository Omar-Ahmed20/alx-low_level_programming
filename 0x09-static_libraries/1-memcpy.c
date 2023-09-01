#include "main.h"

/**
 * _memcpy - copy memory data to another memory location
 * @dest: string to copy to
 * @src: string to copy from
 * @n: number of bytes
 * Return: dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
