#include "main.h"
/**
 * flip_bits - function that returns num of bits needed to flip to go
 *
 * @n: int
 * @m: long int
 *
 * Return: number of bits you would need
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int res = 0;
	int x;
	unsigned long int comp;

	comp = n ^ m;

	for (x = 0; x < 64; x++)
	{
		if (comp & 1)
			res++;
		comp >>= 1;
	}

	return (res);
}
