#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2d grid previously created
 *
 * @grid: double pointer
 * @height: int
 */

void free_grid(int **grid, int height)

{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
		free(grid);
}
