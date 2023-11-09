#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2d array of integers
 * @width: the width of the array
 * @height: the height of the array
 * Return: if width <= 0, height <= 0 or fails, NULL
 * otherwise a pointer to the 2d array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int hi, wi;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}
	for (hi = 0; hi < height; hi++)
	{
		grid[hi] = malloc(sizeof(int) * width);
		if (grid[hi] == NULL)
		{
			for (; hi >= 0; hi--)
			{
				free(grid[hi]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (hi = 0; hi < height; hi++)
	{
		for (wi = 0; wi < width; wi++)
		{
			grid[hi][wi] = 0;
		}
	}
	return (grid);
}
