#include "main.h"
/**
 * is_prime_number - is prime number or no
 *@n: int
 */

int is_prime_number(int n)
{
	return (is_prime_number(n, 0));
}

/**
 * is_prime_number_worker - function that is prime number or no
 *
 * @a: int
 * @b: int
 *
 * Return:
 */

int is_prime_number_worker(int a, int b)
{
 	if (b == a)
	{
		return (0);
	}
	else
	{
		return (is_prime_number(a + 1, b)
}
