#include "hash_tables.h"

/**
 * hash_table_print - Function to print a table
 * @ht: Hash table to print
 * void function
 */
void hash_table_print(const hash_table_t *ht)
{
	int i;
	hash_node_t *copier = NULL;

	for (i = 0; i < ht->size; i++)
	{
		copier = ht->array[i];
		if (copier == NULL)
			continue;
		else
			printf("%s: %s", copier->key, copier->value);
	}
}
