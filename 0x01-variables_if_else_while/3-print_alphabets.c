#include <stdio.h>
/**
 * main - a function that prints lowercase alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabet;
char ALPHABET;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
putchar(alphabet);
for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
putchar(alphabet);
putchar('\n');
return (0);
}
