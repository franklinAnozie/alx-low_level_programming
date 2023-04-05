#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp;
	unsigned int count = 0;

	tmp = *head;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		while (tmp != NULL)
		{
			if (count == (idx - 1))
			{
				new_node->next = tmp->next;
				tmp->next = new_node;
			}
			count++;
			tmp = tmp->next;
		}
	}

	if (!new_node)
	{
		return (NULL);
	}

	return (tmp);
}
