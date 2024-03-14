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
	dlistint_t *head last = temp_node;

	new_node->n = n;
	new_node->next = NULL;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->next = *temp_node;
	new_node->prev = NULL;

	if ((*temp_node) != NULL)
	(*temp_node)->prev = new_node;

	(*temp_node) = new_node;
}

