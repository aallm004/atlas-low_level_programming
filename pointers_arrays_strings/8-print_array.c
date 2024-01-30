#include "main.h"

/**
 * print_array- print n elements of array of int
 * @a: le pointer
 * @n: number of elements of the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf(a[i]);
		if (i < (n))
		{
			 printf(", ");
		}
	}
	printf('\n');
}
