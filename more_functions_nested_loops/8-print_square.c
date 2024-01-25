#include "main.h"
/**
 * print_square - print a square
 *
 * Return: Always 0
 */

void print_square(int size)
{
	int a, b;

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b < a; b++)
		{
		_putchar('#');
		}
	}
	_putchar ('\n');
}
