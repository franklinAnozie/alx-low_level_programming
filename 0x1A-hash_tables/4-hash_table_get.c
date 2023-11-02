#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key to look for
 *
 * Return: value associated with the element, or NULL if key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	if (strcmp(ht->array[index]->key, key) != 0)
	{
		while (ht->array[index] != NULL)
		{
			if (strcmp(ht->array[index]->key, key) == 0)
			{
				value = ht->array[index]->value;
				break;
			}
			ht->array[index] = ht->array[index]->next;
		}
	}
	else
	{
		value = ht->array[index]->value;
	}

	return (value);
}
