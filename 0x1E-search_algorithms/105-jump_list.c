#include "search_algos.h"

/**
 * jump_list - Jump Search Algo
 * @list: list to search in
 * @size: size of array
 * @value: value to search for
 *
 * Return: index where value is found or -1
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *head = list, *tail = list;
	int sz = (int) size, jump;

	if (list == NULL)
		return (NULL);

	while (tail->n < value)
	{
		head = tail;
		jump = (int) sqrt(sz);
		while (jump)
		{
			if (tail->next == NULL)
				break;
			tail = tail->next;
			jump--;
		}
		printf("Value checked at index [%ld] = [%d]\n", tail->index, tail->n);
		if (tail->next == NULL)
			break;
	}
	printf("Value found between index [%ld] and [%ld]\n",
			head->index, tail->index);
	while (head && head->index <= tail->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", head->index, head->n);
		if (head->n == value)
			return (head);
		if (head->next)
			head = head->next;
		else
			break;
	}

	return (NULL);
}
