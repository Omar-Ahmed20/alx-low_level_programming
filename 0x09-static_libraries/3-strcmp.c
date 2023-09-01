#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: positive or negative or zero
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int sign = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			sign = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (sign);
}
