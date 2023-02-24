#include <stdio.h>

/**
 * fizzBuzz - prints all numbers between 1 and 100
 * Return: 0
 **/

void fizzBuzz(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if ((i % 5 == 0) && (i % 3 == 0))
{
(i == 100) ? printf("FizzBuzz\n") : printf("FizzBuzz ");
}
else if ((i % 5 == 0))
{
(i == 100) ? printf("Buzz\n") : printf("Buzz ");
}
else if ((i % 3 == 0))
{
(i == 100) ? printf("Fizz\n") : printf("Fizz ");
}
else
{
printf("%d ", i);
};
};
}
