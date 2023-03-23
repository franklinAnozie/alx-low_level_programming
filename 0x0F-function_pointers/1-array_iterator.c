#include <stdlib.h>

/**
*** array_iterator - prints each member of an ****
*** array given to a function ********************
*** @array: array to be printed ******************
*** @size: size of array *************************
*** @action: function that prints the array ******
*** Return: Doesn't return anything **************
**/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
