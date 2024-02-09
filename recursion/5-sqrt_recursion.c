#include "main.h"

int _sqrt_recursion_worker(int a, int b);

/**
 * _sqrt_recursion - extra for int?
 *
 *@n: int
 * Return: n, 0
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_worker(n, 0));
}

/**
 * _sqrt_recursion_worker - function that returns the natural square of num
 *
 * @a: int
 * @b: int
 *
 * Return: -1, b
 */
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
