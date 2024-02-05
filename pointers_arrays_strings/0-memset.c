#include "main.h"

/**
 * _memset- function that fills memory with a constant byte
 *
 *@n : int
 *@b : byte
 *@s : pointer
 *
 * Return: pointer to @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;
	
	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
