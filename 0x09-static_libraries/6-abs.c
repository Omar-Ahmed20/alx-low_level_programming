#include "main.h"

/**
 * _abs - calculate abs
 * @a: user input
 * Return: 0 when 0, a when +, -a when negative
 */
int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a > 0)
		return (a);
	else
		return (0);
}
