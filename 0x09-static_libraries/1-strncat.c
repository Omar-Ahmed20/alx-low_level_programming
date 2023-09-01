#include "main.h"

/**
 * _strncat - concatinate n number of charachters
 * @dest: string to be conactinated to
 * @src: string that will be added
 * @n: number of bytes to be added
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int c = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && (c < n))
	{
		dest[i] = src[j];
		i++;
		j++;
		c++;
	}
	return (dest);
}
