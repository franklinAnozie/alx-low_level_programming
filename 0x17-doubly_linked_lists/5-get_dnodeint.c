#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *
 * @head: first node in the list
 * @index: the node index to be gotten
 * Return: address of the node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current;

	if (!head)
		return (NULL);

	current = head;
	while (i < index && current)
	{
		current = current->next;
		i++;
	}

	return (current);
}
