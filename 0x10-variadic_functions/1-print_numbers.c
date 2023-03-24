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
		if (separator)
		{
			if (i == n - 1)
			{
				printf("%d", va_arg(list, int));
			}
			else
			{
				printf("%d%c ", va_arg(list, int), *separator);
			}
		}
		else
		{
			if (i == n - 1)
			{
				printf("%d", va_arg(list, int));
			}
			else
			{
				printf("%d ", va_arg(list, int));
			}
		}
	}
	printf("\n");

	va_end(list);
}
