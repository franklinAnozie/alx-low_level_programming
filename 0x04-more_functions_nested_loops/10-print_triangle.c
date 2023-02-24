#include "main.h"

void print_triangle(int size){

    int i, j, k;
    for (i = 0; i < size; i++)
    {
        if (i != size -1)
        {
            for (j = size - 1; j >= i; j--)
            {
                _putchar(' ');
            }
            for (k = (size - (size - 1)); k >= 0; k++){
                _putchar('#');
            }
            _putchar('\n');
        }
    }
}