#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid - Function to free 2D array
 *@grid: input
 *@height: int
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height != 0 && grid != NULL)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
	}
}
