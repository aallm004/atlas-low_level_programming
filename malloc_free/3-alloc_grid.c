#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - return pointer to a 2 dimensional array of int
 *
 * @width: width
 * @height: height
 */

int **alloc_grid(int width, int height)

{

	int **grid;
	int i,x;

	if (width == 0)
		return (NULL);

	if (height == 0)
		return (NULL);

	grid = malloc((height) * sizeof(int));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc((width) * sizeof(int));
		if (grid[i] == NULL)
		{
			i--;
			for (; i >= 0; i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
				for (x = 0; x < width; x++)
				grid[i][x] = 0;
	}
	
	return (grid);
}


/**
 * _memset- function that fills memory with a constant byte
 *
 *@n : int
 *@b : byte
 *@s : pointer
 *
 * Return: pointer to @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
