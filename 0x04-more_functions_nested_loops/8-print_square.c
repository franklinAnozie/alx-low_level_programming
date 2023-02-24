#include "main.h"

/**
 * print_square - prints a suare
 * @n: number of square elements
 * Return: 0
 **/

void print_square(int n)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
_putchar('#');
}
_putchar('\n');
}
}