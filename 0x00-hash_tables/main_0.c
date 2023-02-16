#include <stdlib.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	shash_table_t *ht;
	size_t i;

	ht = shash_table_create(2048);
	if (!ht || ht->size != 2048 || !ht->array)
		return (EXIT_FAILURE);
	/*Loop through the array, should not SEGV*/
	for (i = 0; i < 2048 && ht->array[i]; ++i);
	return (EXIT_SUCCESS);
}