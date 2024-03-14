#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a list
 *
 * @h: head
 *
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int element_count = 0;

	if (h == NULL)
		return (element_count);

	while (h)
	{
		printf("%d\n", h->n);
		element_count++;
		h = h->next;
	}
	return (element_count);
}
