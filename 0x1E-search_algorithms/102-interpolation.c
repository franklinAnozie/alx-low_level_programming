#include "search_algos.h"

/**
 * interpolation_search - Interpolation Search Algo
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 *
 * Return: index where value is found or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	int high = (int) size - 1, low = 0;
	int probe_pos;

	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		probe_pos = (int) (low + (((double) (high - low) /
				(array[high] - array[low])) * (value - array[low])));

		if (array[probe_pos] == value)
		{
			printf("Value checked array[%d] = [%d]\n", probe_pos, array[probe_pos]);
			return (probe_pos);
		}
		else if (array[probe_pos] < value)
		{
			printf("Value checked array[%d] = [%d]\n", probe_pos, array[probe_pos]);
			low = probe_pos + 1;
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", probe_pos, array[probe_pos]);
			high = probe_pos - 1;
		}
	}
	probe_pos = (int) (low + (((double) (high - low) /
				(array[high] - array[low])) * (value - array[low])));
	printf("Value checked array[%d] is out of range\n", probe_pos);
	return (-1);
}
