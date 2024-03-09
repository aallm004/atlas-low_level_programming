#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts new node at a given position
 * @head: first element
 * @idx: unsigned int
 * @n: int
 *
 * Return: NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int pos = 0;
	listint_t *temp_node = *head;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	while (pos < (idx - 1) && temp_node != NULL)
	{
		temp_node = temp_node->next;
		pos++;
	}

	if (pos == (idx - 1))
	{
		new_node->next = temp_node->next;
		temp_node->next = new_node;
		return (new_node);
	}

	return (NULL);
}
