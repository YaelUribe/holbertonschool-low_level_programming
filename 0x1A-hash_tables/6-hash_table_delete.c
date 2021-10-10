#include "hash_tables.h"

/**
 * hash_table_delete - Function to erase a hash table
 *@ht: Given hash table to be deleted
 *Void function / can be checked with valgrind
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *deleter = NULL;

	deleter = ht;

	free(deleter->array);
	free(deleter);
}
