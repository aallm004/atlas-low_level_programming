#include "lists.h"
/**
 * add_node_end - add new node at end of a list_t list
 *
 *@head: top of list
 *@str: string to be added
 *
 * Return: address of new element, NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	list_t *temp_node;

	if (head == NULL)
		return (NULL);

	new_node  = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = malloc(_strlenconst(str) + 1);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	_strcpyconst(new_node->str, str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
	temp_node = *head;
		while (temp_node->next)
		{
			temp_node = temp_node->next;
		}

	temp_node->next = new_node;
	}
	return (new_node);
}

/**
 * _strcpyconst - Copies the string pointed by src to dest
 * @dest: dest buff
 * @src: source
 *
 * Return: Pointer to the dest buff
 */

char *_strcpyconst(char *dest, const char *src)
{
	int len;

	for (len = 0; src[len] != '\0'; len++)
	{
		dest[len] = src[len];
	}

	dest[len] = '\0';

		return (dest);
}

/**
 * _strlen - returns the length of a string
 *
 * @s : int
 *
 * Return: the length of the string
 */

int _strlenconst(const char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}
