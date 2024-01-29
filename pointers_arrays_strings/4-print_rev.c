#include "main.h"

/**
 * print_rev - prints a string, in reverse, w new line.
 */

void print_rev(char *s)
{
	int pos;

	int len = _strlen(s);


	for (pos = len - 1; pos >= 0; pos--)
	{
		_putchar (s[pos]);
	}
		_putchar ('\n');
}
	
/**
 * _strlen - returns the length of a string
 *
 * @s : int
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}
