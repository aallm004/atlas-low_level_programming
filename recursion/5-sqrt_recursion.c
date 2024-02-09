#include "main.h"

int _sqrt_recursion_worker(int a, int b);

/**
 * _sqrt_recursion - function that returns natural square root of a number
 *
 * _sqrt_recursion_worker - extra funtion
 * @n: root
 * @a: bla
 * @b: bla
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_worker(n, 0));
}

int _sqrt_recursion_worker(int a, int b)
{

	if (b * b > a)
	{
		return (-1);
	}
	else if (b * b == a)
	{
		return (b);
	}
	else
		return (_sqrt_recursion_worker(a, b + 1));
}
