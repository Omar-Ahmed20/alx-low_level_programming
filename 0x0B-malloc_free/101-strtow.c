#include "main.h"
#include <stdlib.h>

/**
 * _strlen - counts the length of characters of given number of words
 * @str: input string
 * @j: number of words
 * Return: number of characters of j words
 */
int _strlen(char *str, int j)
{
	int i = 0, count = 0;

	while (i < (j + 1))
	{
		while (str[count] != ' ')
			count++;
		count++;
		i++;
	}
	return (count - (j + 1));
}
/**
 * _size - get the number of words
 * @str: input string
 * Return: number of words
 */
int _size(char *str, int i)
{
	int size = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
			size++;
		i++;
	}
	if (!(str[i - 1] == ' ' && str[i] != ' '))
		size++;
	return (size);
}
/**
 * strtow - split string into word dynamilclly alocated int memory
 * @str: input string
 * Return: pointer to the new string
 */

char **strtow(char *str)
{
	char **p;
	int i = 0, size = 0, j = 0, c = 0, n = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	while (*str == ' ')
		str++;
	size = _size(str, i);
	p = malloc(sizeof(char *) * size);
	if (p == NULL || size == 0)
		return (NULL);
	while (j < size)
	{
		int k = 0, flag = 0;

		p[j] = malloc(sizeof(char) * _strlen(str, j));
		if (p[j] == NULL)
			return (NULL);
		while (str[c] == ' ' && str[c + 1] == ' ')
		{
			c++;
			flag = 1;
		}
		if (flag == 1)
			c++;
		while (str[c] != ' ')
		{
			p[j][k] = str[c];
			n++;
			c++;
			k++;
		}
		p[j][k] = '\0';
		n++;
		c++;
		j++;
	}
	p[j] = '\0';
	return (p);
}
