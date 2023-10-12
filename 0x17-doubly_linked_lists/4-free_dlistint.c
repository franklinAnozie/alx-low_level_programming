#include "list.h"

/**
 * free_dlistint - frees all the nodes of a
 * doubly linked list
 * @head: head
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
