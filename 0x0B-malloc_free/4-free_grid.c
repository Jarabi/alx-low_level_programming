#include "main.h"
#include <stdlib.h>

/**
 * free_grid - returns a pointer to a 2 dimensional array of integers.
 * @grid: 2D grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			if (grid[i] != NULL)
				free(grid[i]);
		}
		free(grid);
	}
}
