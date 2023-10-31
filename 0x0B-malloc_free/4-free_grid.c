#include "main.h"
#include <stdlib.h>

/**
 * free_grid - 2 dimentional grid
 * @grid: parameter 1
 * @height: parameter 2
 * Return: return null or grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
			grid[i] = NULL;
		}
	}

	free(grid);
}
