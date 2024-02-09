#include "main.h"
/**
 * _pow_recursion - funct returns v of x raised to pwr y
 *
 * @x: int
 * @y: power
 *
 * Return: -1, x, 1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
