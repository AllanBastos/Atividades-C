//
// Created by allan on 10/04/19.
//

#include "listaencadeada.h"
#include <stdio.h>
#include <stdlib.h>


list * createList(){
    list *l =  (list*) malloc(sizeof(list));
    l->begin= NULL;
    return l;
}

void add(list *l, int elemento){
    node *novo;
    novo = (node*) malloc(sizeof(node));
    novo->data = elemento;
    novo->next = NULL;

    if (l->begin == NULL) l->begin = novo;
    else {
        node *aux = l->begin;
        for (; aux->next != NULL; aux = aux->next);
        aux->next = novo;
    }
}

void printList(const list *l){
    node* aux = l->begin;

    printf("[ ");
    for( ; aux != NULL; aux = aux->next){
        printf("%d ", aux->data);
    }
    printf("]\n");
}

int isEmpty( const list *l){
    if (l->begin == NULL){
        return 1;
    } else return 0;
}

void removeBack( list *l ){
    node* aux = l->begin;

    if(size(l) == 1){
        l->begin = NULL;
    }

    while (aux->next->next != NULL) aux = aux->next;

    free(aux->next);
    aux->next = NULL;


}

int size (const list *l){
    int cont = 0;
    node *aux = l->begin;
    while(aux != NULL){
        cont++;
        aux = aux->next;
    }

    return cont;
}

int hasElement(list *l, int elemento){
    int pos = 0;
    node *aux = l->begin;

    if (isEmpty(l)) return -1;

    while (aux != NULL){
        if (aux->data == elemento){
            return pos;
        }
        aux = aux->next;
        pos++;
    }
    return -1;
}

int insertPosition(list *l, int elemento, int pos ){
    if (pos >= 0 && pos <= size(l)){
        if (pos == size(l)){
            add(l, elemento);
            return 0;
        }

        else if (pos == 0){
            node *novo = (node*)malloc(sizeof(node));
            novo->data = elemento;
            novo->next = l->begin;
            l->begin = novo;

            return 0;
        }
        else
        {
            node *novo = (node*)malloc(sizeof(node));
            novo->data = elemento;
            node *ant = l->begin;
            node *prox = l->begin;

            for (int i = 1; i < pos; i++){
                ant = ant->next;
            }

            for (int i = 1; i <= pos; i++){
                prox = prox->next;
            }
            ant->next = novo;
            novo->next = prox;

        }

        return 0;      
    }
    return -1;
}

int removePosition(list *l, int pos){

    if (pos < 0 || pos > size(l) || isEmpty(l)) return -1;

// se for a ultima posição
    if (pos == size(l)-1){
        removeBack(l);
        return 0;
    }

// se for a primeira posição

    else if (pos == 0) {

        node *aux = l->begin;
        l->begin = aux->next;
        free(aux);
    }
    // se for no meio

    else {
        node *aux = l->begin;
        node *rem = l->begin;
        for(int i = 1; i < pos; i++){
            aux = aux->next;
        }
        for (int i = 1; i<= pos;i++){
            rem = rem->next;

        }


        aux->next = rem->next;
        free(aux);
    }
    return 0;


}

int removeElement(list *l, int element){
    int pos = hasElement(l, element);

    if (pos == -1) return -1;
    removePosition(l, pos);
    return pos;
}

int get(list *l, int pos, int *vret){

    if (size(l) == 0 || pos >= size(l)) return -1;

    node *aux = l->begin;
    for (int i = 0; i < pos; i++) aux = aux->next;

    *vret = aux->data;
    return 0;


}

//4 questão: seria necessario modificar a estrutura de lista, acrescentando
// um elemento chado tamanho da lista
// e seria necessario mudar algumas funções, como  a de add e remover;
