#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list.
 * @head: dlistint_t list
 * @index: index of the list where the new node should be deleted.
 * Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);

	current = *head;
	if (current != NULL)
		while (current->prev != NULL)
			current = current->prev;

	while (current)
	{
		if (i == index)
		{
			if (index == 0)
				*head = current->next;

			if (current->prev)
				current->prev->next = current->next;

			if (current->next)
				current->next->prev = current->prev;

			free(current);
			return (1);
		}
		current = current->next;
		i++;
	}

	return (-1);
}
