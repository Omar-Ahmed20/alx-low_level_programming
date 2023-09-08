#include "main.h"
#include <stdlib.h>
/**
 * _strlen - count number of charachters
 * @s: input string
 * Return: count
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
/**
 * _printans - print the reversed answer in correct order
 * @str: sting of answer
 * @l1: length of first string
 * @l2: length of second string
 */
void _printans(int *str, int l1, int l2)
{
	int i = l1 + l2;

	while (i >= 0)
	{
		if (str[i] > 0)
			break;
		i--;
	}

	while (i >= 0)
	{
		_putchar(str[i] + 48);
		i--;
	}
	_putchar('\n');
}
/**
 * multiply - multiply two big digits
 * @s1: first number string
 * @s2: second number string
 */
void multiply(char *s1, char *s2)
{
	int i, j, tmp, l1 = _strlen(s1), l2 = _strlen(s2);
	int a[1000], b[1000], ans[2000] = {0};

	i = l1 - 1;
	j = 0;
	while (i >= 0)
	{
		a[j] = s1[i] - 48;
		i--;
		j++;
	}
	i = l2 - 1;
	j = 0;
	while (i >= 0)
	{
		b[j] = s2[i] - 48;
		i--;
		j++;
	}
	i = 0;
	while (i < l2)
	{
		j = 0;
		while (j < l1)
		{
			ans[i + j] += b[i] * a[j];
			j++;
		}
		i++;
	}
	i = 0;
	while (i < l1 + l2)
	{
		tmp = ans[i] / 10;
		ans[i] = ans[i] % 10;
		ans[i + 1] = ans[i + 1] + tmp;
		i++;
	}
	_printans(ans, l1, l2);
}
/**
 * _isdigit - check if the character is digit
 * @str: input string
 * Return: 1 if digit 0 if not
 */
int _isdigit(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		int tmp = str[i] - 48;

		if (tmp >= '0' && tmp <= '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * main - main function checks input with error handling
 * @argc: number of arguments to program
 * @argv: array of all arguments
 * Return: 0 if success 98 if fail
 */
int main(int argc, char **argv)
{
	char error[] = "Error\n";
	int i;

	if (argc != 3)
	{
		i = 0;
		while (error[i] != '\0')
		{
			_putchar(error[i]);
			i++;
		}
		exit(98);
	}
	else if (!(_isdigit(argv[1]) && _isdigit(argv[2])))
	{
		i = 0;
		while (error[i] != '\0')
		{
			_putchar(error[i]);
			i++;
		}
		exit(98);
	}
	multiply(argv[1], argv[2]);
	return (0);
}
