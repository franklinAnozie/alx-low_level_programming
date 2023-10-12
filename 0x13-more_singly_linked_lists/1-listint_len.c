#include "lists.h"

/**
*** listint_len - a function to print out length **
*** of a list *************************************
*** @h: the list **********************************
*** Return: length of the list ********************
**/

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
