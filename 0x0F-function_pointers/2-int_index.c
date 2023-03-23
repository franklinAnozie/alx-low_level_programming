#include <stdlib.h>

/**
*** int_index - searches for an integer in an ****
*** array and returns it's index *****************
*** @array: array to be searched through *********
*** @size: size of array *************************
*** @cmp: function that cmpares values ***********
*** Return: Returns the index of thr integer *****
**/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
