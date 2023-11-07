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
	while (i < size)
	{
		new_table->array[i] = NULL;
		i++;
	}
	return (new_table);
}

/**
 * shash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the key/value to
 * @key: key to add
 * @value: value associated with the key
 * Return: 1 if successful, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *temp_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp_node = ht->array[index];
	while (temp_node != NULL)
	{
		if (strcmp(temp_node->key, key) == 0)
		{
			free(temp_node->value);
			temp_node->value = strdup(value);
			return (1);
		}
		temp_node = temp_node->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	temp_node = new_node;
	u_s_l(ht, temp_node, index);
	set_head_tail(ht, new_node);
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key to look for
 * Return: value associated with the element, or NULL if key couldn't be found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
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
		value = ht->array[index]->value;
	return (value);
}

/**
 * shash_table_print - prints a hash table
 * @ht: hash table to print
 * Return: void
 */

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
 * _sprinter - prints a hash table
 * @array: hash table to print
 * Return: void
 */

void _sprinter(shash_node_t *array)
{
	printf("'%s': '%s'", array->key, array->value);
	while (array->next != NULL)
	{
		array = array->next;
		printf(", ");
		printf("'%s': '%s'", array->key, array->value);
	}
}

/**
 * shash_table_print_rev - prints a hash table in reverse
 * @ht: hash table to print
 * Return: void
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		exit(EXIT_FAILURE);
	printf("{");
	if (ht->shead != NULL && ht->stail != NULL)
	{
		printf("'%s': '%s'", ht->stail->key, ht->stail->value);
		current = ht->stail->sprev;
		while (current != NULL)
		{
			printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			current = current->sprev;
		}
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: hash table to delete
 * Return: void
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp_node, *next;
	unsigned long int i;

	if (ht == NULL)
		exit(EXIT_FAILURE);

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		else
		{
			if (ht->array[i]->next != NULL)
			{
				temp_node = ht->array[i];
				while (temp_node != NULL)
				{
					next = temp_node->next;
					sfree_node(temp_node);
					temp_node = next;
				}
			}
			else
				sfree_node(ht->array[i]);
		}
	}
	free(ht->array);
	free(ht);
}

/**
 * sfree_node - frees a node
 * @head: node to free
 * Return: void
 */

void sfree_node(shash_node_t *head)
{
	free(head->value);
	free(head->key);
	free(head);
}

/**
 * u_s_l - updates the sorted list
 * @ht: hash table to update
 * @temp_node: node to update
 * @index: index of the array
 * Return: void
 */

void u_s_l(shash_table_t *ht, shash_node_t *temp_node, unsigned long int index)
{
	shash_node_t *current_node;
	unsigned long int i;

	if (temp_node->next != NULL)
	{
		while (temp_node->next != NULL)
		{
			current_node = temp_node;
			temp_node = temp_node->next;
			if (temp_node != NULL && strcmp(current_node->key, temp_node->key) > 0)
			{
				temp_node->sprev = current_node->sprev;
				temp_node->snext = current_node;
				current_node->sprev = temp_node;
			}
		}
		if (temp_node == NULL)
		{
			i = index + 1;
			while (i < ht->size)
			{
				if (ht->array[i] != NULL)
				{
					current_node->snext = ht->array[i];
					ht->array[i]->sprev = current_node;
					break;
				}
				i++;
			}
		}
		current_node = ht->array[index];
		run_if(index, ht, current_node);
	}
	else
		run_else(index, ht, temp_node);
}

/**
 * set_head_tail - sets the head and tail of the sorted list
 * @ht: hash table to update
 * @new_node: node to update
 * Return: void
*/
void set_head_tail(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *temp_node = new_node;

	if (temp_node->sprev == NULL && temp_node->snext == NULL)
	{
		ht->shead = ht->stail = temp_node;
	}
	else
	{
		while (temp_node->sprev != NULL)
		{
			ht->shead = temp_node;
			temp_node = temp_node->sprev;
		}
		ht->shead = temp_node;
		while (temp_node->snext != NULL)
		{
			ht->stail = temp_node;
			temp_node = temp_node->snext;
		}
		ht->stail = temp_node;
	}
}

/**
 * run_else - runs the else statement
 * @index: index of the array
 * @ht: hash table to update
 * @t_node: node to update
 * Return: void
 */

void run_else(unsigned long int index, shash_table_t *ht, shash_node_t *t_node)
{
	shash_node_t *current_node;
	unsigned long int i;

	i = index + 1;
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			t_node->snext = ht->array[i];
			ht->array[i]->sprev = t_node;
			break;
		}
		i++;
	}
	i = index - 1;
	while (i > 0)
	{
		if (ht->array[i] != NULL)
		{
			if (ht->array[i]->next != NULL)
			{
				current_node = ht->array[i]->next;
				while (current_node->next != NULL)
				{
					current_node = current_node->next;
				}
				current_node->snext = t_node;
				t_node->sprev = current_node;
				break;
			}
			ht->array[i]->snext = t_node;
			t_node->sprev = ht->array[i];
			break;
		}
		i--;
	}
}

/**
 * run_if - runs the if statement
 * @index: index of the array
 * @ht: hash table to update
 * @c_node: node to update
 * Return: void
 */

void run_if(unsigned long int index, shash_table_t *ht, shash_node_t *c_node)
{
	shash_node_t *temp_node;
	unsigned long int i;

	if (c_node->sprev == NULL)
	{
		i = index - 1;
		while (i > 0)
		{
			if (ht->array[i] != NULL)
			{
				if (ht->array[i]->next != NULL)
				{
					temp_node = ht->array[i]->next;
					while (temp_node->next != NULL)
					{
						temp_node = temp_node->next;
					}
					temp_node->snext = c_node;
					c_node->sprev = temp_node;
					break;
				}
				ht->array[i]->snext = c_node;
				c_node->sprev = ht->array[i];
				break;
			}
		}
	}
}
