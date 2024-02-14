#include <stdio.h>
#include "main.h"
/**
 * create_array - function that creates an array of chars and init w specific char
 *
 * Return:
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *array;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	for (i=0; i < size; i+++

		s[i] = c;

	return (s)
}
