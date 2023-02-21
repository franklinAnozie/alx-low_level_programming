#include "main.h"
/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
char toBePrinted[] = "_putchar";
int i = sizeof(toBePrinted)/sizeof(toBePrinted[0]);
int j= 0;
while (j < i)
{
_putchar(toBePrinted[j]);
j++;
}
_putchar('\n');
return 0;
}
