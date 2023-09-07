#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array of integers
 * @min: minimum value of the array
 * @max: maximum value of the array
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *p; 
	int i = 0;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * ((max - min) + 1));
	if (p == NULL)
		return (NULL);
	while (min <= max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
