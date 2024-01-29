#include "main.h"
#include <string.h>

/**
 * strlen - function that returns the length of a string
 *
 * @s : int
 * @x : int
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
