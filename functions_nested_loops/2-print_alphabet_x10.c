#include "main.h"
/**
 * main - Print alphabet in lowercase 10 times
 *
 * Return: 0 (always success)
 */
void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int i = 10;


	while (i >= 1)
	{
		alphabet = 'a';
		while (alphabet <= 'z')

		{
			_putchar(alphabet);
			alphabet++;
		}
		i--;
		_putchar('\n');
	}
}
