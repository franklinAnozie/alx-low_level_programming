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
	int n_size = (int) size, iter;
	int start = 0, end;
	int checker = 0;

	if (array == NULL)
		return (-1);

	for (end = 0; end < n_size; start = end)
	{
		printf("Value checked array[%d] = [%d]\n", end, array[end]);
		end = end + (int) sqrt(n_size);
		if (array[end] >= value)
			break;
		if (end >= n_size)
			break;
	}
	if (end > n_size)
		iter = n_size - start;
	else
		iter = end - start;
	while (iter)
	{
		if (checker == 0)
			printf("Value found between indexes [%d] and [%d]\n", start, end);

		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
		start++;
		checker = 1;
		iter--;
	}
	return (-1);
}
