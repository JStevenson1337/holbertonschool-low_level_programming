#include "hash_tables.h"
/**
 * hash_table_delete - delete a key from a hash table
 * @ht: hash table
 * @key: key to delete
 * Return: 1 if key was deleted, 0 if key was not found
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp;
	hash_node_t *prev;

	if (ht == NULL || ht->size == 0)
		return;
	index = key_index((const unsigned char *)ht->array, ht->size);
	temp = ht->array[index];
	prev = NULL;
	while (temp != NULL)
	{
		if (strcmp(temp->key, (const char*)(ht->array[index])) == 0)
		{
			if (prev == NULL)
				ht->array[index] = temp->next;
			else
				prev->next = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			ht->size--;
			return;
		}
		prev = temp;
		temp = temp->next;
	}

}
