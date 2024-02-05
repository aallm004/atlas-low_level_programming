#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 *@dest : destination
 *@ src : source
 *@n : insigned int
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;
	char *d = (char*)dest;
	char *s = (char*)src;

	for (; x < n; x++)
		d[x] = s[x];

	return (d);
}
