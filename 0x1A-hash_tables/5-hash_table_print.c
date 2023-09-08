#include "hash_tables.h"

/**
 * hash_table_print prints the key from ht
 * @ht: pointer to ht
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t  *cont;
	int non = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		cont = ht->array[i];
		while (cont)
		{
			if (non)
				printf(", ");
			printf("'%s': '%s'", cont->key, cont->value);
			non = 1;
			cont = cont->next;
		}
	}
	printf("}\n");
}
