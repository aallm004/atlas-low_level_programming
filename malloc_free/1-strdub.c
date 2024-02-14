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
	int len = _strlen(str)



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
