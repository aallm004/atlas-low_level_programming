#include "main.h"

/**
 * _strncat - write a function that concatenates two stings
 * @dest : destination
 * @src : string
 * @n : 
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int n = 0, b = 0;

	while (*dest)
	{
		dest++;
		a++;
		n++;
	}

	while (*src)
	{
		*dest = *src;
		dest++;
		a++;
		n++;
		src++;
	}
	dest = (dest - n);

	return (dest);
}
