#include <stdio.h>
#include "listalinear.h"

int main() {
    lista *l = criaLista(5);
    insere(l,10);
    insere(l,20);
    insere(l,5);
    printLista(l);
    remove_pos(l,1);
    printLista(l);
    insere(l,40);
    insere(l,60);
    insere(l,70);
    printf("Max: %d\n",l->max);
    insere(l,90);
    printf("Max: %d\n",l->max);
    insere(l,100);
    printLista(l);
    printf("Elemento pos %d = %d\n", 3, get(l,3));
    printf("Elemento pos %d = %d\n", 1, get(l,1));  
    libera(l);    
    return 0;
}
