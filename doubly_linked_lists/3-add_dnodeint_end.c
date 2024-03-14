#include "lists.h"
/**
 * add_dnodeint_end - function that adds new node at end of list
 *
 * @head: start of list
 * @n: holds data
 *
 * Return: address of new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *temp_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = new_node->prev = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		temp_node = *head;
		while (temp_node->next)
			temp_node = temp_node->next;

		temp_node->next = new_node;
		new_node->prev = temp_node;

	}
	return (new_node);
}
