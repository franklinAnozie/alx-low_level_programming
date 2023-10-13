 #include "lists.h"

/**
 * delete_dnodeint_at_index - delets a node at an index from a
 * doubly linked list
 * @head: head
 * @index: index of node to be deleted
 *
 * Return: 1 if successful, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del_N, *iter;
	unsigned int counter = 0;

	if (head == NULL)
		return (-1);
	iter = *head;
	while (iter != NULL)
	{
		del_N = iter;
		iter = iter->next;
		if (counter == index)
		{
			if (index == 0)
			{
				*head = iter;
				free(del_N);
				return (1);
			}
			iter = del_N->prev;
			iter->next = iter->next->next;
			free(del_N);
			return (1);
		}
		counter++;
	}
	free(del_N);
	return (-1);
}
