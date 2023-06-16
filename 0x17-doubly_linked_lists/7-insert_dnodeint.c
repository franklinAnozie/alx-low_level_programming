#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 *
 * @h: first node of the linked list
 * @idx: index to insert node
 * @n: value to be inserted
 * Return: address of the new node of null if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *past, *future, *new_node;

	if (!h)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	future = *h, past = NULL;
	if (idx == 0)	/* check for first index */
	{
		new_node->next = *h;
		if (*h)		/* if head is NULL still insert */
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	for (i = 0; i < idx && future; i++)	/* more than one index */
		past = future, future = future->next;

	if (i != idx)   /* invalid index */
	{
		free(new_node);
		return (NULL);
	}
	else if (!future)   /* add node to end */
		past->next = new_node, new_node->prev = past;
	else    /* insert node */
	{
		past->next = new_node, new_node->prev = past, new_node->next = future;
		future->prev = new_node;
	}
	return (new_node);
}
