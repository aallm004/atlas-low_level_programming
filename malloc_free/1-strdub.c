#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - a lot of things will happen
 *
 * @str: string
 *
 * Return: NULL str
 */

char *_strdub(char *str)
{
	int len = _strlen(str);
	int i;

	if (strlen == 0)
		return (NULL);

	str = malloc(_strlen * str);
		if (str == 0)
			return (NULL);

	for (i = 0; i < _strlen; i++)
		str[i]

}




/**
 * _strlen - returns the length of a string
 *
 * @s : int
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}

/**
 * _strncpy - write a function that copies a string
 *
 * @dest : destination
 * @src : string
 * @n : end
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; src[a] != '\0' && a < n; a++)
	{
		dest[a] = src[a];
	}
	for (; a < n; a++)

	dest[a] = '\0';

	return (dest);
}
