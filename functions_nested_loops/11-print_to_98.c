#include "main.h"
/**
 * print_to_98 - print all natural numbers from n to 98
 *
 * Return: 0 (always success)
 */

void print_to_98(int n);
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}
