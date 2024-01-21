#include "main.h"

/**
 * abs(int) - write function that computes the absolute value of integer.
 *
 * Return: 0 (always success)
 */

int abs(int n)
{
	if (n > 0)
		return (n);

	else
	{
	 	n *= -1;
		return (n);
	}
}
