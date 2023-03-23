#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
*** main - Prints the result of mathematical ******
*** operation passed as arguments to the function *
*** @argc: Number of arguments passed *************
*** @argv: Arguments passed including func name ***
*** Return: Return result from the function *******
**/

int main(int argc, char **argv)
{
	int first_variable, second_variable, result;

	if (argc != 4)
	{
		printf("Error1\n");
		exit(98);
	}

	if (*argv[2] != '/' && *argv[2] != '%'
	&& *argv[2] != '*' && *argv[2] != '-' && *argv[2] != '+')
	{
		printf("Error2\n");
		exit(98);
	}

	if ((*argv[2] == '/' || *argv[2] == '%')
	&& (*argv[1] == '0' || *argv[3] == '0'))
	{
		printf("Error3\n");
		exit(98);
	}

	first_variable = atoi(argv[1]);
	second_variable = atoi(argv[3]);

	result = get_op_func(argv[2])(first_variable, second_variable);

	printf("%d\n", result);

	return (0);
}
