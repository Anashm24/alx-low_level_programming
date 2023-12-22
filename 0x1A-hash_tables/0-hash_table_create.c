#include "hash_tables.h"

/**
* hash_table_create - creates a new hash table of a given size
*
* @size: The size of the hash table to be created
*
* Return: A pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table != NULL)
	{
		table->size = size;
		table->array = calloc(table->size, sizeof(hash_node_t *));
		if (table->array == NULL)
		{
			free(table);
			return (NULL);
		}
	}
	return (table);
}
