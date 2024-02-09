#include "main.h"

int is_prime_number_worker(int a, int b);

/**
 * is_prime_number - is prime number or no
 *@n: int
 *
 * Return: 0, etc
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_prime_number_worker(n, 0));
}

/**
 * is_prime_number_worker - function that is prime number or no
 *
 * @a: int
 * @b: int
 *
 * Return: 1, 0
 */

int is_prime_number_worker(int a, int b)
{
 	if (b == a)
	{
		return (0);
	}
	else if (b % a == 0)
	{
		return (1);
	}
	else
	{
		return (is_prime_number_worker(a, b + 1));
	}
}
