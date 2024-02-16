#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - function that locates memory using malloc
 *
 * @b: unsigned int
 */

void *malloc_checked(unsigned int b)
{
	int *x;

	x = malloc(b * sizeof(int));
	if (x == 0)
		exit(98);
	{
	return (x);
	}
}
