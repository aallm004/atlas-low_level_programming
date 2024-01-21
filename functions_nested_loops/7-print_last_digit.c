#include "main.h"
/**
 * print_last_digit - Write a function that prints the last digit of a number.
 *
 * Return: 0 (always success)
 */

int print_last_digit(int a)
{
	if (a >= 0 && a <= 9)
		return a;
	else
	{
		a = a % 10;
		return a;
	}
}
