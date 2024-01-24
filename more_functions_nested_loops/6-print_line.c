#include "main.h"
/**
 * print_line- draw a straight line in the terminal
 *
 * Return: 0 (always success)
 */

void print_line(int n)
{

	int a;

	for (a = 1 ; a <= n ; a++)
	{
		_putchar ('_');
	}
	_putchar ("\n");
}
