#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list- function that prints all the elements of a list_t list.
 * @h: pointer
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int element_count = 0;

	if (h == NULL)
		return (element_count);

	while (h)
	{
	printf("%d %s", h->len, h->str);
	element_count++;
	h = h->next;
	}

	printf("-> %d elements", element_count);
	return (element_count);
}
