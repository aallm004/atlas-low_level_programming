#include "main.h"

/**
 * _sqrt_recursion - function that returns natural square root of a number
 *
 * @n: root
 * @i: int
 */

int _sqrt_recursion(int n)
{
	int i;
	
	if ((n * n) > i)
	{
		return (-1);
	}
	else if (( n * n) == i)
	{
		return (n);
	}
	else
		return (_sqrt_recursion(i, n + 1));
}
