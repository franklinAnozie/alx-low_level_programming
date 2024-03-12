#include "search_algos.h"

/**
 * jump_search - Jump Search Algo
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 *
 * Return: index where value is found or -1
 */

int jump_search(int *array, size_t size, int value)
{
	int n_size = (int) size;
	int start, end = 0;
	int checker = 0;

	if (array == NULL)
		return (-1);

	while (array[end] < value)
	{
		printf("Value checked array[%d] = [%d]\n", end, array[end]);
		start = end;
		end = end + (int) sqrt(n_size);
		if (end > n_size)
			break;
	}

	while (array[start] < value)
	{
		if (checker == 0)
			printf("Value found between indexes [%d] and [%d]\n", start, end);

		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		start++;
		checker = 1;
		if (start > end || end >= n_size)
			return (-1);
	}

	if (array[start] == value)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		return (start);
	}
	else
		return (-1);
}
