#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free memory location of a grid
 * @grid: the grid that should be freed
 * @height: the height of the grid
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
