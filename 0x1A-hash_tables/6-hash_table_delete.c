#include "hash_tables.h"
/**
 * hash_table_delete - delete a key from a hash table
 * @ht: hash table
 * @key: key to delete
 * Return: 1 if key was deleted, 0 if key was not found
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *active_node, *free_node;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		active_node = ht->array[i];
		while (active_node != NULL)
		{
			free_node = active_node;
			active_node = active_node->next;
			free(free_node->key);
			free(free_node->value);
			free(free_node);
		}
	}
	free(ht->array);
	free(ht);
}
