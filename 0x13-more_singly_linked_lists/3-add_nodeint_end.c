#include "lists.h"

/**
*** add_nodeint_end - a function to add a node to *
*** the end of a list *****************************
*** @head: the node to be added *******************
*** @n: the length of the node added **************
*** Return: pointer to the new list ***************
**/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	temp_node = *head;

	if (temp_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp_node->next != NULL)
		{
			temp_node = temp_node->next;
		}
		temp_node->next = new_node;
	}

	return (*head);
}
