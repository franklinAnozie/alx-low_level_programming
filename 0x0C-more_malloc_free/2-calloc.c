#include <stdlib.h>

char *_memset(char *, char, unsigned int);

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
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
