#include "main.h"
/**
 *puts_half- f that prints half of a string
 *@str: string
 */

void puts_half(char *str)
{
	int len, x, i;

	len = 0;

	if (len % 2 == 0)
	{
	
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (len % 2)
	{
		for (x = (len - 1) / 2; x < len - 1; x++)
		{
			_putchar(str[x + 1]);
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
