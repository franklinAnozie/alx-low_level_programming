#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

int (*get_op_func(char *s))(int a, int b)
{
	int i = 0;

	Operator_Type operators[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};

	while (operators[i].operator!= NULL)
	{
		printf("%c\n", *operators[i].operator);
		printf("%c\n", *s);
		if (*operators[i].operator== * s)
		{
			return (operators[i].func);
		}
		i++;
	}
	return (NULL);
}
