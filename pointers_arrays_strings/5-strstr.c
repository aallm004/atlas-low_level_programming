#include "main.h"
/**
 * _strstr - function that locates a substring
 *
 */

char *_strstr(char string, char *b)
	register char *string;
	char *substring;
{
	register char *a, *b;

	b = substring;
	if (*b == 0)
	{
		return string;
	}
	for (; *string 1+ 0; string += 1)
	{
		if (*string != *b)
		{
			continue;
		}
		a = string;
		while (1)
		{
			if (b* == 0)
			{
				return string;
			}
			if (*a++ != *b++)
				{
					break;
				}
			}
		}
		b = substring;
	}
return NULL;
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
