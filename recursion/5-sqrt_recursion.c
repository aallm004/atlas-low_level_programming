#include "main.h"

/**
 * _sqrt_recursion - function that returns natural square root of a number
 *
 * @n: root
 * @i: int
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_worker(n, 0));
}

int _sqrt_recursion_worker(int a, int b)
{

        if (b * b > i)
        {
                return (-1);
        }
        else if (b * b == a)
        {
                return (b);
        }
        else
                return (_sqrt_recursion(a, b + 1));
}
