#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - function that converts binary num to unsig int
 *
 * @b: string that contains binary to be changed
 *
 * Return: new unsigned int, 0
 */

unsigned int binary_to_uint(const char *b)
{
	int res = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		res <<= 1;
		if (b[0] == '1')
			res++;
		else if (b[0] != '0')
			return (0);
		b++;
	}
	return (res);
}


/**
 * _strlenconst - returns the length of a string
 *
 * @s:            a constant string pointer
 *
 * Return:        the length of the string
 */

int _strlenconst(const char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}
