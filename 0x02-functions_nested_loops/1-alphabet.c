#include <stdio.h>
#include "main.h"

void print_alphabet(void) {
    char alphabet;
    for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
        _putchar(alphabet);
    _putchar('\n');
    return;
};
