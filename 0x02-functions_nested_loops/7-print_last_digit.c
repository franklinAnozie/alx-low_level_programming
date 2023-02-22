#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints all possible combinations of two two-digit numbers
 * @j: absolutr val
 * Return: 0 (Success)
 */
int print_last_digit(int j)
{
int ld = j % 10;
if (ld < 0)
ld = -ld;
_putchar(ld + '0');
return (ld);
}
