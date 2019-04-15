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
    insertPosition(lista, 753, 0);
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
    printf("O tamanho da lista é [%d]\n", size(lista));
    printList(lista);
    removeBack(lista);

    printf("O tamanho da lista é [%d]\n", size(lista));
    printList(lista);

    insertPosition(lista, 111, 0);

    printf("O tamanho da lista é [%d]\n", size(lista));
    printList(lista);


    insertPosition(lista, 121, 1);

    printf("O tamanho da lista é [%d]\n", size(lista));
    printList(lista);


    insertPosition(lista, 131, 2);


    printList(lista);

    removeElement(lista, 131);


    printf("O tamanho da lista é [%d]\n", size(lista));
    printList(lista);
    insertPosition(lista, 141, 2);

    printf("O tamanho da lista é [%d]\n", size(lista));
    printList(lista);
    insertPosition(lista, 151, 0);

    printf("O tamanho da lista é [%d]\n", size(lista));
    printList(lista);
    removePosition(lista, 0);

    printf("O tamanho da lista é [%d]\n", size(lista));
    printList(lista);
    removePosition(lista, 0);

    printList(lista);
    printf("O tamanho da lista é [%d]\n", size(lista));


    int numero = 0;

    get(lista, 1, &numero);
    printf("O elemento na posição 1 é %d\n", numero);

    printList(lista);
    printf("O tamanho da lista é [%d]\n", size(lista));

    removeElement(lista, 753);
    removeElement(lista, 121);

    removeElement(lista, 101);

    printList(lista);
    printf("O tamanho da lista é [%d]\n", size(lista));

    printf("Fim\n");
    return 0;

}
