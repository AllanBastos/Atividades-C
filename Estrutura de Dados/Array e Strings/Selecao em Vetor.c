//
// Created by allan on 02/03/2019.
//

#include <stdio.h>

int main(void){
    float x[100]; int i;
    for (i=0; i < 100; i++){
        scanf("%f", &x[i]);
        if (x[i] <= 10) {
            printf("A[%d] = %.1f\n", i, x[i]);
        }
    }
    return 0;
}