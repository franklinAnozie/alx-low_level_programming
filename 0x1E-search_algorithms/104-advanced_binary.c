#include "search_algos.h"

/**
 * a_bs - Advanced Binary Search Algo
 * @array: array to search in
 * @start: start of array
 * @end: end of array
 * @value: value to search for
 *
 * Return: index where value is found or -1
 */

int a_bs(int *array, int start, int end, int value)
{
	int mid = (start + end) / 2;
	int iter;

	if (end < start)
		return (-1);

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

	if (array[mid] > value || (mid != 0 && array[mid - 1] == value))
	{
		return (a_bs(array, start, mid, value));
	}
	else if (array[mid] == value)
	{
		return (mid);
	}
	else
		return (a_bs(array, mid + 1, end, value));

	return (-1);
}

/**
 * advanced_binary - Advanced Binary Search Algo
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 *
 * Return: index where value is found or -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	int retval, sz = (int) size;

	if (array == NULL)
		return (-1);

	retval = a_bs(array, 0, sz - 1, value);
	return (retval);
}
