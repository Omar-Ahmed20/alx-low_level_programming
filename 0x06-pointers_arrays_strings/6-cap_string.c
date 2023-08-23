#include "main.h"

/**
 * cap_string - uppercaseses all the string
 * @s: input string
 * Return: uppercased string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123 && i == 0)
			s[i] -= 32;
		else if (s[i] == ' ' || s[i] == '\n')
		{
			if (s[i + 1] > 96 && s[i + 1] < 123)
				s[i + 1] -= 32;
		}
		i++;
	}
	return (s);
}
