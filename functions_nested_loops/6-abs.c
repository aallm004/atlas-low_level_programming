#include "main.h"

/**
 * _abs(int) - write function that computes the absolute value of integer.
 * @n: The integer for which to find the absolute value.
 * Return: 0 (always success)
 */

int _abs(int n)
{
	if (n > 0)
		return (n);

	else
	{
		n *= -1;
		return (n);
	}
}
