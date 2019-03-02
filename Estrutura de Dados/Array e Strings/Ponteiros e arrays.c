//
// Created by allan on 28/02/2019.
//


// Exercicio 3

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


// Exercicio 4

#include <stdio.h>

int main(void){
    int n, lista[100], i, n_lista[100];
    scanf("%d", &n);

    for (i = 0; i < n; i++){
        scanf("%d", &lista[i]);

    }
    n_lista[0] =  ((lista[0] + lista[1])/2);
    for (i = 1; i < n; i++){
        if (i != n-1) {
            n_lista[i] = ((lista[i] + lista[i - 1] + lista[i + 1]) / 3);
        }

    }
    n_lista[n-1] = ((lista[n-1] + lista[n-2])/2);
    for (i = 0;i < n; i++){
        printf("%d ", n_lista[i]);
    }
    return 0;
}

// Exercicio 5 //

#include <stdio.h>


void verificar(char* s){
    int total = 0, numero = 0;

    for (int i = 0; s[i] != '\0' ; i++){
        if ((s[i] >= '0') && (s[i] <= '9'))
            numero++;
        total++;
    }
    if (total >= 6 && numero >= 2) printf("SIM\n");
    else printf("NAO\n");


}
int main(void){
    char senha[20];
    int i;

    scanf("%20[^\n]", senha);

    verificar(senha);

    return 0;
}