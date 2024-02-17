#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *_calloc - function that allocates memory for an array using malloc
 *@nmeb: how many you need
 *@size: number of elements
 */

void *_calloc(unsigned int nmeb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmeb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmeb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmeb * size); i++)
		return (ptr);
}
