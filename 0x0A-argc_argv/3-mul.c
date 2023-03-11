#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: arguments entered
 * Description: return product
 * Return: zero
 **/

int main(int argc, char **argv)
{
int multiple = 1, i;

if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
else
{
for (i = 1; i < argc; i++)
{
multiple *= atoi(argv[i]);
}
printf("%d\n", multiple);
return (0);
}

}
