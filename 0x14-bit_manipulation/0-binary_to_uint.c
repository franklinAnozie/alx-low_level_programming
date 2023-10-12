#include "main.h"

/**
 * binary_to_uint - convert binary number to unsigned int
 * @b: pointer to a string
 * Return: unisgned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j, multiplier = 1;
	unsigned int result = 0, number;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0';)
	{
		i++;
	}

	for (j = (i - 1); j >= 0; j--)
	{
		if (b[j] != '0' && b[j] != '1')
		{
			return (0);
		}

		if (b[j] == '1')
		{
			number = 1;
		}
		else
		{
			number = 0;
		}

		result += number * multiplier;
		multiplier *= 2;
	}

	return (result);
}
