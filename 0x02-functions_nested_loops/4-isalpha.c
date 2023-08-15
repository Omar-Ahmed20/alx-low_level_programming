#include "main.h"

/**
 * _isalpha - chech if its letter
 * @c: user input
 *Return: 1 if letter 0 if not
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
