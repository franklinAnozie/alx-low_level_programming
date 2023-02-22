#include <stdio.h>
/**
 * print_times_table - prints all possible combinations of two two-digit numbers
 * @n: condition number
 * Return: 0 (Success)
 */
void print_times_table(int n)
{
if ((n > 0 && n < 16) || n == 0)
{
int i, j, k;
for (i = 0; i < n + 1; i++)
{
for (j = 0; j < n + 1; j++)
{
k = i * j;
if (j < n)
{
printf("%-3d,   ", k);
}
else
{
printf("%-d", k);
}
}
printf("\n");
}
}
}
