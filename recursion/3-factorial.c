#include "main.h"
/**
 * factorial - returns factorial of given number
 *
 * @n : int
 * Return: -1, 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
