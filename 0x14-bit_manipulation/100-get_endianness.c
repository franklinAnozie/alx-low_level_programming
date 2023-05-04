#include "main.h"
/**
 * get_endianness - checks for big or little endian
 * Return: 1 if little and 0 if big endian
 */

int get_endianness(void)
{
	int i = 1;
	char *c = (char *)&i;

	if (*c == '0')
	{
		return (0);
	}

	return (1);
}
