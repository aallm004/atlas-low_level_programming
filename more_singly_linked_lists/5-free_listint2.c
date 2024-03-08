#include "lists.h"
/**
 * free_listint2 - function that frees a list
 *@head: head of list
 *
 * Return: nothing
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_node = NULL;

	while (*head != NULL && head != NULL)
	{
	temp_node = *head;
	*head = (*head)->next;
	free(temp_node);
	}
}
