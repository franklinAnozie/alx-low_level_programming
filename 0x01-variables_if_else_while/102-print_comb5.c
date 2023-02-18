#include <stdio.h>
/**
 * main - a function that prints lowercase alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number, secondNumber, thirdNumber, fourthNumber;
for (number = '0'; number <= '9'; number++)
{
for (secondNumber = '0'; secondNumber <= '9'; secondNumber++)
{
putchar(number);
putchar(secondNumber);
putchar(' ');
for (thirdNumber = '0'; thirdNumber <= '9'; thirdNumber++)
{
if (secondNumber <= thirdNumber)
{
for (fourthNumber = '0'; fourthNumber <= '9'; fourthNumber)
{
if (thirdNumber < fourthNumber)
{
putchar(thirdNumber);
putchar(fourthNumber);
if(number != '9' || secondNumber <= '8')
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
