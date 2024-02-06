#include "main.h"
/**
 * _strstr - function that locates a substring
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int x;
	int i;
	char *p;

	i = 0;
	p = 0;
	if (needle[0] == '\0')
	{
		return (haystack);
	}
	for (x = 0; haystack[x] != '\0'; x++)
	{
		if (haystack[x] == needle[i])

			if (needle[i + 1] == '\0')
			{
				p = &haystack[x - i];
				return (p);
			}
			i++;
		}
	return (p);
}
