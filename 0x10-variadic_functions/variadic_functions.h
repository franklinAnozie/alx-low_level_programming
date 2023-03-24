#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);

/**
*** struct character_format - a structure *********
*** formats specifier and a function to run *******
*** @symbol: specifier ****************************
*** @func: function to be run *********************
**/

typedef struct character_format
{
	char *symbol;
	void (*func)(va_list list);
} cf;

#endif
