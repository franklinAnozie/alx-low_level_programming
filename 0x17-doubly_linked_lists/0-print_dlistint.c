#include "lists.h"

/**
 * print_dlistint - Prints the members of a
 * doubly linked list
 * @h: head
 *
 * Return: returns the size of the linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n_ofN = 0;
	const dlistint_t *iter = h;

	if (iter == NULL)
		return (n_ofN);

	while (iter != NULL)
	{
		n_ofN++;
		printf("%d\n", iter->n);
		iter = iter->next;
	}

	return (n_ofN);
}
