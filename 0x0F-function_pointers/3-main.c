#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char **argv)
{
	int first_variable, second_variable, result;

	if (argc != 4)
	{
		printf("Error1\n");
		exit(98);
	}

	if (*argv[2] != '/' && *argv[2] != '%' && *argv[2] != '*' && *argv[2] != '-' && *argv[2] != '+')
	{
		printf("Error2\n");
		exit(98);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && (*argv[1] == '0' || *argv[3] == '0'))
	{
		printf("Error3\n");
		exit(98);
	}

	first_variable = atoi(argv[1]);
	second_variable = atoi(argv[3]);

	result = get_op_func(argv[2])(first_variable, second_variable);
	if (!result)
	{
		printf("Error3\n");
		exit(98);
	}

	printf("%d\n", result);

	return (0);
}
