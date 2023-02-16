#include"hash_table.h"
/**
 * shash_table_create - Create a hash table
 *
 * @size: Size of the array
 * Return: Pointer to the hash table or NULL on fail
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; ++i)
	{
		ht->array[i] = NULL;
	}
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
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
	unsigned long int index;
	char *new_value;
	shash_node_t *node, *temp;

	if (ht == NULL || key == NULL || *key == 48 || value == NULL)
		return (0);

	new_value = strdup(value);
	if (new_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (temp = ht->shead; temp != 0; temp = temp->snext)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = new_value;
			return (1);
		}
	}
	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
	{
		free(new_value);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(new_value);
		free(node);
		return (0);
	}
	node->value = new_value;
	node->next = ht->array[index];
	ht->array[index] = node;

	if (ht->shead == NULL)
	{
		node->sprev = NULL;
		node->snext = NULL;
		ht->shead = node;
		ht->stail = node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		node->sprev = NULL;
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
	}
	else
	{
		for(temp = ht->shead;
		    temp->snext != NULL && strcmp(temp->snext->key, key) < 0;
		temp = temp->snext);
		node->sprev = temp;
		node->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = node;
		else
			temp->snext->sprev = node;
		temp->snext = node;
	}
	return (1);
}
/**
 * shash_table_get - 
 *
 * @ht: pointer to the hash table
 * Return: Pointer to the hash table or NULL on fail
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *curr_node;

	if (ht == NULL || *key == 48 || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	for (curr_node = ht->shead;
	     curr_node != NULL && strcmp(curr_node->key, key) != 0;
	     curr_node = curr_node->snext)
		;
	if (curr_node == NULL)
	{
		return (NULL);
	}
	else
	{
		return (curr_node->value);
	}
}
/**
 * shash_table_print_rev 
 * @ht: pointer to the hash table
 * Return: Pointer to the hash table or NULL on fail
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *curr_node;

	if (ht == NULL)
		return;

	printf("{");
	for (curr_node = ht->shead; curr_node != NULL;
	     curr_node = curr_node->snext)
	{
		printf("'%s': '%s'", curr_node->key, curr_node->value);
		if (curr_node != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_delete - delete a hash table
 *
 * @ht: pointer to the hash table
 * Return: Pointer to the hash table or NULL on fail
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *temp;

	if (ht == NULL)
		return;

	for (node = ht->shead; node != 0; node = temp)
	{
		temp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
	}
	free(head->array);
	free(head);
}
/**
 * shash_table_print - Print a hash table
 *
 * @ht: pointer to the hash table
 * Return: Pointer to the hash table or NULL on fail
 */
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
