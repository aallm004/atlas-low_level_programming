#include "main.h"

/**
 * _strcat - write a function that concatenates two stings
 * @dest : destination
 * @src : string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}
