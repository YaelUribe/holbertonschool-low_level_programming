#include "hash_tables.h"

/**
 * key_index - Function to retrieve the index of a key
 * @key: key solicitated (string)
 * @size: size of the array of the hash table
 *
 * Return: The index of the given key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (!size || !key)
		return (0);
	index = hash_djb2(key);
	return (index % size);
}
