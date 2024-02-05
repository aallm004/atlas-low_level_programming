#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string
 *
 *@c: character
 *@s: string
 *Return: s, '\0'
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i=0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)i
		{
		return (s+i);
		}
	}
	return ('\0');
}
