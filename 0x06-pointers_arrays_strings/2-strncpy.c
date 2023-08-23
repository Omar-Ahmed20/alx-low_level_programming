#include "main.h"

/**
 * _strncpy - copyr string to array
 * @dest: input array
 * @src: string to be copied
 * @n: number of bytes
 * Return: pointer to dust
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
