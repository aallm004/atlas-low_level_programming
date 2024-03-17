#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: pointer to table
 * @key: ze key
 * @value: value
 *
 * Return: 1 if success, 0 if fail
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *element;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	element = malloc(sizeof(hash_node_t));
	if (element == NULL)
		return (0);

	element->key = malloc(strlen(key) + 1);
	if (element->key == NULL)
	{
		free(element);
		return (0);
	}

	element->value = malloc(strlen(value) + 1);
	if (element->value == NULL)
	{
		free(element->key);
		free(element);
		return (0);
	}

	memcpy(element->key, key, strlen(key) + 1);
	memcpy(element->value, value, strlen(value) + 1);

	index = key_index((const unsigned char *)element->key, ht->size);
	if (ht->array[index] == NULL)
		(ht->array[index] = element);
	else
	{
		element->next = ht->array[index];
		ht->array[index] = element;
	}

	return (1);
}
