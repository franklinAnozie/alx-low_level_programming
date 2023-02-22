#include <stdio.h>
/**
 * jack_bauer - prints all possible combinations of two two-digit numbers
 *
 * Return: 0 (Success)
 */
void jack_bauer(void)
{
int i, j, k, l;
for (i = 0; i <= 2; i++)
{
if(i == 2)
{
for (j = 0; j <= 3; j++)
{
for (k = 0; k <= 5; k++)
{
for (l = 0; l <= 9; l++)
{
printf("%d%d:%d%d\n", i, j, k, l);
}
}
}
}
else
{
{
for (j = 0; j <= 9; j++)
{
for (k = 0; k <= 5; k++)
{
for (l = 0; l <= 9; l++)
{
printf("%d%d:%d%d\n", i, j, k, l);
}
}
}
}
}
}
return;
}
