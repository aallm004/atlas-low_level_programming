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

	if (idx == 0)
		return (add_nodeint(head, n));
		
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	while (pos < (idx - 1) && (temp_node != NULL))
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

/**
 * add_nodeint - function adds new node at beginning of list
 * @head: top
 * @n: int
 *
 * Return: addrdss of new element, NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (*head);
}
