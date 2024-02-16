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

	con = malloc
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
