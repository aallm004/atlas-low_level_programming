#include "lists.h"

/**
*delete_dnodeint_at_index - function that deletes the node at index
*@head: top of lists
*@index: where we are
*
*Return: 1 if success, -1 if failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int pos = 0;
	dlistint_t *temp_node = *head;

	if (*head == NULL)
			return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp_node);
		return (1);
	}

	while ((pos != index) && (temp_node != NULL))
		{
			temp_node = temp_node->next;
			pos++;
		}

		if (pos == index)
		{
			if (temp_node->prev != NULL)
				temp_node->prev->next = temp_node->next;
			if (temp_node->next != NULL)
				temp_node->next->prev = temp_node->prev;
			free(temp_node);
			return (1);
		}
			return (-1);
}