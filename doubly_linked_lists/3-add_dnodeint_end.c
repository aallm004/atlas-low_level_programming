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
	linstint_t *new_node = NULL;
	listint_t *temp_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node-> = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		temp_node = *head;
		while (temp_node->next != NULL)
				temp_node = temp_node->next;

				temp_node->next = new_node;
				new_node->prev = temp_node;

	}
	return (new_node)
}

