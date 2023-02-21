#include "main.h"

int print_sign(int n){
    char signs[] = "+-0";
    if(n > 0){
        _putchar(signs[0]);
        return (1);
    } else if(n == 0) {
        _putchar(signs[2]);
        return (0);
    } else {
        _putchar(signs[1]);
        return(-1);
    }
}