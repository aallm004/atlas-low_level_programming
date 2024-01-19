#include "main.h" /**
 * print_alphabet - print alphabet in lowercase
 *
 * Return: 0 (always success)
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')

	{
		_putchar(alphabet);
		alphabet++;
	}

	_putchar('\n');
}
