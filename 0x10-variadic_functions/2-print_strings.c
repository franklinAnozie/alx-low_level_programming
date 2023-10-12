#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
*** print_strings - prints strings given to the ***
*** function as arguments *************************
*** @separator: separates the printed strings *****
*** @n: number of arguments given to the function *
*** Return: Doesn't return anything ***************
**/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *string;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}
		if (i != (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
