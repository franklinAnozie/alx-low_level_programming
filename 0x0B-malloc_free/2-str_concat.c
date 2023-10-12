#include <stdlib.h>

/**
*** str_concat - concatenates two strings ****
*** @s1: string to be concatenated into ******
*** @s2: string to concatenate into **********
*** Description: the function creates a ******
*** concatenation of two strings *************
*** Return: pointer to concatenated string ***
**/

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i, j, k, l;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0';)
		i++;

	for (j = 0; s2[j] != '\0';)
		j++;

	new_str = malloc(sizeof(char) * (i + j + 1));

	for (k = 0; k <= i; k++)
	{
		if (new_str == NULL)
		{
			return (NULL);
		}
		new_str[k] = s1[k];
		if (s1[k] == '\0')
		{
			for (l = 0; l < j; l++)
			{
				new_str[k] = s2[l];
				k++;
			}
		}
	}
	new_str[k + 1] = '\0';

	return (new_str);
}
