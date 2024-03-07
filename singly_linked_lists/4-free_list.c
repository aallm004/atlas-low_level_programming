#include "lists.h"

/**
 * free_list - function that frees a list_t list
 *
 * @head: top of list
 *
 *Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp_node;

	while(head)
	{
	temp_node = head;
	head = head->next;
	free(temp_node->str);
	free(temp_node);
	}
}
