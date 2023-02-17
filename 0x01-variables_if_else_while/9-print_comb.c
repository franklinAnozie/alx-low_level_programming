#include <stdio.h>
/**
 * main - a function that prints lowercase alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;
for (number = '0'; number <= '9'; number++)
{
if (number != '9')
{
putchar(number);
putchar(',');
}
else
{
putchar(number);
}
}
putchar('\n');
return (0);
}
