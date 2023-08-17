#include "main.h"

/**
 * _isdigit - check if the charachter is digit or not
 * @c: user input character
 * Return: 0 when digit else 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
