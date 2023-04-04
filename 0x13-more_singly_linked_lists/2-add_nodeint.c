#include "lists.h"

/**
*** add_nodeint - a function to add a node to a ***
*** list ******************************************
*** @head: the node to be added *******************
*** @n: the length of the node added **************
*** Return: pointer to the new list ***************
**/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	int new_node_int;

	new_node_int = n;
	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = new_node_int;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
