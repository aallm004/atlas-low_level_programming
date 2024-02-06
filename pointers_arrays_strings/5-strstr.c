#include "main.h"
/**
 * _strstr - function that locates a substring
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int x;
	int i;
	char *p

	i = 0;
	p = 0;
	if (needle[0] == '\0')
	{
		return (haystack);
	}
	for (x = 0; haystack[x] != '\0'; x++)
	{
		if (haystack[x] == needle[j])

			if (needle[i + 1] == 0)
			{
				p = &haystack[x - i];
				return (p);
			}
			j++;
		}
	}
	return (p);
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
