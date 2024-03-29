#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creating things
 *
 * @size: size
 * @c: H
 *
 * Return: NULL array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
		if (array == 0)
			return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
