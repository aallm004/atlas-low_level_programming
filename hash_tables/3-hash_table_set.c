#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: pointer to table
 * @key: ze key
 * @value: value
 *
 *Return: 1 if success, 0 if fail
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *element;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		element = ht->array[index];
		while (element)
		{
			if (strcmp(element->key, key) == 0)
			{
				free(element->value);
				element->value = strdup(value);
				return (1);
			}
			element = element->next;
		}
	}

	element = malloc(sizeof(hash_node_t));
	if (element == NULL)
		return (0);

	element->key = strdup(key);
	element->value = strdup(value);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = element;
		element->next = NULL;
	}
	else
	{
		element->next = ht->array[index];
		ht->array[index] = element;
	}

	return (1);
}
