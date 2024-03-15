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
 * dlistint_len - function that returns the number of elements in a lined list
 *
 * @h: head
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int element_count = 0;

	if (h == NULL)
		return (element_count);

	while (h)
	{
		element_count++;
		h = h->next;
	}
	return (element_count);
}
