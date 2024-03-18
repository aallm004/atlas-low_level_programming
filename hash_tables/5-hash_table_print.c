#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 * 
 * Return: Hash Table
*/

void hash_table_print(const hash_table_t *ht)
{
unsigned long int index;
hash_node_t *element;
int i = 0;

if (ht)
{
	printf("{");
	for(index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			element = ht->array[index];

			while(element)
			{
				if (i == 1)
					printf(", ");
				printf("'%s': '%s'", element->key, element->value);
				element = element->next;
				i = 1;
			}
		}
	}
	printf("}\n");

}
}