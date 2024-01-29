#include "main.h"

/**
 * _puts - function that prints a string, followed by new line
 * @str: pointer
 */


void _puts(char *str)
{
	int s;

	while (str[s] != '\0')

	{
	_putchar (*str[s]);
		*str++;
	}
	_putchar('\n');
}
