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

void insere (Tfila *f, Tfila *fP, tipo_dado * pes){

    no *novo = (no*)malloc(sizeof(no));
    novo->valor =  * pes;
    novo->proximo = NULL;
    if (pes->idade >= 65)f = fP;

    if(f->fim != NULL) {
        f->fim->proximo = novo;
        f->fim = novo;
    }
    else {
        f->inicio = novo;
        f->fim = novo;
    }
}

int retira(Tfila *f, Tfila *fP) {
    no *temp;
    if(fP->inicio != NULL){
        temp = fP->inicio;
        fP->inicio = fP->inicio->proximo;
        if(fP->inicio == NULL) {
            fP->fim = NULL;
        }
        free(temp); //desaloca a memória
        return 0;
    }

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

void limpaFila (Tfila *f, Tfila *fP) {
    no *q, *t, *qp, *tp;
    qp = fP->inicio;
    while (qp != NULL) {
        tp = qp;
        qp = qp->proximo;
        free(tp);
    }
    fP->inicio = NULL;
    fP->fim = NULL;

    q = f->inicio;
    while (q != NULL) {
        t = q;
        q = q->proximo;
        free(t);
    }
    f->inicio = NULL;
    f->fim = NULL;

}

int filaVazia(Tfila f) {
    return (f.inicio == NULL);
}


void imprimir_fila(Tfila f, Tfila fp){
    printf("%s\n", filaVazia(fp)? "Fila Preferencial:\n" : "Fila Preferencial vazia:\n");

    while (fp.inicio->proximo != NULL){
        printf("Nome: [ %s ] Idade[ %d ]\n", fp.inicio->valor.nome, fp.inicio->valor.idade);
        fp.inicio = fp.inicio->proximo;
    }

    printf("%s\n", filaVazia(fp)? "Fila:\n" : "Fila vazia:\n");

    while (f.inicio->proximo != NULL){
        printf("Nome: [ %s ] Idade[ %d ]\n", f.inicio->valor.nome, f.inicio->valor.idade);
        f.inicio = f.inicio->proximo;
    }
}