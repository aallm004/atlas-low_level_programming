#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{	
		if (x != 50 && x != 52)
		{
			_putchar(x);
		}
	}
}
