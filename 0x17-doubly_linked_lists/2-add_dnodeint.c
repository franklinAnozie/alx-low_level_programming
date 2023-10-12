#include "list.h"

/**
 * add_dnodeint - adds a node at the start of a
 * doubly linked list
 * @head: head
 * @n: the n variable of the new node
 *
 * Return: pointer to the new node or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_N;

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
		new_N->next = *head;
		(*head)->prev = new_N;
		*head = new_N;
	}

	return (new_N);
}
