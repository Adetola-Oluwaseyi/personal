#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D array previously
 * created by alloc_grid function
 * @grid: the 2D array being freed
 * @height: no of rows in the array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
