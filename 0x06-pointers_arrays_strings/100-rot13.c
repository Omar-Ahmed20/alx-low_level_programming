#include "main.h"

/**
 * rot13 - cypher some text with rot13
 * @str: string input
 * Return: string
 */

char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] > 64 && str[i] < 78) || (str[i] > 96 && str[i] < 110))
			str[i] = str[i] + 13;
		else if ((str[i] > 77 && str[i] < 91) || (str[i] > 109 && str[i] < 123))
			str[i] = str[i] - 13;
		i++;
	}
	return (str);
}
