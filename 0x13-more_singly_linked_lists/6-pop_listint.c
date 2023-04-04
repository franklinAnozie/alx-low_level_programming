#include "lists.h"

/**
*** pop_listint - a function to delete a node *****
*** from a list ***********************************
*** @head: the node to be deleted *****************
*** Return: the data at the deleted node **********
**/

int pop_listint(listint_t **head)
{
	listint_t *pop_d, *rem_list;
	int node_data;

	if (*head == NULL)
	{
		return (0);
	}

	pop_d = *head;
	node_data = pop_d->n;
	rem_list = pop_d->next;
	*head = rem_list;

	free(pop_d);

	return (node_data);
}
