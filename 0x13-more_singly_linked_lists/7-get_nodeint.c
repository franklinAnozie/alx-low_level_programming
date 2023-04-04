#include "lists.h"

/**
*** get_nodeint_at_index - a function to get the **
*** node at a particular index ********************
*** @head: the node to be checked through *********
*** @index: the index to be checked for ***********
*** Return: a pointer to the node *****************
**/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len = 0;
	listint_t *nth_node;

	if (head == NULL)
	{
		return (0);
	}

	nth_node = malloc(sizeof(listint_t));

	while (head != NULL)
	{
		if (len == index)
		{
			nth_node = head;
			break;
		}
		head = head->next;
		len++;
	}
	if (nth_node == NULL)
	{
		return (NULL);
	}
	return (nth_node);
}
