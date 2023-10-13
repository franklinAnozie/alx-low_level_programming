#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at an index in
 * doubly linked list
 * @head: head
 * @index: the index of the list to be gotten
 *
 * Return: pointer to the node or NULL if not found
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *point;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	point = head;
	while (point != NULL)
	{
		if (i == index)
			return (point);
		i++;
		point = point->next;
	}

	return (NULL);
}
