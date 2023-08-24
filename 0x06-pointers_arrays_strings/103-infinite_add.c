#include "main.h"

/**
 * get_length - gets the length of array
 * @s1: input array
 * Return: number of array
 */
int get_length(char *s1)
{
	int i = 0;

	while (s1[i] != '\0')
		i++;
	return (i);
}
/**
 * largest - find out who is the largest
 * @i: first number
 * @j: second number
 * Return: the largest
 */
int largest(int i, int j)
{
	if (i > j)
		return (i);
	else
		return (j);
}
/**
 * infinite_add - add any two numbers
 * @n1: first number
 * @n2: second number
 * @r: array to store result
 * @size_r: size of the array
 * Return: pointer to result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, s = 0, d = 0, f = 0, l = 0, k = 0;

	i = get_length(n1);
	j = get_length(n2);
	l = largest(i, j);
	if (l + 1 > size_r)
		return (0);
	r[l] = '\0';
	k = l - 1;
	while (k >= 0)
	{
		i--;
		j--;
		if (i >= 0)
			s = n1[i] - '0';
		else
			s = 0;
		if (j >= 0)
			f = n2[j] - '0';
		else
			f = 0;
		r[k] = ((s + f + d) % 10) + '0';
		d = ((s + f + d) / 10);
		k--;
	}
	if (d == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
			return (0);
		while (l-- >= 0)
		{
			r[l + 1] = r[l];
		}
		r[0] = d + '0';
	}
	return (r);
}
