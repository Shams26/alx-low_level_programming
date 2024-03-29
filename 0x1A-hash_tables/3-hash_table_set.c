#include "hash_tables.h"

/**
 * hash_table_set - AAdds an element to ht
 * @ht: pointer to  ht
 * @key: key to add the element
 * @value: value of element
 *
 * Return: 1 on success, 0, if else
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *valuecopy, *keycopy;
	hash_node_t  *cont, *new_node;

	if (!ht || !key || !*key || !value)
		return (0);

	valuecopy = strdup(value);
	if (!valuecopy)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	cont = ht->array[index];

	while (cont)
	{
		if (!strcmp(key, cont->key))
		{
			free(cont->value);
			cont->value = valuecopy;
			return (1);
		}
		cont = cont->next;
	}
	new_node = calloc(1, sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(valuecopy);
		return (0);
	}
	keycopy = strdup(key);
	if (!keycopy)
		return (0);
	new_node->key = keycopy;
	new_node->value = valuecopy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
