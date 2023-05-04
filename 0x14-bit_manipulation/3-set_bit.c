#include "main.h"

/**
 * set_bit - set the bit at index to 1
 * @n: number being changed to base two
 * @index: the index number which we want to get
 * Return: bit at index
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num = 1;

	if (index >= (sizeof(n) * 8))
	{
		return (-1);
	}

	num <<= index;
	*n = *n | num;
	return (1);
}
