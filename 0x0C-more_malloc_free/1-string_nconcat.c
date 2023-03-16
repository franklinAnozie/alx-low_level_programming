#include <stdlib.h>

/**
*** string_nconcat - concatenates two strings **
*** @s1: string to be concatenated into ********
*** @s2: string to concatenate into ************
*** @n: number of bytes to concatenate *********
*** Description: the function concatenames n ***
*** bytes of s2 into s1 ************************
*** Return: pointer to concatenated string *****
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_strn;
	unsigned int count_s1, count_s2, i, j;

	if (s1 == NULL)
		*s1 = ' ';

	if (s2 == NULL)
		*s2 = ' ';

	for (count_s1 = 0; s1[count_s1] != '\0';)
		count_s1++;

	for (count_s2 = 0; s2[count_s2] != '\0';)
		count_s2++;

	if (n >= count_s2)
		new_strn = malloc(sizeof(char) * (count_s2 + count_s2 + 1));
	else
		new_strn = malloc(sizeof(char) * (count_s1 + n + 1));

	if (new_strn == NULL)
		return (NULL);

	for (i = 0; i <= count_s1; i++)
	{
		if (s1[i] == '\0')
		{
			for (j = 0; j < n; j++)
			{
				new_strn[i] = s2[j];
				i++;
			}
		}
		new_strn[i] = s1[i];
	}

	return (new_strn);
}
