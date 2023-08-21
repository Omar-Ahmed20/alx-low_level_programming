#include "main.h"

/**
 * _strlen - count number of charachters
 * @s: input string
 * Return: count
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
