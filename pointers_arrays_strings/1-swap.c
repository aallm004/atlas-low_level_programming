#include "main.h"

/**
 * swap_int - function that swaps values of two ints
 * @a : int
 * @b : int
 */

void swap_int(int *a, int *b)
{
	int c;

	c := *a
	a := *b
	b := c
}
