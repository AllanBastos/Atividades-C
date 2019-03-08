//
// Created by allan on 03/03/2019.
//

#include <stdio.h>

int main(void){
    char O;
    float soma = 0, m[12][12];
    int i, c,cont=0, k=1;
    scanf("%c", &O);

    for(i=0; i<12 ; i++){
        for (c=0; c<12; c++){
            scanf("%f", &m[i][c]);
        }
    }
    for(i=0; i<12; i++){
        for(c=k; c < 12; c++){
            soma+= m[i][c];
            cont++;
        }
        k++;
    }
    if (O == 'S') printf("%.1f\n", soma);
    else if (O == 'M') printf("%.1f\n", soma/cont);

    return 0;

}