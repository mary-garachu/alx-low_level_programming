#include "hash_tables.h"

/**
 * key_index - Calculates the index for a given key
 * @key: The key string
 * @size: The size of the hash table array
 * Return: The index at which the key should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (key == NULL || size == 0)
	{
		return (0);
	}
	hash = hash_djb2(key);
	return (hash % size);
}
