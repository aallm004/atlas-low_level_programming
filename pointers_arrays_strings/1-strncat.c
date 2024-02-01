#include "main.h"

/**
 * _strncat - write a function that concatenates two stings
 * @dest : destination
 * @src : string
 * @n : 
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, n = 0;

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
		n++;
	}
	*dest = '\0';
	dest = (dest - a);

	return (dest);
}
