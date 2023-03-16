#include <stdlib.h>

char *mem(char *, char, unsigned int);

/**
*** _calloc - allocates memory for an array **
*** @nmemb: number of elements of the array **
*** @size: bytes of elements of the array ****
*** Description: the function allocates ******
*** memory of size bytes for an array ********
*** Return: pointer to created memory ********
**/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc(size * nmemb);

	if (mem == NULL)
	{
		return (NULL);
	}

	_memset(mem, 0, nmemb * size);

	return (mem);
}

/**
*** mem - copy a character into an array *****
*** @mem: array to be filled with character **
*** @c: character to be copied ***************
*** @a: number of times to copy character ****
*** Return: pointer to array created *********
**/

char *mem(char *mem, char c, unsigned int a)
{
	unsigned int i;

	for (i = 0; i < a; i++)
	{
		mem[i] = c;
	}

	return (mem);
}
