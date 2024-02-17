#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - function that concatenates two strings\
 *
 * @s1: character pointer
 * @s2: character pointer
 * @n: unsigned int
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1;
	int len2;
	int *con;


	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	con = malloc(len1 + _fmin(len2, n) + 1 * sizeof(char));
	if (con == NULL)
		return (NULL);

	con = _strcat(con, s1);
	con = _strncat(con, s2, n);

	return (con);
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
 * _strncat - write a function that concatenates two stings
 * @dest : destination
 * @src : string
 * @n : end
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;

	while (*dest)
	{
		dest++;
		a++;
	}

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		a++;
		src++;
		n--;
		if (n == 0)
		{
		break;
		}
	}

	dest = (dest - a);

	return (dest);
}

/**
 * _fmin - find the minimum number
 *
 * @a: int
 * @b: int
 *
 * Return: low number
 *
 */

int _fmin(int a, int b)
{
	if (a < b)
		return (a);

	return (b);
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
