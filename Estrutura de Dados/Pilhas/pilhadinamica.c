#include "pilhadinamica.h"

pilha* criaPilha () {
    pilha *p = (pilha*)malloc(sizeof(pilha));
	p->topo = NULL;
    return p;
}

void push (pilha *p, int v) {
    //Incluir a implementação
}

int pop (pilha *p) {
    //Incluir a implementação
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