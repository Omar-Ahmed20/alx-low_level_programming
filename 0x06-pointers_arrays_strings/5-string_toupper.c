#include "main.h"

/**
 * string_toupper - uppercaseses all the string
 * @st: input string
 * Return: uppercased string
 */
char *string_toupper(char *st)
{
	int i = 0;

	while (st[i] != '\0')
	{
		if (st[i] > 96 && st[i] < 123)
			st[i] -= 32;
		i++;
	}
	return (st);
}
