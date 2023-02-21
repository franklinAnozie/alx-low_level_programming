#include "main.h"
/**
 * print_sign - prints all possible combinations of two two-digit numbers
 * @n: the character to check
 * Return: 0 (Success)
 */
int print_sign(int n)
{
char signs[] = "+-0";
if (n > 0)
{
_putchar (signs[0]);
return (1);
} 
else if (n == 0)
{
_putchar (signs[2]);
return (0);
} 
else
{
_putchar (signs[1]);
return( -1);
}
}
