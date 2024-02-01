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
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
}
	

	
