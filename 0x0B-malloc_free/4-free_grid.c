#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees 2 dimensional array of ints
 * @grid: grid
 * @height: height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (grid && height > 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}

		free(grid);
	}


}
