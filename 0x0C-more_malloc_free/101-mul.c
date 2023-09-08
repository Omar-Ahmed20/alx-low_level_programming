#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _isdigit - checks if character is digit
 * @c: the charachter to be checked
 * Return: 1 if digit 0 if not
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - count length of a string
 * @s: input string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * big_multiply - multiply two big number strings
 * @s1: the first number string
 * @s2: the second number string
 * Return: the product of their maltuiplication
 */
char *big_multiply(char *s1, char *s2)
{
	char *r;
	int a, b, c, x, l1, l2;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	a = x = l1 + l2;
	r = malloc(l1 + l2);
	if (!r)
		printf("Error\n"), exit(98);
	while (a--)
		r[a] = 0;
	l1--;
	while (l1 >= 0)
	{
		if (!_isdigit(s1[l1]))
		{
			free(r);
			printf("Error\n"), exit(98);
		}
		a = s1[l1] - 48;
		c = 0;
		l2 = _strlen(s2) - 1;
		while (l2 >= 0)
		{
			if (!_isdigit(s2[l2]))
			{
				free(r);
				printf("Error\n"), exit(98);
			}
			b = s2[l2] - 48;
			c += r[l1 + l2 + 1] + (a * b);
			r[l1 + l2 + 1] = c % 10;
			c /= 10;
			l2--;
		}
		if (c)
			r[l1 + l2 + 1] += c;
		l1--;
	}
	return (r);
}


/**
 * main - multiply two big number strings
 * @argc: the number of arguments
 * @argv: array of all the arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char *res;
	int a, c, x;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	x = _strlen(argv[1]) + _strlen(argv[2]);
	res = big_multiply(argv[1], argv[2]);
	c = 0;
	a = 0;
	while (c < x)
	{
		if (res[c])
			a = 1;
		if (a)
			_putchar(res[c] + 48);
		c++;
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
