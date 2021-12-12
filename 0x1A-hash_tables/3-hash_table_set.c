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
	unsigned long int index;
	hash_node_t *new_node;
	hash_node_t *temp;

	if (!ht || !key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = _strdup(key);
	new_node->value = _strdup(value);
	new_node->next = NULL;
	if (!new_node->key || !new_node->value)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	if (!ht->array[index])
	{
		ht->array[index] = new_node;
		return (1);
	}
	temp = ht->array[index];
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	return (1);
}

char _strdup(char *str)
{
	int len = _strlen(str);
	char *dupstr = malloc((len) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	if (dupstr == NULL)
	{
		return (NULL);
	}
	else
	{
		dupstr = (char *) _memcpy(dupstr, str, len);
	}
	return (dupstr);
}

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (i = 0; i < n; i++)
	{
		cdest[i] = csrc[i];
	}
	return (dest);
}
