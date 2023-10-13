#include "lists.h"

/**
 * insert_dnodeint_at_index - adds a node at an index of a
 * doubly linked list
 * @h: head
 * @idx: index to add at
 * @n: the n variable of the new node
 *
 * Return: pointer to the new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_N, *iter, *prev_N;
	unsigned int i = 0;

	if (*h == NULL)
		return (NULL);
	new_N = malloc(sizeof(dlistint_t));
	if (new_N == NULL)
		return (NULL);
	new_N->n = n, new_N->next = NULL;
	new_N->prev = NULL, iter = *h, prev_N = NULL;
	if (idx == 0)
	{
		new_N->next = iter;
		if (iter != NULL)
			iter->prev = new_N;
		*h = new_N;
		return (new_N);
	}
	while (iter != NULL)
	{
		if (i == idx)
		{
			prev_N->next = new_N;
			new_N->next = iter;
			new_N->prev = prev_N;
			iter->prev = new_N;
			return (new_N);
		}
		prev_N = iter;
		iter = iter->next;
		i++;
	}
	if (idx == i)
	{
		prev_N->next = new_N;
		new_N->prev = prev_N;
		return (new_N);
	}
	free(new_N);
	return (NULL);
}
