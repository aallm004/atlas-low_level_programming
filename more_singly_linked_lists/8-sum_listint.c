#include "lists.h"

/**
 * sum_listint - function returns sum of all data(n) of list
 *
 * @head: first element
 *
 * Return: sum, 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
	sum += head->n;
	head = head->next;
	}
	return (sum);
}
