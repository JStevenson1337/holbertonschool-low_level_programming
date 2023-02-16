#include"hash_table.h"



unsigned long int key_index(const unsigned char *key, unsigned long int size);
/**
 * shash_table_create - Create a hash table
 *
 * @size: Size of the array
 * Return: Pointer to the hash table or NULL on fail
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = NULL;
	unsigned long int i;

	if (!size)
	{
		free(table);
		return (NULL);
	}
	if ((table = malloc(sizeof(shash_table_t))) == NULL)
	{
		free(table);
		return (NULL);
	}
	if ((table -> array = malloc(sizeof(shash_table_t) * size)) == NULL)
	{
		free(table);
		return (NULL);
	}

	table -> shead = NULL;
	table -> stail = NULL;
	for (i = 0; i < size; i++)
	{
		table -> array[i] = NULL;
	}
	return (table);
}

/**
 * hash_table_set - sets the value of a key in a hash table
 * @ht: hash table
 * @key: key to set
 * @value: value to set
 * Return: 1 if success, 0 if failed
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new , *prev, *temp;
	unsigned long int i;

	if (key == NULL || value == NULL || strlen(key) < 1 || ht == NULL)
	{
		return (0);
	}
	new = malloc(sizeof(shash_node_t));
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


char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);

}

void shash_table_print_rev(const shash_table_t *ht)
{
	int flat = 0;
	shash_node_t *tmp = NULL;

	if (ht == NULL)
		return;

	if (ht->stail)
	{
		tmp = ht->stail;

		printf("{");
		while (tmp->sprev != NULL)
		{
			if (flat > 0)
				printf(",");
			printf("'%s' : '%s'", tmp->key, tmp->value);
			flat++;
			tmp = tmp->sprev;
		}
		printf(", '%s' : '%s'", tmp->key, tmp->value);
		printf("}\n");
	}

}
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp = NULL, *del = NULL;

	tmp = ht->shead;

	while (tmp != NULL)
	{
		del = tmp;
		tmp = tmp->snext;
		free(del->key);
		free(del->value);
		free(del);
	}
	free(ht->array);
	free(ht);
}




void shash_table_print(const shash_table_t *ht)
{
	int flat = 0;
	shash_node_t *tmp = NULL;

	if (ht == NULL)
		return;

	if (ht->shead)
	{
		tmp = ht->shead;

		printf("{");
		while (tmp)
		{
			if (flat > 0)
				printf(", ");
			printf("'%s' : '%s'", tmp->key, tmp->value);
			flat++;
			tmp = tmp->snext;
		}
		printf("}\n");
	}
}
