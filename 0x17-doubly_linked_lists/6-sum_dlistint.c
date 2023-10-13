#include "lists.h"

/**
 * sum_dnodeint - sums the nodes in a doubly linked list
 * @head: head
 *
 * Return: sum of nodes or 0 if theres no node
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *point;
	int sum = 0;

	if (head == NULL)
		return (sum);

	point = head;
	while (point != NULL)
	{
		sum += point->n;
		point = point->next;
	}

	return (sum);
}
