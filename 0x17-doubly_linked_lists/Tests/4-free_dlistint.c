#include "lists.h"

/**
 * free_dlistint - it frees a linked list
 *
 * @head: first node in the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	if (!head)
		return;
	else if (!head->next)
		free(head);
	else
	{
		while (current)
		{
			current = current->next;
			free(head);
			head = current;
		}
	}
}
