#include <stdlib.h>
#include <stdio.h>

/**
*** argstostr - concatenates the strings *****
*** given to the function as arguments *******
*** @ac: the number of strings given *********
*** @av: the strings to be concatenated ******
*** Description: concatenates strings given **
*** Return: pointer to the concatenated ******
*** string ***********************************
**/

char *argstostr(int ac, char **av)
{
	int i, j, k, l, m = 0, length = 0;
	char *array_string;

	if (av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			length++;
		}
		length++;
	}

	array_string = (char *)malloc(sizeof(char) * length + 1);

	if (array_string == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < ac; k++)
	{
		for (l = 0; av[k][l] != '\0'; l++)
		{
			array_string[m] = av[k][l];
			m++;
		}
		array_string[m] = '\n';
		m++;
	}
	array_string[m] = '\0';

	return (array_string);
}
