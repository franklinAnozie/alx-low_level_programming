#include "main.h"

/**
 * more_numbers - prints numbers between 0 and 14
 * Return: 0
 **/

void more_numbers(void)
{
int num;
int max = 14;
int count = 0;
for (count = 0; count <= 10; count++)
{
for (num = 0; num <= max; num++)
{
if (num > 9)

_putchar((num / 10) + '0');

_putchar((num % 10) + '0');
}
_putchar('\n');
}
}
