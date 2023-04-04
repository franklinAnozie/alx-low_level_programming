#include "lists.h"

/**
*** free_listint2 - a function to free the memory ***
*** allocated for the creation of a new list ********
*** @head: the node to be freed *********************
*** Return: Doesn't return anything *****************
**/

void free_listint2(listint_t **head)
{
	listint_t *new_node, *temp_node;

	new_node = *head;

	if (head != NULL)
	{
		while ((temp_node = new_node) != NULL)
		{
			new_node = new_node->next;
			free(temp_node);
		}
		*head = NULL;
	}
}
