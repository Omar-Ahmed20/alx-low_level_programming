#include "main.h"

/**
 * leet - replace charachters with numbers
 * @str: input string
 * Return: string with replaced charachters
 */

char *leet(char *str)
{
	int i = 0;
	char letters[] = {'A', 'E', 'O', 'T', 'L'};
	int numbers[] = {4, 3, 0, 7, 1};

	while (str[i] != '\0')
	{
		int j = 0;

		while (j < 5)
		{
			if (str[i] == letters[j] || str[i] == (letters[j] + 32))
				str[i] = 48 + numbers[j];
			j++;
		}
		i++;
	}
	return (str);
}
