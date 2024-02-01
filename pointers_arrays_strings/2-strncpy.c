#include "main.h"
#include <stddef.h>

/**
 *
 * _strncpy - write a function that copies a string
 *
 * @dest : destination
 * @src : string
 * @n : end
 *
 * Return : Always 0.
 */
 
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; src[a] != '\0' && a < n; a++)
	{
		dest[a] = src[a];
	}
	for(; a < n; a++)

	dest[a] = '\0';

	return (dest);
}
	

	
