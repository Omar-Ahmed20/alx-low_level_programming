#include "main.h"

/**
 * _strlen_recursion - counts length of the string
 * @s: string to be counterd
 * Return: lenght of the string
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
		return (0);
	count++;
	count += _strlen_recursion(s + 1);
	return (count);
}
