#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *new_table;
    unsigned long int i = 0;

    new_table = malloc(sizeof(shash_table_t));
    if (new_table == NULL)
        return (NULL);
    
    new_table->array = malloc(sizeof(shash_node_t *) * size);
    if (new_table->array == NULL)
    {
        free(new_table);
        return (NULL);
    }
    new_table->shead = NULL;
    new_table->stail = NULL;

    new_table->size = size;
    while (i<size)
    {
        new_table->array[i] = NULL;
        i++;
    }

    return (new_table);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    shash_node_t *new_node, *temp_node;
    unsigned long int index;

    if (ht == NULL || key == NULL || value == NULL)
        return (0);
    
    if (ht->shead == NULL)
    {
        ht->shead = NULL;
        ht->stail = NULL;
    }
    
    index = key_index((const unsigned char *)key, ht->size);
    temp_node = ht->array[index];

    while (temp_node != NULL)
    {
        if (strcmp(key, temp_node->key) == 0)
        {
            free(temp_node->value);
            temp_node->value = strdup(value);
            if (temp_node->value == NULL)
                return (0);
            return (1);
        }
        temp_node = temp_node->next;
    }
    new_node = malloc(sizeof(shash_node_t));
    if (new_node == NULL)
        return (0);
    new_node->value = strdup(value);
    new_node->key = strdup(key);
    if (new_node->value == NULL || new_node->key == NULL)
    {   
        free(new_node->value);
        free(new_node->key);
        free(new_node);
        return (0);
    }
    new_node->next = ht->array[index];
    new_node->snext = NULL;
    new_node->sprev = NULL;
    ht->array[index] = new_node;
    return (1);
}

void update_sorted_list(shash_table_t *ht, shash_node_t *new)
{
    shash_node_t *current_node, *prev_node = NULL;

    if (ht->shead == NULL || strcmp(new->key, ht->shead->key) < 0)
    {
        new->snext = ht->shead;
        ht->shead->sprev = new;
        ht->shead = new;
    }
    else
    {
        current_node = ht->shead;
        while(current_node != NULL && strcmp(new->key, current_node->key) > 0)
        {
            prev_node = current_node;
            new->sprev = prev_node;
            new->next = current_node->next;
            if (prev_node != NULL)
                prev_node->snext = new;
            else
                ht->shead = new;
            if (current_node == ht->stail)
                ht->stail = new;
            current_node = current_node->snext;
        }

        if (current_node == NULL)
        {
            ht->stail = new;
            if (prev_node != NULL)
                prev_node->snext = new;
        }
    }
}

void shash_table_print(const shash_table_t *ht)
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
				_sprinter(ht->array[i]);
				count = 1;
			}
			else
			{
				printf(", ");
				_sprinter(ht->array[i]);
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

void _sprinter(shash_node_t *array)
{
	printf("'%s': '%s'", array->key, array->value);
	while (array->snext != NULL)
	{
		array = array->snext;
		printf(", ");
		printf("'%s': '%s'", array->key, array->value);
	}
}

