#include "hash_tables.h"
/**
 * hash_table_set - sets the value of a key in a hash table
 * @ht: hash table
 * @key: key to set
 * @value: value to set
 * Return: 1 if success, 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL, *prev, *temp;
	unsigned long int i;

	if (key == NULL || value == NULL || strlen(key) < 1 || ht == NULL)
	{
		return (0);
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		return (0);
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	i = key_index((const unsigned char *)key, ht->size);
	if (ht->array[i] == NULL)
	{
		ht->array[i] = new;
		return (1);
	}
	prev = ht->array[i];
	temp = prev;
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		prev = temp;
		temp = temp->next;
	}
	return (1);
}
