#include "hash_tables.h"

/**
 * hash_table_get - Function to retrieve a value associated with a key
 * @ht: Hash table to look into
 * @key: Key we are looking for
 * Return: Returns the value associated with the element
 *	or NULL if key cannot be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *copy = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	copy = ht->array[index];

	while (copy)
	{
		if (strcmp(copy->key, key) == 0)
		{
			return (copy->value);
		}
		copy = copy->next;
	}
	return (NULL);
}
