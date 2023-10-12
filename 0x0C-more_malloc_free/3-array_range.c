#include <stdlib.h>

/**
*** array_range - creates an array from a range **
*** @min: minimum number in the array ************
*** @max: maximum number in the array ************
*** Description: the function creates an *********
*** from a range of two numbers ******************
*** Return: pointer to created range *************
**/

int *array_range(int min, int max)
{
	int *new_array_range, i;

	if (min > max)
	{
		return (0);
	}

	new_array_range = malloc(sizeof(int) * (max - min + 1));

	if (new_array_range == 0)
	{
		return (0);
	}

	for (i = 0; min <= max; i++)
	{
		new_array_range[i] = min;
		min++;
	}

	return (new_array_range);
}
