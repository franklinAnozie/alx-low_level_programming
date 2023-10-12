#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
*** get_op_func - gets the right function to be ***
*** run for every operator passed to the function *
*** @s: operator passed to the function ***********
*** Return: returns the right functio to be run ***
**/

int (*get_op_func(char *s))(int a, int b)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};

	while (ops[i].op != NULL)
	{
		if (*ops[i].op == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
