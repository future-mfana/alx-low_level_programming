#include "main.h"
#include <stdlib>
#include <stdio.h>

/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @height: height dimension of the grid
 * Description: frees memory of grid
 * Return: 0
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i - 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
