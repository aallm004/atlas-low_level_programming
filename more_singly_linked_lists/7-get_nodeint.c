#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a list
 *
 * @head: first element
 * @index: index
 *
 * Return: nth node, NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (head);
}
