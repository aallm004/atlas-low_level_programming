#include "main.h"

/**
 * print_rev - prints a string, in reverse, w new line.
 * @s : int
 */

void rev_string(char *s)
{
	int pos;
	char temp;
	int len;

	len = _strlen(s);

	for (pos = 0; pos <= (len / 2) - 1; pos++)
	{
		temp = s[pos];
		s[pos] = s[(len - (pos + 1) )];
		s[(len - (pos + 1))] = temp;
	}
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
