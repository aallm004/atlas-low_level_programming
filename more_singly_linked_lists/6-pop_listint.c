#include "lists.h"
/**
 * pop_listint - function deletes head node of list
 *
 * @head: first element
 *
 * Return: head of node's data, 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int n;

	if (head == NULL)
	return (0);

	if (*head)
	{
		temp_node = *head;
		n = temp_node->n;
		*head = temp_node->next;
		free(temp_node);
	}
	return (n);
}
