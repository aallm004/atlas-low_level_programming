#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list
 *
 * @head: start of list
 * @index: where we are
 * 
 * Return: node or NULL
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count != index)
	{
	head = head->next;
	count++;
	}

	if (count == index)
		return (head);

	return (NULL);
}
