#include "main.h"
#include <string.h>
/**
 * _strcpy - f that copies the s pointed by src
 * @dest: dest buff
 * @src: source
 * @len: length
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
