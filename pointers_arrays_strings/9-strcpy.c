#include "main.h"
#include <string.h>

/**
 * _strcpy - f that copies the s pointed by src
 */

char *_strcpr(char *dest, char *src)
{
	int i, n;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = '\0';
	}

		return dest;
}
