#include <stdio.h>
#include "main.h"

void print_alphabet_x10(void) {
    int i;
    int numOfIterations = 10;
    for(i = 0; i < numOfIterations; i++){
        print_alphabet();
    }
    return;
}