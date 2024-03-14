#include "lists.h"
/**
 * sum-dlistint - function that returns the sum of all data in list
 * 
 * @head: start of function
 * 
 * Return: 0 or sum of list
*/

int sum_dlistint(dlistint_t *head)
{
    int sum = 0;

    while (head)
    {
        sum += head->n;
        head = head->next;
    }
    return (sum);
}
