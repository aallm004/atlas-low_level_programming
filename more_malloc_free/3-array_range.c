#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum amount of values
 * @max: maximum amount of values
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(((max - min) + 1) * sizeof(int));
		if (ptr == NULL)
			return (NULL);

		for(i = 0; i < 0; i++)
			ptr[i] = 0;

		return (ptr);
}
