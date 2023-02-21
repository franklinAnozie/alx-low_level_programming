#include <stdio.h>
#include "main.h"

int print_last_digit(int j){
    int ld = j % 10;
    if(ld < 0){
        ld = -ld;
    }
    _putchar(ld + '0');
    return (ld);
};