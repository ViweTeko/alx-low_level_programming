#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - frees a 2D array
 *
 * @grid: the grid
 * @height: size of grid
 */

void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; ++h)
		free(grid[h]);

	free(grid);
}
