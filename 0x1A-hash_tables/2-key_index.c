#include "hash_tables.h"

/**
 * key_index - generate the index of a key
 *
 * @key: the key
 * @size: the size of the array of the hash table
 *
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value, index;

	hash_value = hash_djb2((unsigned char *)key);
	index = hash_value % size;

	return (index);
}
