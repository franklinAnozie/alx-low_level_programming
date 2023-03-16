#include <stdlib.h>

/**
*** _calloc - allocates memory for an array **
*** @nmemb: number of elements of the array **
*** @size: bytes of elecments of the array ***
*** Description: the function allocates ******
*** memory of size bytes for an array ********
*** Return: pointer to created memory ********
**/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *mem;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc(size * nmemb);

	if (mem == NULL)
	{
		return (NULL);
	}

	return (mem);
}
