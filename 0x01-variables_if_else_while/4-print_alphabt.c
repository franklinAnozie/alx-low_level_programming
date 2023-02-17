#include <stdio.h>
/**
 * main - a function that prints lowercase alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet != 'e' && alphabet != 'q')
{
putchar(alphabet);
}
}
putchar('\n');
return (0);
}
