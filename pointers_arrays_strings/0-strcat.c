#include "main.h"

/**
 * _strcat - write a function that concatenates two stings
 * dest: destination
 * src: string
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	
	for (b = 0; src[b] != '\0'; b++)

	{
	dest[a+b] = src;
	}

	return (dest);
}
