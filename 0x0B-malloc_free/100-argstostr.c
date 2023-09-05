#include "main.h"
#include <stdlib.h>

/**
 * _strlen - count number of characters in the array
 * @str: input array
 * Return: number of characters of the array
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
/**
 * argstostr - take all program arguments into dinameccly allocated array
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer to the new array
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int i = 0, j = 0, c = 0;
	int size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		size += _strlen(av[i]);
		i++;
	}
	p = malloc(sizeof(char) * size + 1 + ac);
	if (p == NULL)
		return (NULL);

	while (j < ac)
	{
		int k = 0;

		while (av[j][k] != '\0')
		{
			p[c] = av[j][k];
			k++;
			c++;
		}
		p[c] = '\n';
		c++;
		j++;
	}
	p[c] = '\0';
	return (p);
}
