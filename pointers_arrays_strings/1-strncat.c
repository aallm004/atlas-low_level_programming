#include "main.h"

/**
 * _strncat - write a function that concatenates two stings
 * @dest : destination
 * @src : string
 * @n : 
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, in n)
{
	int a = 0, b = 0;

	while (*dest)
	{
		dest++;
		a++;
	}

	while (*src)
	{
		*dest = *src;
		dest++;
		a++;
		src++;
		b++;
	}
	*dest = '\0';
	dest = (dest - a);

	return (dest);
}
