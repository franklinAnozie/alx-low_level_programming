#include "lists.h"

/**
*** free_listint2 - a function to free the memory ***
*** allocated for the creation of a new list ********
*** @head: the node to be freed *********************
*** Return: Doesn't return anything *****************
**/

void free_listint2(listint_t **head)
{
	listint_t *new_node;

	while ((new_node = *head) != NULL)
	{
		*head = new_node->next;
		free(new_node);
	}
	*head = NULL;
}
