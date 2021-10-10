#include "hash_tables.h"

/**
 * hash_table_delete - Function to erase a hash table
 *@ht: Given hash table to be deleted
 *Void function / can be checked with valgrind
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *deleter = NULL;
	unsigned long int parser;

	if (ht == NULL || ht->array == NULL || ht->size = 0)
		return;
	for (parser = 0; parser < ht->size, parser++)
	{
		while (ht->array[parser])
		{
			deleter = ht->array[parser]->next;
			free(ht->array[parser]->key);
			free(ht->array[parser]->value);
			free(ht->array[parser]);
			ht->array[parser] = deleter;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
