//
// Created by allan on 09/03/2019.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void){
    char frase_a[61], frase_b[61],numeros_a[61], numeros_b[61], cpf[11];
    int cont_numeroA=0, cont_numeroB=0, cont_cpf=0;
    double A, B, soma;

    scanf("%s", frase_a);
    scanf("%s", frase_b);
    printf("cpf ");
    for(int i = 0; frase_a[i] != '\0'; i++){
        if (isdigit(frase_a[i]) && cont_cpf < 11){
            printf("%c",frase_a[i]);
            cont_cpf++;
        }
        else {
            if (isdigit(frase_a[i]) || frase_a[i] == '.'){
                numeros_a[cont_numeroA] = frase_a[i];
                cont_numeroA++;
            }


            if (numeros_a[cont_numeroA-3] == '.') break;


        }

    }
    printf("\n");

    for (int i=0; frase_b[i] != '\0'; i++){
        if (isdigit(frase_b[i]) || frase_b[i] == '.'){
            numeros_b[cont_numeroB] = frase_b[i];
            cont_numeroB++;
        }
        if(numeros_b[cont_numeroB-3] == '.') break;
    }
    A = strtod(numeros_a, NULL);
    B = strtod(numeros_b, NULL);

    soma = A + B;


    printf("%.2lf\n", soma);
    return 0;

}