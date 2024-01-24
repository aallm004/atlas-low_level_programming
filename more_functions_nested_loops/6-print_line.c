#include "main.h"
/**
 * print_line- draw a straight line in the terminal
 *
 * Return: 0 (always success)
 */

void print_line(int n)
{
	int l, m, o, p;

		for (l = 12; l <= 16; l++)
		{
			if (l > 10)
			{
				_putchar('_');
			}
		}
                for (m = 12; m <= 16; l++)
                {
                        if (m > 10)
                        {
                        	_putchar('_');
                        }
                }
		for (n = 12; n <= 16; l++)
                {
                        if (n > 10)
                        {
                        	_putchar('_');
			}
		}
                for (o = 12; o <= 16; l++)
                {
                        if (o > 10)
                        {
                        	_putchar('_');
                        }
                }
                for (p = 12; p <= 16; l++)
                {
			if (p > 10)
			{
			_putchar('_');
                        }
		}
}
