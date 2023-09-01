#include "main.h"

/**
 * _islower - check if the char is lower
 * @c:  is the character from the user
 * Return: 1 if lower and 0 if not
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
