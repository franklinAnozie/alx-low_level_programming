#include <stdlib.h>

/**
*** _strdup - creates a duplicate of *********
*** the characters given to the function *****
*** @str: string to be duplicated ************
*** Description: the function creates a ******
*** duplicate of the strings given as ********
*** argument *********************************
*** Return: the pointer to duplicate string **
**/

char *_strdup(char *str)
{
	char *new_str;

	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0';)
	{
		i++;
	}

	new_str = malloc(sizeof(char));

	for (j = 0; j < i; j++)
	{
		new_str[j] = str[j];
	}

	return (new_str);
}
