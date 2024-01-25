#include "main.h"
/**
 * print_diagonal- draw a diagonal line on the terminal
 *
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int a;
	int b;

	for (a = 1; a <= n; a++)
		_putchar (' ');
	{
		for (b = 1; b < a; b++)
		{
			_putchar ('\\');
			_putchar ('\n');
