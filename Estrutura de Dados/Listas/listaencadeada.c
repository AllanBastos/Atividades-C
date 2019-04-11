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
    else{
        node* aux = l->begin;
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
    node *aux = NULL;
    node *ant = NULL;
    int tam = size(l);
    int count = 1;

    if (isEmpty(l)) return;

    aux = l->begin;

    while ((count <= tam-1) && (aux != NULL)){
        ant = aux;
        aux = aux->next;
        count++;
    }

    if (aux == NULL) return;

    if (tam == 1) l->begin = NULL;
    else ant->next = aux->next;

    free(aux);
}

int size (const list *l){
    int count = 0;
    node *aux = NULL;

    if (isEmpty(l)) return 0;

    aux = l->begin;
    while(aux != NULL) {
        aux = aux->next;
        count++;
    }

    return count;
}

int hasElement(list *l, int elemento){
    int pos = 1;
    node *aux = NULL;

    if (isEmpty(l)) return -1;
    aux = l->begin;

    while (aux != NULL){
        if (aux->data == elemento){
            return pos;
        }
        aux = aux->next;
        pos++;
    }
    return -1;
}

int insertPosition(list *l, int elemento, int pos );