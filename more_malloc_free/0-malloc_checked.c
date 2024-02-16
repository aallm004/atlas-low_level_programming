#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: unsigned int
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	int *x;

	x = malloc(b);
	if (x == 0)
	{
		exit(98);
	}
	return (x);
}
