#include "lists.h"

/**
 * dlistint_len - counts the members of a
 * doubly linked list
 * @h: head
 *
 * Return: returns the size of the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n_ofN = 0;
	const dlistint_t *iter = h;

	if (iter == NULL)
		return (n_ofN);

	while (iter != NULL)
	{
		n_ofN++;
		iter = iter->next;
	}

	return (n_ofN);
}
