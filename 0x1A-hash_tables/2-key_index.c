#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key
 * @size: size of the array of the hash table
 * Return: index at which the key/value pair should be stored in the array
 * of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int key_index;

	if (key == NULL || size == 0)
		exit(EXIT_FAILURE);

	hash = hash_djb2(key);
	if (hash == 0)
	{
		fprintf(stderr, "hash_djb2 failed\n");
		exit(EXIT_FAILURE);
	}

	key_index = hash % size;

	return (key_index);
}
