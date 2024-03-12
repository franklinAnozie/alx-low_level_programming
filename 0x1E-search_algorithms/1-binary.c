#include "search_algos.h"

/**
 * binary_search - Binary Search Algo
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 *
 * Return: index where value is found or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int start = 0, end = size - 1, mid;
	int iter;

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
