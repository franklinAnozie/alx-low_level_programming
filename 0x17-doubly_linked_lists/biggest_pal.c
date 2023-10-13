#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
*The functions defined in this file, checks all the palidromes gotten
*from the multiplication of all three digit numbers and returns the 
*highest palindrome gotten and stores it in a file 102-results
*/

char *pali(int a, int b, char *sus, char *np)
{
	if (atoi(np) > atoi(sus))
	{
		return (np);
	}
	while (a < b)
	{
		if (sus[a] != sus[b])
		{
			return (np);
		}
		a++;
		b--;
	}
	strcpy(np, sus);
	return (np);
}

char *biggest_pal(char *np)
{
	char pal[10];
	int i = 100, a = 0;
	int j = 100, b;
	int mul;

	while (i < 1000)
	{
		while (j < 1000)
		{
			mul = i * j;
			sprintf(pal, "%d", mul);
			b = strlen(pal) - 1;
			if (pal[a] == pal[b])
			{
				np = pali(a, b, pal, np);
			}
			j++;
		}
		j = i;
		i++;
	}
	return (np);
}

int main(void)
{
	char *big;
	char np[10];
	FILE *new_file = fopen("102-result" , "w");

	big = biggest_pal(np);
	fputs(big, new_file);
	fclose(new_file);
	printf("%s\n", big);
	return (0);
}
