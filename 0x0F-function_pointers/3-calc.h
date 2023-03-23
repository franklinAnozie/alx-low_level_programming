#ifndef _3_CALC_H_
#define _3_CALC_H_

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

/**
*** operator_type - a structure containing an ****
*** opearator and a function to run **************
*** @operator: operator **************************
*** @func: function to be run ********************
**/

typedef struct operator_type
{
	char *operator;
	int (*func)(int a, int b);
} Operator_Type;

#endif