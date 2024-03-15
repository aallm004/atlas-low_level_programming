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
        temp_node->prev->next = new_node;
        new_node->prev = temp_node->prev;
        new_node->next = temp_node;
        temp_node->prev = new_node;
        
        return (new_node);
    }

    return (NULL);
}
