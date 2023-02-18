#include <stdio.h>
/**
 * main - a function that prints lowercase alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number, secondNumber, thirdNumber;
for (number = '0'; number <= '9'; number++)
{
for (secondNumber = '0'; secondNumber <= '9'; secondNumber++)
{
for (thirdNumber = '0'; thirdNumber <= '9'; thirdNumber++)
{
if (number < secondNumber && secondNumber < thirdNumber)
{
putchar(number);
putchar(secondNumber);
putchar(thirdNumber);
if (number != '7' || secondNumber <= '7')
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
