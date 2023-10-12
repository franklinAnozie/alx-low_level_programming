#include <stdio.h>
/**
 * main - a function that prints lowercase alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number, secondNumber;
for (number = '0'; number <= '9'; number++)
{
for (secondNumber = '0'; secondNumber <= '9'; secondNumber++)
{
if (number < secondNumber)
{
putchar(number);
putchar(secondNumber);
if (number != '8' || secondNumber <= '8')
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
