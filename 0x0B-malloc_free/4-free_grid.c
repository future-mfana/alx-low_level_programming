#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free's 2d arrays
 * @grid: 2d grid
 * @height: height dimension of the grid
 * Description: free's memory of a grid
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
