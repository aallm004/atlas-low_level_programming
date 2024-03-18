#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table
 *
 * Return: nothing
*/

void hash_table_delete(hash_table_t *ht)
{
hash_node_t *element;
hash_node_t *temp_bot;
unsigned long int index = 0;

	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			element = ht->array[index];

			while (element)
			{
				temp_bot = element;
				element = element->next;
				free(temp_bot->key);
				free(temp_bot->value);
				free(temp_bot);
			}
		}
		index++;
	}
	free(*ht);
}
