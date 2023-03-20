#include <stdio.h>

/**
*** main - prints out the name of the file it ****
*** was called from, followed by a new line ******
*** Return: Always returns 0 *********************
**/

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
