#include "main.h"
/**
 * get_bit - function that returns the value of a bit at given index
 *
 * @n: int
 * @index: index
 * Return: value of bit, null
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hole = 1;

	if (n == 0)
	{
		return (0);
	}

	if (index > 31)
	{
		return (-1);
	}

	hole = (hole << index);

	if (hole & n)
	{
		return (1);
	}

	return (0);

}
