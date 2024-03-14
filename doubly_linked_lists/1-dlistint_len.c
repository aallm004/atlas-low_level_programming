#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a lined list
 *
 * @h: head
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int element_count = 0;

	if (h == NULL)
		return (element_count);

	while (h)
	{
		element_count++;
		h = h->next;
	}
	return (element_count);
}
