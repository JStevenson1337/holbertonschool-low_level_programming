#include "hash_tables.h"
/**
 * hash_table_create - create hash table
 * @size table size
 * @return hash_table_t* 
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **temp;
	unsigned long i = 0;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	temp = table->array;
	while (i < size)
	{
		*temp = NULL;
		temp++;
		i++;
	}
	return (table);
}
