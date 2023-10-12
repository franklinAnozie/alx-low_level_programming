#include "main.h"

/**
 * get_bit - prints the bit at index
 * @n: number being changed to base two
 * @index: the index number which we want to get
 * Return: bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
