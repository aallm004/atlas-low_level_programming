#include "main.h"

/**
 * _abs(int) - Compute the absolute value of an integer.
 *@n: The integer for which to find the absolute value.
 *
 * Description: This function computes the absolute value of the given integer.
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
