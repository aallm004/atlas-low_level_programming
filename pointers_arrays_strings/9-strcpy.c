#include "main.h"
#include <string.h>
/**
 * _strcpy - f that copies the s pointed by src
 */

char *_strcpr(char *dest, char *src)
{
	int i, len;

	for (len = 0; src[len] != '\0'; len++)
	{
		dest[len] = src[len];
	}

	dest[len] = '\0';

		return (dest);
}
