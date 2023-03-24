#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_char(va_list list);
void print_int(va_list list);
void print_float(va_list list);
void print_string(va_list list);

/**
*** print_all - prints all the characters given **
*** to the function ******************************
*** @format: format to identify how to print *****
*** Return: Doesn't return anything **************
**/

void print_all(const char *const format, ...)
{
	va_list list;
	int i = 0, j = 0;
	char *separator = "";

	cf characters[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}};

	va_start(list, format);

	while (format[i] != '\0')
	{
		while (j < 4)
		{
			if (format[i] == *characters[j].symbol)
			{
				printf("%s", separator);
				characters[j].func(list);
				separator = ", ";
			}
			j++;
		}
		i++;
		j = 0;
	}
	printf("\n");

	va_end(list);
}

/**
*** print_char - prints the character given to ***
*** the function *********************************
*** @list: list to be printed ********************
*** Return: Doesn't return anything **************
**/

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
*** print_int - prints the integers given to *****
*** the function *********************************
*** @list: list to be printed ********************
*** Return: Doesn't return anything **************
**/

void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
*** print_float - prints the floats given to *****
*** the function *********************************
*** @list: list to be printed ********************
*** Return: Doesn't return anything **************
**/

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
*** print_string - prints the strings given to ***
*** the function *********************************
*** @list: list to be printed ********************
*** Return: Doesn't return anything **************
**/

void print_string(va_list list)
{
	char *str = va_arg(list, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}
