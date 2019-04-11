//
// Created by allan on 11/04/19.
//

#include <stdio.h>
#include "listaencadeada.h"

int main(void){
    list *lista;
    lista = createList();
    if (isEmpty(lista)){
        printf("Lista vazia\n");
    }
    printList(lista);
    add(lista,10);
    printList(lista);
    add(lista, 20);
    if(hasElement(lista, 20)> 0){
        printf("A posição do Elemento 20 é [%d]\n", hasElement(lista, 20));
    }else printf("Elemento não existe\n");
    if(hasElement(lista, 30)> 0){
        printf("A posição do Elemento 30 é [%d]\n", hasElement(lista, 20));
    }else printf("Elemento não existe\n");
    printList(lista);
    removeBack(lista);
    printList(lista);
    removeBack(lista);
    printf("%d\n", size(lista));
    printList(lista);

}