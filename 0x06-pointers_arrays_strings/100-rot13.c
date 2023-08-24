#include "main.h"

/**
 * rot13 - cypher some text with rot13
 * @str: string input
 * Return: string
 */

char *rot13(char *str)
{
	char rot13[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char ROT13[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
	int i = 0;

	while (str[i] != '\0')
	{
		int j = 0;

		while (j < 53)
		{
			if (str[i] == rot13[j])
			{
				str[i] = ROT13[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
