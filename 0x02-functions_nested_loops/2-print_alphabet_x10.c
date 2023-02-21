#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
int i;
char alphabet;
int numOfIterations = 10;
for (i = 0; i < numOfIterations; i++)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
_putchar(alphabet);
_putchar('\n');
}
return;
}
