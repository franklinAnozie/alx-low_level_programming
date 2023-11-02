#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int count = 0;

	if (ht == NULL)
	{
		exit(EXIT_FAILURE);
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		else
		{
			if (count == 0)
			{
				_printer(ht->array[i]);
				count = 1;
			}
			else
			{
				printf(", ");
				_printer(ht->array[i]);
			}
		}
	}
	printf("}\n");
}

/**
 * _printer - prints a hash table
 * @array: hash table to print
 * Return: void
 */

void _printer(hash_node_t *array)
{
	printf("'%s': '%s'", array->key, array->value);
	while (array->next != NULL)
	{
		array = array->next;
		printf(", ");
		printf("'%s': '%s'", array->key, array->value);
	}
}
