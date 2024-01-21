#include "main.h"

/**
 * print_sign(int n)- print the sign of a number
 *
 * @n: The number to check the sign of
 *
 * Return: 1 and prints + if n is greater than zero, 0 if n is zero and  -1 and prints "-" if n is less than zero.
 */
int print_sign(int n);
{
	int test;

	if (n > 0)
	{
		test = 1;
		_putchar('+');
	}
	else if (n == 0)
	(
	 	test = 0;
		_putchar('0');
	}
	else
	{
		test = -1;
		_putchar('_');
	}
	return test;
}
