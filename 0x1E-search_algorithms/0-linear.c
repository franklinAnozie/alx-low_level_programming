#include "search_algos.h"

/**
 * linear_search - Linear Search Algo
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 *
 * Return: index where value is found or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t iter;
	int found = -1;

	for (iter = 0; iter < size; iter++)
	{
		printf("Value checked array[%ld] = [%d]\n", iter, array[iter]);
		if (array[iter] == value)
		{
			found = iter;
			break;
		}
	}

	return (found);
}
