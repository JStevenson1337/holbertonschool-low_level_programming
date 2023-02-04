#include"hash_table.h"
/**
 *
 *arrary[ [ [ ] ] [ [ ] ] ]
 *
 *
 */
shash_table_t *shash_table_create(unsigned long int size);
{
	const size_t **arr;
	shhash_table_t *shash;
	shash_node_t *shead;

	shead, shash = NULL;

	while ( **array)
	{
		shead = *(*array[0] -> *shash -> (char)key);

		printf("array: %lu\n", *array);
		printf("shead: %lu\n", *shead);
		printf("array: %lu\n", *shash);
		printf("array: %c\n", *(char)key);
	}
		

	
	return (0);


}

/* shead: %li 
			shash: %lu key: %s\n", *(*array[0]),
			shead, shash, hash->key); */

int main(void)
{
	shash_table_t *ht;

	ht = shash_table_create(1024);

	return (0);
}