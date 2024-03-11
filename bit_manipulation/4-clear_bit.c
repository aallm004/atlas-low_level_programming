#include "main.h"
/**
 * clear_bit - function that sets value of bit to 0 at given index
 *
 * @n: pointer
 * @index: index
 *
 * Return: 1, 0
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
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

	*n &= ~hole;

	return (1);
}
