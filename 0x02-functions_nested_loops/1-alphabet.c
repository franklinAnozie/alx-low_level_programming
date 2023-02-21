#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints all possible combinations of two two-digit numbers
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
_putchar(alphabet);
_putchar('\n');
return;
}
