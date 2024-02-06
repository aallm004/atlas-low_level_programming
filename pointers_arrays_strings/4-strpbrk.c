#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: string
 * @accept: byte
 */

char *_strpbrk(char *s1, char *s2)
{

	register const char *scanp;
	register int c, sc;

	while ((c = *s1++) != 0)
	{
		for (scanp = s2; (sc = *scanp++) != 0;)
			
			if (sc == c)
				return ((char *)(s1 - 1));
	}
	return (NULL);
}

