#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list.
 *
 * @head: first node of the list
 * Return: sum of all data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (!head)
		return (0);

	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
