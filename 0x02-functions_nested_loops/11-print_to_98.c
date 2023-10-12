#include <stdio.h>
/**
 * print_to_98 - prints all possible combinations of two two-digit numbers
 * @n: condition number
 * Return: 0 (Success)
 */
void print_to_98(int n)
{
if (n < 98)
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
};
n++;
};
}
else
{
while (n >= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
};
n--;
};
}

printf("\n");

return;
}
