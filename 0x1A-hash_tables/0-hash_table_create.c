#include "hash_tables.h"
/**
 *hash_table_create - funtion to create a new hash table
 *@size: data to store in size
 *Return: Returns a pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *nhash_t = NULL;

	nhash_t = malloc(sizeof(hash_table_t));
	if (nhash_t == NULL)
		return (NULL);
	nhash_t->size = size;
	nhash_t->array = (hash_node_t **) malloc(sizeof(hash_node_t *));
	if (nhash_t->array == NULL)
	{
		free(nhash_t);
		return (NULL);
	}
	while (size--)
		nhash_t->array[size] = NULL;
	return (nhash_t);
}
