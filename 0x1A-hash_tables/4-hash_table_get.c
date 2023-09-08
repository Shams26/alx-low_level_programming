#include "hash_tables.h"

/**
 * hash_table_get -gets values associeted with key
 * @ht: pointer to ht
 * @key: key to get
 *
 * Return:  gotten key, or NULL if key does not exit.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t  *cont;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	cont = ht->array[index];

	while (cont)
	{
		if (!strcmp(key, cont->key))
			return (cont->value);
		cont = cont->next;
	}
	return (NULL);
}
