#include "lists.h"

/**
*** print_listint - a function to print out a *****
*** list ******************************************
*** @h: the list **********************************
*** Return: size of the list **********************
**/

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
