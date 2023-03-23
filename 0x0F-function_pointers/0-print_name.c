#include <stdlib.h>

/**
*** print_name - prints the name given to the ****
*** function pointed to **************************
*** @name: name to be given to the function ******
*** @f: function that prints the name given ******
*** Return: Doesn't return anything **************
**/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
