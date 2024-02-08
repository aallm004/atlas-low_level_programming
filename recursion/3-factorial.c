#include "main.h"
/**
 * factorial - returns factorial of given number
 *
 * @n : int
 */
int factorial(int n)
{
	if (n)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
 	}
}	
