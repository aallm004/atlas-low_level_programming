#include "main.h"
/**
 * print_triangle- function that prints a triangle
 *
 * @size: mystery
 * Return: 0
 */

void print_triangle(int size)
{
	int r, c;

	for (r = 1; r <= size; r++)
	{
		for (c = 1; c <= size; c++)
		{
			if (c >= ((size + 1) - r))
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

	if (size <= 0)
	       _putchar('\n');
}
