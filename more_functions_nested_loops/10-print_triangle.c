#include "main.h"
/**
 * print_triangle- function that prints a triangle
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int r, c;

	for (r = 5; r <= 10; r++)
	{
		for (c = 1; c <= 10; c++)
		{
			if (c >= (11-r))
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}

			{	
				_putchar('\n');
			}
		}
	}			
}
