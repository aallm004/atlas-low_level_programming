#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - function that returns num of elements in lined list.
 *
 *@h: pointer
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int element_count = 0;

	if (h == NULL)
		return (element_count);

	while (h)
	{
		if (h->str != NULL)
		element_count++;
		h = h->next;
	}
	return (element_count);
}
