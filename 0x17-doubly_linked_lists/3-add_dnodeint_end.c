#include "list.h"

/**
 * add_dnodeint_end - adds a node at the end of a
 * doubly linked list
 * @head: head
 * @n: the n variable of the new node
 *
 * Return: pointer to the new node or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current_N, *new_N;

	new_N = malloc(sizeof(dlistint_t));
	if (new_N == NULL)
		return (NULL);

	new_N->n = n;
	new_N->prev = NULL;
	new_N->next = NULL;

	if (*head == NULL)
		*head = new_N;
	else
	{
		current_N = *head;
		while (current_N->next != NULL)
			current_N = current_N->next;
		current_N->next = new_N;
		new_N->prev = current_N;
	}

	return (new_N);
}
