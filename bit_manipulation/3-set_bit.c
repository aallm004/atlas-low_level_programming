#include "main.h"
/**
 * set_bit - function sets value of bit to 1 at given index
 *
 * @index: index
 * @n: pointer
 *
 * Return: 1, -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int hole = 1;

	if (n == 0)
	{
		return (-1);
	}

	if (index > 63)
	{
		return (-1);
	}

	hole <<= index;

	*n |= hole;

		return (1);
}
