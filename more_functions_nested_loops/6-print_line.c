#include "main.h"
/**
 * print_line- draw a straight line in the terminal
 *
 * @n : number
 *
 * Return: 0 (always success)
 */

void print_line(int n)
{

	int a;

	for (a = 1; a <= n; a++)
	{
		for (b = 1; b < a; b++)
		{	
		_putchar ('_');
		}
	}
	_putchar ('\n');
}
