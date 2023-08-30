#include "main.h"

/**
 * _pow_recursion - calculate x power y
 * @x: base of the number
 * @y: exponent
 * Return: -1 if error value of power if correct input
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
