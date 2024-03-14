#include "lists.h"

/**
 * free_dlistint - function that frees a list
 *
 * @head: first node
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node;

	while (head)
	{
	temp_node = head;
	head = head->next;
	free(temp_node);
	}
}
