#include <stdarg.h>
#include <stdio.h>

/**
*** print_numbers - prints numbers given to the ***
*** function as arguments *************************
*** @separator: separates the printed numbers *****
*** @n: number of arguments given to the function *
*** Return: Doesn't return anything ***************
**/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i != (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(list);
}
