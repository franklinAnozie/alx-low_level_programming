#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: number of diagonal elements
 * Return: 0
 **/

void print_diagonal(int n)
{
int i, j;
for (i = 0; i < n; i++)
{
_putchar('\\');
if (i != n - 1)
{
_putchar('\n');
for (j = 0; j <= i; j++)
_putchar(' ');
}
}
_putchar('\n');
}
