#include "main.h"
#include <unistd.h>
/**
 * print_binary - function prints binary representation of number
 *
 * @n: int
 *
 * Return: binary representation of a number or NULL
 */

void print_binary(unsigned long int n)
{
	int a = 0;
	int x;
	unsigned long int hole = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	hole = (hole << 63);

	for (x = 63; x >= 0; x--)
	{
		if (hole & n)
		{
			_putchar('1');
			a = 1;
		}
		else
		{
			if (a)
				_putchar('0');
		}
		hole >>= 1;
	}
}
