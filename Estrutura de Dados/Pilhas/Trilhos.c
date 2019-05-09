//
// Created by allan on 01/05/19.
//

#include <stdio.h>
#include <stdlib.h>

typedef int tipo_elemento;

struct no {
    tipo_elemento valor;
    struct no *prox;
};
typedef struct no no;

typedef struct {
    no *topo;
} pilha;


pilha* criaPilha () {
    pilha *p = (pilha*)malloc(sizeof(pilha));
    p->topo = NULL;
    return p;
}

void push (pilha *p, int v) {

    no* n;
    n = (no*)malloc(sizeof(no));
    n->valor = v;
    n->prox = p->topo;
    p->topo = n;

}

int pop (pilha *p) {
    if (p->topo == NULL) return -1;

    int dado;
    no *aux;
    aux = p->topo;
    dado = aux->valor;

    (p->topo) = (p->topo)->prox;
    free(aux);

    return dado;
}


int trilho(int entrada[], int n_vagoes){
    pilha *a = criaPilha();
    pilha *b = criaPilha();

    int n = 1, sair = 0;

    for (int i = 0; i < n_vagoes; i++){
        while(1){
            if (a->topo != NULL && (a->topo)->valor == entrada[i]){
                push(b, pop(a));
                break;
            }
            else if (n <= n_vagoes){
                push(a, n);
                n++;
                if (a->topo->valor == entrada[i]){
                    push(b, pop(a));
                    break;
                }
            }
            else{
                sair = 1;
                break;
            }
        }
    }

    if (a->topo == NULL) return 1;
    return 0;
}

int main(){

    int qnt_vagoes, num = 0, vet[10001];

    while (scanf("%d", &qnt_vagoes)){
        if (qnt_vagoes == 0) break;

        while (scanf("%d", &num)){
            if(num == 0)break;
            vet[0] = num;

            for(int i= 1; i< qnt_vagoes; i++){
                scanf("%d", &num);
                vet[i] = num;
            }
            printf("%s\n", trilho(vet, qnt_vagoes)? "Yes" : "No");
        }
        printf("\n");
    }

    return 0;

}