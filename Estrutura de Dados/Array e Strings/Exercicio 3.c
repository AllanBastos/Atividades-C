//
// Created by allan on 02/03/2019.
//

#include <stdio.h>

int main(void){
    int n = 10, i, acima = 0, notas[11];
    double media ;
    int soma = 0;

    for (i =0; i < n; i++){
        scanf("%d", &notas[i]);
        soma += notas[i];
    }
    media = soma/n;
    for (i = 0; i < n; i++){
        if (notas[i] >= media){
            acima++;
        }
    }
    printf("%.1lf\n", media);
    printf("%d\n", acima);
    return 0;
}