#include "main.h"

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

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;

	if (i > j)
		l = i;
	else
		l = j;
	if (l + 1 > size_r)
		return (0);
	r[l] = '\0';
	k = l - 1;
	while (k >= 0)
	{
		i--;
		j--;
		if (i >= 0)
			s = n1[i] - 48;
		else
			s = 0;
		if (j >= 0)
			f = n2[j] - 48;
		else
			j = 0;
		r[k] = ((s + f + d) % 10) + 48;
		d = ((s + f + d) / 10);
		k--;
	}
	if (d == 1)
	{
		r[l + 1] = '\n';
		if (l + 2 > size_r)
			return (0);
		while (l >= 0)
		{
			r[l + 1] = r[l];
			l--;
		}
		r[0] = d + 48;
	}
	return (r);
}
