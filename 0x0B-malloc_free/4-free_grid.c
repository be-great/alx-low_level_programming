#include "main.h"
/**
* free_grid - function that frees a 2 dimensional grid previously created
* by your alloc_grid function
* @grid: the array
* @height: the height
*/



void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL && height != 0)
	{
		for (i = height; i >= 0; i--)
			free(grid[i]);
		free(grid);
	}
}

