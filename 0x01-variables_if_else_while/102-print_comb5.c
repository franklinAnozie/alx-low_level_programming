#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
int x, b;

for (x = 0; x < 100; x++)
{
for (b = 0; b < 100; b++)
{
if (x < b)
{
putchar((x / 10) + 48);
putchar((x % 10) + 48);
putchar(' ');
putchar((b / 10) + 48);
putchar((b % 10) + 48);
if (x != 98 || b != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
