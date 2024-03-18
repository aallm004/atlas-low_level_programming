#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key
 *@: ht: hash table
 *@: key: ze key
 *
 * Return: value associated w element of NULL
 * 
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *element;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index(key, ht->size);

	if (ht->array[index] != NULL)
		element = ht->array[index];
	
	while (element)
	{
		if (strcmp(element->key, key) == 0)
			return (element->value);

		element = element->next;
	}
	return (NULL);
}
