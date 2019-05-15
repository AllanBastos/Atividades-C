//
// Created by allan on 14/05/19.
//

#include "fila.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Tfila * criar_fila() {
    Tfila *f = (Tfila*)malloc(sizeof(Tfila));
    f->inicio = NULL;
    f->fim = NULL;
    return f;
}

TPessoa * criar_Pessoa( char nome[51], int idade){
    TPessoa * p = (TPessoa*) malloc(sizeof(TPessoa));
    strcpy(p->nome, nome);
    p->idade = idade;

    return p;
}

void insere (Tfila *f, tipo_dado * pes){

    no *novo = (no*)malloc(sizeof(no));
    novo->valor =  * pes;
    novo->proximo = NULL;

    if(f->fim != NULL) {
        f->fim->proximo = novo;
        f->fim = novo;
    }
    else {
        f->inicio = novo;
        f->fim = novo;
    }
}

int retira(Tfila *f) {
    no *temp;

    if(f->inicio == NULL) return -1;
    else {
        temp = f->inicio;
        f->inicio = f->inicio->proximo;
        if(f->inicio == NULL) {
            f->fim = NULL;
        }
        free(temp); //desaloca a memória
        return 0;
    }

}

void limpaFila (Tfila *f) {
    no *q, *t;
    q = f->inicio;
    while (q != NULL) {
        t = q;
        q = q->proximo;
        free(t);
    }
    f->inicio = NULL;
    f->fim = NULL;
}

int filaVazia(Tfila * f) {
    return (f->inicio == NULL);
}


void imprimir_fila(Tfila * f) {

    printf("\n%s\n", !filaVazia(f) ? "Fila: \n" : "Fila vazia!\n");

    if (f->inicio != NULL) {
        no *aux1 = f->inicio;
        while (aux1 != NULL) {
            printf("Nome: %s  Idade: %d \n", aux1->valor.nome, aux1->valor.idade);
            aux1 = aux1->proximo;
        }
    }
}