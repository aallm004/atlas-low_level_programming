#include "main.h"
/**
 * print_diagonal- draw a diagonal line on the terminal
 *
 * @n: for diagonal line
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int a;
	int b;

	for (a = 1; a <= n; a++)
	{
		for (b = 1; b < a; b++)
			_putchar (' ');

		_putchar ('\\');
		_putchar ('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
