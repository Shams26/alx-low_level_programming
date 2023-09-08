#include "hash_tables.h"

/**
 * key_index - gets an index for a given key using djb2
 * @key: key str(hash)
 * @size: size of ht
 *
 * Return: key index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
