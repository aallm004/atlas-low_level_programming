#include "main.h"

/**
 * _strcat - write a function that concatenates two stings
 * dest: destination
 * src: string
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while(dest[a] != '\0')
	{
		a++;
	}

	b = 0;
	while( src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';

	return (dest);
}
