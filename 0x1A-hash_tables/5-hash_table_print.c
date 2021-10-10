#include "hash_tables.h"

/**
 * hash_table_print - Function to print a table
 * @ht: Hash table to print
 * void function
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, k = 0;
	hash_node_t *copier = NULL;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		copier = ht->array[i];
		while (copier)
		{
			if (k > 0)
				printf(", ");
			printf("'%s': '%s'", copier->key, copier->value);
			copier = copier->next;
			k++;
		}
	}
	printf("}\n");
}
