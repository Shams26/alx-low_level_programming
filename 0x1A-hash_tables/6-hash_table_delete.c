#include "hash_tables.h"

/**
 * hash_table_delete - frees ht
 * @ht: pointer to ht
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *cont, *sec_free;
	unsigned long int i = 0;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		cont = ht->array[i];
		while (cont)
		{
			sec_free = cont;
			cont = cont->next;
			if (sec_free->key)
				free(sec_free->key);
			if (sec_free->value)
				free(sec_free->value);
			free(sec_free);
		}
	}
	free(ht->array);
	free(ht);
}
