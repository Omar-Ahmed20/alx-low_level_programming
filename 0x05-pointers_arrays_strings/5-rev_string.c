#include "main.h"

/**
 * rev_string - reverse string
 * @s: input string to be reversed
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
		i++;
	while (j < (i / 2))
	{
		char temp = s[j];

		s[j] = s[i - j - 1];
		s[i - j - 1] = temp;
		j++;
	}
}
