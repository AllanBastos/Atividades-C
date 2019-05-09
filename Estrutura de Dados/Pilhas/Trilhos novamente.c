//
// Created by allan on 03/05/19.
//

#include <stdio.h>
#include <stdlib.h>

typedef char tipo_elemento;

typedef struct no {
    tipo_elemento valor;
    struct no *prox;
}no;


typedef struct pilha {
    no *topo;
} pilha;


pilha* criaPilha () {
    pilha *p = (pilha*)malloc(sizeof(pilha));
    p->topo = NULL;
    return p;
}

void push (pilha *p, tipo_elemento v) {

    no* n;
    n = (no*)malloc(sizeof(no));
    n->valor = v;
    n->prox = p->topo;
    p->topo = n;

}

tipo_elemento pop (pilha *p) {
    if (p->topo == NULL) return ' ';

    tipo_elemento dado;
    no *aux;
    aux = p->topo;
    dado = aux->valor;

    (p->topo) = (p->topo)->prox;
    free(aux);

    return dado;
}

void trilhos(char v_ent[], char v_sai[] ,int quantidade_vagoes){

    pilha *Pilha = criaPilha();

    int entrada = 0, saida = 0;
    while(1){

        if (Pilha->topo != NULL && Pilha->topo->valor == v_sai[saida]){
            printf("R");
            pop(Pilha);
            saida++;
        }else if (entrada < quantidade_vagoes){
            printf("I");
            push(Pilha, v_ent[entrada]);
            entrada++;

        }else break;

    }

    if(Pilha->topo != NULL) printf(" Impossible");
    printf("\n");
}

int main(void) {
    int qnt_vagoes;
    scanf("%d ", &qnt_vagoes);

    while(qnt_vagoes > 0){
        if (qnt_vagoes == 0) break;

        char vagoesEntrada[qnt_vagoes];
        char vagoesSaida[qnt_vagoes];


        for(int i = 0; i < qnt_vagoes; i++){
            scanf(" %c", &vagoesEntrada[i]);
        }

        for(int i = 0; i < qnt_vagoes; i++){
            scanf(" %c", &vagoesSaida[i]);
        }
        trilhos(vagoesEntrada, vagoesSaida, qnt_vagoes);
        scanf(" %d", &qnt_vagoes);

    }

    return 0;
}


