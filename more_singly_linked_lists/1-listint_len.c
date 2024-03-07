#include "lists.h"

/**
 * listint_len - func that returns numb of elements in linked list
 *
 *@h: pointer
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
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
