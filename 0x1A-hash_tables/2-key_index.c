#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in a hash table.
 * @key: The key string.
 * @size: The size of the array in the hash table.
 *
 * Return: The index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	if (key == NULL || size == 0)
		return (0);
	/* Use the hash_djb2 function to get the hash value for the key */

	hash_value = hash_djb2(key);

	/* Calculate the index where the key should be stored in the array */

	return (hash_value % size);
}
