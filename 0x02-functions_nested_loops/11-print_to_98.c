#include "main.h"

void print_to_98(int n){

    if (n < 98) {
        _putchar(n + '0');
    } else {
        _putchar(n + '0');
        _putchar(' ');
        _putchar('l');
    }
/*     if (n < 98){
        while (n <= 98)
        {
            _putchar('0' + n);
            if (n != 98)
            {
                _putchar(',');
                _putchar(' ');
            };
            n++;
        };
    } else {
        while (n >= 98)
        {
            _putchar('0' + n);
            if (n != 98)
            {
                _putchar(',');
                _putchar(' ');
            };
            n--;
        };
    } */

    _putchar('\n');

    return;
}