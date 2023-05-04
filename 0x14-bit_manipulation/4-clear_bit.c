#include "main.h"

/**
 * clear_bit - set the bit at index to 0
 * @n: number being changed to base two
 * @index: the index number which we want to get
 * Return: 1 if works and or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num = 1;

	if (index >= (sizeof(n) * 8))
	{
		return (-1);
	}

	if ((*n >> index) & num)
	{
		*n ^= (num << index);
	}

	return (1);
}
