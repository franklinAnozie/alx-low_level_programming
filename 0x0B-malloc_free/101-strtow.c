#include <stdlib.h>
#include <stdio.h>

int return_new_str_length(char *str);
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
	int l, m, n, o = 0, p;
	char **strn, *new_str;

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	new_str = return_new_str(str);

	if (new_str == NULL)
	{
		free(new_str);
		return (NULL);
	}

	l = return_new_str_length(str);

	strn = (char **)malloc(sizeof(char *) * (l));

	if (strn == NULL)
	{
		free(strn);
		return (NULL);
	}

	for (m = 0; m < l; m++)
	{
		for (n = o; new_str[n] != '\0'; n++)
		{
			if (new_str[n] == ' ')
			{
				o++;
			}

			if (new_str[n] != ' ' && (new_str[n + 1] == ' ' || new_str[n + 1] == '\0'))
			{
				strn[m] = (char *)malloc(sizeof(char) * (n - o - 2));
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
			strn[m][p] = new_str[o];
			o++;
			p++;
		}
		strn[m][p] = '\0';
	}
	strn[m] = NULL;
	return (strn);
}

/**
*** return_new_str - creates new string ******
*** from the string given to the function as *
*** an argument ******************************
*** @str: the strings given ******************
*** Description: creates new string **********
*** Return: pointer to the new string ********
**/

char *return_new_str(char *str)
{
	char *new_str;
	int i, j, k = 0, l = 0;

	for (i = 0; str[i] != '\0';)
	{
		i++;
	}

	if (i < 2)
	{
		return (NULL);
	}

	new_str = (char *)malloc(sizeof(char) * i + 1);

	if (new_str == NULL)
	{
		free(new_str);
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		if (str[j] != ' ')
		{
			new_str[k] = str[j];
			if (str[j + 1] == ' ' || str[j + 1] == '\0')
			{
				new_str[k + 1] = ' ';
				k++;
				l++;
			}
			k++;
		}
	}
	new_str[k] = '\0';

	if (new_str == NULL || *new_str == '\0')
	{
		free(new_str);
		return (NULL);
	}

	return (new_str);
}

/**
*** return_new_str_length - calculates the ***
*** length of the string given to the ********
*** function as arguments ********************
*** @str: the string given *******************
*** Description: calculates length of the ****
*** strings given ****************************
*** Return: length of string *****************
**/

int return_new_str_length(char *str)
{
	char *new_str;
	int i, j, k = 0, l = 0;

	for (i = 0; str[i] != '\0';)
	{
		i++;
	}

	new_str = (char *)malloc(sizeof(char) * i + 1);

	if (new_str == NULL)
	{
		free(new_str);
		return (0);
	}

	for (j = 0; j < i; j++)
	{
		if (str[j] != ' ')
		{
			new_str[k] = str[j];
			if (str[j + 1] == ' ' || str[j + 1] == '\0')
			{
				new_str[k + 1] = ' ';
				k++;
				l++;
			}
			k++;
		}
	}
	new_str[k] = '\0';

	return (l);
}
