#include "lists.h"

/**
*** free_listint - a function to free the memory **
*** allocated for the creation of a new list ******
*** @head: the node to be freed *******************
*** Return: Doesn't return anything ***************
**/

void free_listint(listint_t *head)
{
	listint_t *new_node;

	while ((new_node = head) != NULL)
	{
		head = head->next;
		free(new_node);
	}
}
