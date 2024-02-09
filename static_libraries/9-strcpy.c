#include "main.h"
#include <string.h>
/**
 * _strcpy - Copies the string pointed by src to dest
 * @dest: dest buff
 * @src: source
 *
 * Return: Pointer to the dest buff
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
