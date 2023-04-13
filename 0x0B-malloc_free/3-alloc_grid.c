#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loops to make a grid
 * @width: width inut
 * @height: hheight input
 * Return: ponters to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **hgt;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	hgt = malloc(sizeof(int *) * height);
	if (hgt == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		hgt[x] = malloc(sizeof(int) * width);
		if (hgt[x] == NULL)

		{
			for (; x >= 0; x--)
				free(hgt[x]);
			free(hgt);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			hgt[x][y] = 0;
	}
	return (hgt);
}
