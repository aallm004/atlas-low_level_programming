#include "lists.h"

/**
 * add_node - adds a new node at the beginning of list_t
 *
 * @head: top of list
 * @str: string to be added
 *
 * Return: address of new element, NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(head));

	if (new_node == NULL)
		return (NULL);

	new_node->str = malloc(_strlenconst(str) + 1);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	_strcpyconst(new_node->str, str);
	new_node->next = *head;
	new_node->len = _strlenconst(str);

	*head = new_node;

	return (*head);

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
 * _strlenconst - returns the length of a string
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
