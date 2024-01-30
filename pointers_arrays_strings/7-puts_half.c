#include "main.h"
/**
 *puts_half- f that prints half of a string
 *@str: string
 */

void puts_half(char *str)
{
	int len, x, i;

	len = _strlen(str);

		for (i = len / 2; i <= len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
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
