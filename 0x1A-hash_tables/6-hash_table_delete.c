#include "hash_tables.h"
/**
 * hash_table_delete - delete a key from a hash table
 * @ht: hash table
 * @key: key to delete
 * Return: 1 if key was deleted, 0 if key was not found
 */
void hash_table_delete(hash_table_t *ht)
{
	if (!ht)
		return;

	while (ht->size > 0)
	{
		free(ht->array[ht->size]->key);
		free(ht->array[ht->size]->value);
		ht->size--;
	}
	free(ht->array);
	free(ht);
	
}
