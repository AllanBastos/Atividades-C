//
// Created by allan on 25/04/19.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wfor-loop-analysis"
#define max 10

typedef char tipo_elemento;

typedef struct pilha{
    tipo_elemento vet[max];
    int topo;
}pilha;

pilha* criaPilha () {
    pilha *p = (pilha*)malloc(sizeof(pilha));
    p->topo = 0;
    return p;
}


int push(pilha *p, tipo_elemento v) {
    if (p->topo == max) return -1;

    p->vet[p->topo] = v;
    p->topo++;
    return 0;
}

tipo_elemento pop(pilha *p) {
    if (p->topo == 0) return -1;

    return p->vet[--p->topo];
}

int verificar(pilha *p, char *str){


    for (int i = 0; str[i] != '\0' ; i++) {
        if (str[i] == '(' ) push(p, '(');
        else if (str[i] == ')' && p->topo != 0) pop(p);
        else if (str[i] == ')' && p->topo == 0) {
            return 0;
        }
    }
    if (p->topo > 0) return 0;
    else if (p->topo == 0) return 1;

    return 1;
}



int main(void){
    char str[1001];

    while (scanf("%s", str) != EOF) {
        pilha *p = criaPilha();

        printf("%s\n", verificar(p, str) ? "correct" : "incorrect");
    }

    return 0;

}

