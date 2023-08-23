#include "main.h"

/**
 * _strcat - concatinate two strings together
 * @dest: first string that wil be appended to
 * @src: second string that will be appended to dest
 * Return: appended string pointer
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
