#include "main.h"
/**
 *print_number - updates the value of the variable
 * the pointer points to 98
 * @n: pointer to the variable to update
 *
 * Return: pointer to the updated variable
 */

void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n >= 0 && n <= 9)
{
_putchar((n % 10) + '0');
}
else
{
print_number(n / 10);
_putchar((n % 10) + '0');
}
}
