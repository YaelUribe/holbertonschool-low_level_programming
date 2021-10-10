#include "hash_tables.h"

/**
 * hash_table_set - Function to fill elements in a hash table
 * @ht: given hasth table
 * @key: Given key to work as index in our hash table
 * @value: Value to store in our new node
 *
 * Return: returns 1 if succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	unsigned long int index = 0;
	char *dkey = NULL, *dvalue = NULL;
	hash_node_t *nu_node = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	dkey = strdup(key);
	dvalue = strdup(value);
	index = key_index((unsigned char *)key, ht->size);
	nu_node = ht->array[index];
/*
*With this in case the spot is already taken/if info and dkey is the same,
* link it to the end like a linked list
*/
	while (nu_node)
	{
		if (strcmp(nu_node->key, key) == 0)
		{
			nu_node->value = dvalue;
			return (1);
		}
		nu_node = nu_node->next;
	}

	nu_node = malloc(sizeof(hash_node_t));
	if (nu_node == NULL)
		return (0);
	nu_node->key = dkey;
	nu_node->value = dvalue;
	nu_node->next = ht->array[index];
	ht->array[index] = nu_node;
	return (1);

}
