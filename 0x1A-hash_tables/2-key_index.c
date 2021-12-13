#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = 0;
	unsigned long int i = 0;

	for (i = 0; i < size; i++)
	{
		hash += key[i];
	}

	return hash % size;
}
