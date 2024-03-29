#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL, con
 */

char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	char *con;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	con = malloc((len1 + len2) + 1 * sizeof(char));
	if (con == NULL)
		return (NULL);

	con = _memset(con, '\0', (len1 + len2 + 1));

	con = _strcat(_strcat(con, s1), s2);

	return (con);
}


/**
 * _strcpy - Copies the string pointed by src to dest
 * @dest: dest buff
 * @src: source
 *
 * Return: Pointer to the dest buff
 */

char *_strcpy(char *dest, char *src)
{
	int len;

	for (len = 0; src[len] != '\0'; len++)
	{
		dest[len] = src[len];
	}

	dest[len] = '\0';

		return (dest);
}

/**
 * _strcat - write a function that concatenates two stings
 * @dest : destination
 * @src : string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
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
 * _memset- function that fills memory with a constant byte
 *
 *@n : int
 *@b : byte
 *@s : pointer
 *
 * Return: pointer to @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
