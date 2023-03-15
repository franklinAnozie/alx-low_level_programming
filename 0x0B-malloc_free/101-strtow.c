#include <stdlib.h>
#include <stdio.h>

char *return_new_str(char *str);

/**
*** strtow - concatenates the strings ********
*** given to the function as arguments *******
*** @str: the number of strings given ********
*** Description: concatenates strings given **
*** Return: pointer to the concatenated ******
*** string ***********************************
**/

char **strtow(char *str)
{
	int c, l, m, n, o = 0, p;
	char **strn;

	if (str == NULL)
	{
		return (NULL);
	}

	for (c = l = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			l++;

	strn = (char **)malloc(sizeof(char *) * (l + 1));

	if (strn == NULL)
	{
		free(strn);
		return (NULL);
	}

	for (m = 0; m < l; m++)
	{
		for (n = o; str[n] != '\0'; n++)
		{
			if (str[n] == ' ')
			{
				o++;
			}

			if (str[n] != ' ' && (str[n + 1] == ' ' || str[n + 1] == '\0'))
			{
				strn[m] = (char *)malloc(sizeof(char) * (n - o + 2));
				if (strn[m] == NULL)
				{
					free(strn[m]);
					return (NULL);
				}
				break;
			}
		}
		for (p = 0; o <= n;)
		{
			strn[m][p] = str[o];
			o++;
			p++;
		}
		strn[m][p] = '\0';
	}
	strn[m] = NULL;

	if (strn == '\0')
	{
		return (strn);
	}

	return (strn);
}
