#include "main.h"
/**
 * print_square - print a square
 *
 * Return: Always 0
 */

void print_square(int size)
{
	int y, a, side;

	for (y = 1; y <= size; y++)
	{
		for(a = 1; a <= size; a++)
		{
			_putchar('#');
		}	
		_putchar('\n');
	}
}
