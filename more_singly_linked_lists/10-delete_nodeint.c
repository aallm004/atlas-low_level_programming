#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of linked list
 *@head: first element
 *@index: space
 *
 * Return: 1, -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int pos = 0;
	listint_t *temp_node = *head;
	listint_t *del_node = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp_node);
		return (1);
	}

	while (pos < (index - 1) && (temp_node != NULL))
	{
		temp_node = temp_node->next;
		pos++;
	}

	if (pos == index - 1)
	{	
		del_node = temp_node->next;
		temp_node->next = del_node->next;
		free(del_node);
		return (1);
	}
	
	return (-1);
}
