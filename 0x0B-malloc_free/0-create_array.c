#include <stdlib.h>

/**
*** create_array - creates and array *********
*** according to the number given in *********
*** the arguments ****************************
*** @size: size of the array *****************
*** @c: characters to be used to fill up *****
*** the array ********************************
*** Description: the function prints an ******
*** array of characters given as arguments ***
*** Return: the pointer to array *************
**/

char *create_array(unsigned int size, char c)
{
	char *array;

	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	while (i < size)
	{
		if (array == NULL)
		{
			return (NULL);
		}

		array[i] = c;
		i++;
	}

	return (array);
}
