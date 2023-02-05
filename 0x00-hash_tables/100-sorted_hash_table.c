#include"hash_table.h"
/**
 * shash_table_create - Create a hash table
 *
 * @size: Size of the array
 * Return: Pointer to the hash table or NULL on fail
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_tbl;
	shash_node_t *shead;
	int i =0;

	hash_tbl = NULL;

	if ((hash_tbl = malloc(sizeof(shash_table_t))) == NULL)
		return (NULL);

	if ((hash_tbl -> array = malloc(sizeof(shash_table_t) * size)) == NULL)
		return (NULL);

	for (; i < size; i++)
	{
		hash_tbl -> array[i] = NULL;
	hash_tbl -> size = size;

	return (hash_tbl);
	}

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t curr;
	
	while (ht && array)
	{

	}

}


	return (0);
}

int main(void)
{
	shash_table_t *ht;

	ht = shash_table_create(1024);

	return (0);
}