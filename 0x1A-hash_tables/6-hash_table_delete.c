#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp_node;
	unsigned long int i;

	if (ht == NULL)
		exit(EXIT_FAILURE);

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
		{
			continue;
		}
		else
		{
			if (ht->array[i]->next == NULL)
			{
				free_node(ht->array[i]);
			}
			else
			{
				while (ht->array[i] != NULL)
				{
					temp_node = ht->array[i];
					ht->array[i] = ht->array[i]->next;
					free_node(temp_node);
				}
			}
		}
	}
	free(ht->array);
	free(ht);
}

/**
 * free_node - frees a node
 * @head: node to free
 * Return: void
 */

void free_node(hash_node_t *head)
{
	free(head->value);
	free(head->key);
	free(head);
}