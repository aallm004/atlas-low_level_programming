#include "lists.h"

/**
 * free_listint - frees a list
 *
 *@head: start
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while (head)
	{
	temp_node = head;
	head = head->next;
	free(temp_node->n)
	free(temp_node);
	}
}
