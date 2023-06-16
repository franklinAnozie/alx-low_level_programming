#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of list
 *
 * @head: first node in list
 * @n: value to be added in new node
 *
 * Return: address of the new element or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *new_node;

	current = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (!(*head))
		*head = new_node;
	else if (!(*head)->next)	/* check if next address is NULL */
	{
		(*head)->next = new_node;
		new_node->prev = (*head);
	}
	else	/* more than one node */
	{
		while (current->next != NULL)
			current = current->next;

		current->next = new_node;
		new_node->prev = current;
	}
	return (new_node);
}
