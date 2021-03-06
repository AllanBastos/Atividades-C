#include "pilhadinamica.h"
#include <stdio.h>

pilha* criaPilha () {
    pilha *p = (pilha*)malloc(sizeof(pilha));
	p->topo = NULL;
    return p;
}

void push (pilha *p, int v) {
    no * novo = (no*) malloc(sizeof(no));
    novo->valor = v;
    if (p->topo != NULL) novo->prox = p->topo;
    else {
        novo->prox = NULL;
    }
    p->topo = novo;

}

tipo_elemento pop (pilha *p) {
    if (p->topo == NULL) return 0;
    tipo_elemento valor = 0;
    no *aux = p->topo;
    p->topo = (p->topo)->prox;
    valor = aux->valor;
    free(aux);
    return valor;
}

void limpaPilha (pilha *p) {
    no* q, *t;
    q = p->topo;
    while(q != NULL) {
        t = q->prox;
        free(q);
        q = t;
    }
    p->topo = NULL; 
}

void imprimir(pilha *p){
    no *aux = p->topo;

    while(aux != NULL){
        printf("[ %d ]\n", aux->valor);
        aux = aux->prox;

    }

}