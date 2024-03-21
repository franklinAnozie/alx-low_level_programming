#include "search_algos.h"

/**
 * linear_skip - Linear Skip Algo
 * @list: list to search in
 * @value: value to search for
 *
 * Return: index where value is found or -1
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *head = list, *tail = list;

    if (list == NULL)
        return (NULL);
    
    while (head->next)
    {
        tail = head->express;
        printf("Value checked at index [%ld] = [%d]\n", tail->index, tail->n);
        if (tail->express == NULL)
        {
            head = tail;
            while (tail->next)
                tail = tail->next;
            break;
        }
        else if (tail->n > value)
            break;
    }

    printf("Value found between indexes [%ld] and [%ld]\n", tail->index, tail->express->index);

    while (tail)
    {
        printf("Value checked at index [%ld] = [%d]\n", tail->index, tail->n);
        if (tail->n == value)
            return (tail);
        tail = tail->next;
    }

    return (NULL);
}
