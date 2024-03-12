#include "search_algos.h"

/**
 * bs - binary Search Algo
 * @array: array to search in
 * @start: start of array
 * @end: end of array
 * @value: value to search for
 *
 * Return: index where value is found or -1
 */

int bs(int *array, int start, int end, int value)
{
	int mid, iter;

	while (start <= end)
	{
		printf("Searching in array: ");
		for (iter = start; iter <= end; iter++)
		{
			printf("%d", array[iter]);
			if (iter <= end - 1)
			{
				printf(", ");
			}
		}
		printf("\n");

		mid = (start + end) / 2;

		if (value == array[mid])
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
	return (-1);
}

/**
 * exponential_search - Exponential Search Algo
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 *
 * Return: index where value is found or -1
 */

int exponential_search(int *array, size_t size, int value)
{
	int retval, start, end;
	int bound = 1, sz = (int) size;

	if (array == NULL)
		return (-1);

	while (bound < (int) size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	start = bound / 2;
	if (sz - 1 < bound)
		end = sz - 1;
	else
		end = bound;

	printf("Value found between indexes [%d] and [%d]\n", start, end);

	retval = bs(array, start, end, value);

	return (retval);
}
