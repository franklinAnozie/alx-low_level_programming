#include <stdio.h>

void times_table(void){
    int i, j, k;
    for (i=0; i<=9; i++){
        for(j=1; j<=9; j++){
            k = i * j;
            if(j != 9){
                printf("%2d, ", k);
            } else {
                printf("%2d", k);
            }
            
        }
        printf("\n");
    }
}
