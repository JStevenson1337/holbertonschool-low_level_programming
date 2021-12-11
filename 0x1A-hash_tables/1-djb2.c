#include "hash_tables.h"
/**
 * djb2 - hash function
 * @str: string to hash
 * Return: hash
 * @return unsigned long int 
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return hash;
}
