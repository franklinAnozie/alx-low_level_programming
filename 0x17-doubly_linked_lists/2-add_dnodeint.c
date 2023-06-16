#include "lists.h"

/**
 * add_dnodeint -  adds a new node at the beginning of a list
 *
 * @head: first node in list
 * @n: value to be added in new node
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (!*head)	/* check if head is NULL */
		*head = new_node;
	else	/* head has nodes */
	{
		new_node->next = *head;
		(*head)->prev = new_node;	/* update prev pointer */
		*head = new_node;
	}
	return (new_node);
}
