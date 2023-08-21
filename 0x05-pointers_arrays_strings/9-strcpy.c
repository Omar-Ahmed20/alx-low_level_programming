#include "main.h"

/**
 * _strcpy - coppy an array to another array
 * @dest: first array
 * @src: second array
 * Return: the array
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
