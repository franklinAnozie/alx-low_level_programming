#include <stdio.h>
/**
 * main - a function that prints lowercase alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabet;
for (alphabet = '0'; alphabet <= '9'; alphabet++)
putchar(alphabet);
for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
putchar(alphabet);
putchar('\n');
return (0);
}
