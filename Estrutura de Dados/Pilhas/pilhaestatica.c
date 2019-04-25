#include "pilhaestatica.h"

#include <stdio.h>

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

void limpaPilha(pilha *p) {
    free(p);
}

void printPilha(pilha *p){

    printf("\nPILHA\n");
    for (int i=p->topo-1; i >= 0; i--){
        printf("[ %d ]\n",p->vet[i]);
    }
    if (p->topo == 0){
        printf("[   ]");
    }
}