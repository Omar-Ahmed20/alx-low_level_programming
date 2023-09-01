#include "main.h"

/**
 * _isupper - check if the hcaracter is uppercase
 * @c: is the user input charachter
 * Return: 0 when uppercase otherwise 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return  (0);
}
