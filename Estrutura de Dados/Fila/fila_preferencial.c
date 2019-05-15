//
// Created by allan on 15/05/19.
//
#include <stdlib.h>
#include <stdio.h>
#include "fila_preferencial.h"

Tfila_pref * criarFilaPreferencial(){
    Tfila_pref * nova = (Tfila_pref*)malloc(sizeof(Tfila_pref));

    nova->fila_normal = criar_fila();
    nova->fila_pref = criar_fila();

    return nova;
}


void add_fila(Tfila_pref * f, TPessoa * p){
    if (p->idade >= 65)insere(f->fila_pref, p);
    else {
        insere(f->fila_normal, p);
    }
}

int remove_fila(Tfila_pref * f){
    if(!filaVazia(f->fila_pref)){
        retira(f->fila_pref);
        return 0;
    } else if (!filaVazia(f->fila_normal)){
        retira(f->fila_normal);
        return 0;
    }
    return -1;
}

void limpar_fila(Tfila_pref * f){
    limpaFila(f->fila_normal);
    limpaFila(f->fila_pref);

}

void imprimir_filaP(Tfila_pref * f){
    printf("%s\n", !filaVazia(f->fila_pref) ? "Fila Preferencial: \n" : "Fila Preferencial vazia!\n");

    if (f->fila_pref->inicio != NULL) {
        no *aux1 = f->fila_pref->inicio;
        while (aux1 != NULL) {
            printf("Nome: %s  Idade: %d \n", aux1->valor.nome, aux1->valor.idade);
            aux1 = aux1->proximo;
        }
    }
    printf("\n%s\n", !filaVazia(f->fila_normal) ? "Fila Normal: \n" : "Fila Normal vazia!\n");

    if (f->fila_normal->inicio != NULL) {
        no *aux = f->fila_normal->inicio;
        while (aux != NULL) {
            printf("Nome: %s  Idade: %d \n", aux->valor.nome, aux->valor.idade);
            aux = aux->proximo;
        }
    }
    printf("\n");
}