#include "main.h"
/**
 * _pow - calculate x power y
 * @x: base of the number
 * @y: exponent
 * Return: -1 if error value of power if correct input
 */

int _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow(x, y - 1));
}
/**
 * _strlen - count number of charachters
 * @s: input string
 * Return: count
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
/**
 * binary_to_uint - convert binary input to unsigned int
 * @b: char in binary form
 * Return: decimal int format or 0 if fails
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	int base = 2;
	int result = 0;

	if (!b)
		return (0);
	len = _strlen(b);
	while (len)
	{
		if ((*b - 48) != 0 && (*b - 48) != 1)
			return (0);
		result += (*b - 48) * _pow(base, len - 1);
		len--;
		b++;
	}
	return (result);
}
