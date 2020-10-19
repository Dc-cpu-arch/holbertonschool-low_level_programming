#include "holberton.h"

/**
 * free_grid - free the last 2D array
 * @grid: last array, file 3.
 * @height:  number of lines to be freed
 **/

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}

	free(grid);
}
