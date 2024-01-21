#include "main.h"
/**
 * print_last_digit - Write a function that prints the last digit of a number.
 *
 * Return: 0 (always success)
 */

int print_last_digit(int n)
{
	n %= 10
	if (n < 0)
	{
		n *= -1;
	}
	_putchar('0' + n);
	return (n);
}
