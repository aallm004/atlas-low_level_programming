#include "main.h"
/**
 * puts2 - prints every other character of string
 *
 */

void puts2(char *str)
{
	int len, s;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (s = 0; s < len; s += 2)
	{
		_putchar(str[s]);
	}

	_putchar('\n');
}
