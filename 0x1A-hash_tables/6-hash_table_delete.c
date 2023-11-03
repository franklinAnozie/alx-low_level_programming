#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp_node, *next;
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

			if (ht->array[i]->next != NULL)
			{
				temp_node = ht->array[i];
				while (temp_node != NULL)
				{
					next = temp_node->next;
					free_node(temp_node);
					temp_node = next;
				}
			}
			else
			{
				free_node(ht->array[i]);
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
