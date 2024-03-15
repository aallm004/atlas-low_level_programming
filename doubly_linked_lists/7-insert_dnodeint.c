#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts new node at given position
 * 
 * @h: pointer
 * @idx: index
 * @n: int
 * 
 * Return: address of new node, NULL
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    unsigned int pos = 0;
    dlistint_t *temp_node = *h;
    dlistint_t *new_node;

    if (idx == dlistint_len(*h))
        return (add_dnodeint_end(h, n));

    if (idx == 0)
        return (add_dnodeint(h, n));

    new_node = malloc(sizeof(dlistint_t));
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
        new_node->prev = temp_node;
	new_node->next = temp_node->next;
	temp_node->next->prev = new_node;
	temp_node->next = new_node;
        return (new_node);
    }

    return (NULL);
}

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
