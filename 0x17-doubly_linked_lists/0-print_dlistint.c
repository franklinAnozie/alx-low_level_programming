#include "lists.h"

/**
 * print_dlistint - prints all elements of list
 *
 * @h: first node in the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *iterator;
	int count = 0;

	if (!h)
		return (count);

	iterator = h;
	while (iterator)
	{
		printf("%d\n", iterator->n);
		count++;
		iterator = iterator->next;
	}
	return (count);
}
