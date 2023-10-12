#include <stdlib.h>

/**
*** malloc_checked - dynamic memory allocator **
*** @b: size of memory space to be allocated ***
*** Description: the function allocates a ******
*** specified amount of memory space ***********
*** Return: pointer to created memory space ****
**/

void *malloc_checked(unsigned int b)
{
	int *new_mem;

	new_mem = malloc(b);

	if (new_mem == NULL)
	{
		free(new_mem);
		exit(98);
	}

	return (new_mem);
}
