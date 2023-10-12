#include <stdio.h>
#include <stdlib.h>

int check_format(char *s);
/**
 * main - find least amount of coins needed for change
 * @argc: number of parameters
 * @argv: strings
 * Description: prints the minimum number of coins to make change
 * Return: zero
 **/

int main(int argc, char **argv)
{
int sum = 0, i;
if (argc < 3)
{
printf("0\n");
}
else
{
for (i = 1; i < argc; i++)
{
if (check_format(argv[i]))
{
if (atoi(argv[i]) <= 0)
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
}
return (0);
}

/**
 * check_format - verifies string
 *@s: string to check
 * Return: 1 if only numbers, 0 if not
 **/

int check_format(char *s)
{
int i, j;
for (i = 0; s[i] != '\0'; )
{
i++;
}
for (j = 0; j < i; j++)
{
if (s[j] < '0' || s[j] > '9')
{
return (0);
}
}
return (1);
}
