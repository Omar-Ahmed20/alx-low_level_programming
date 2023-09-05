#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate memory in a shape of grid
 * @width: the width of the grid
 * @height: the height of the grid
 * Return: pointer to the grid start
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(*p) * height);

	if (p == NULL)
		return (NULL);
	while (i < height)
	{
		int j = 0;

		p[i] = malloc(sizeof(**p) * width);
		if (p[i] == NULL)
		{
			while (i--)
				free(p[i]);
			free(p);
			return (NULL);
		}
		else
		{
			while (j < width)
			{
				p[i][j] = 0;
				j++;
			}
		}
		i++;
	}
	return (p);
}
