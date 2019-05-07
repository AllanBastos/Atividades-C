//
// Created by allan on 07/05/19.
//

#include "stdio.h"
#include "pilhadinamica.h"
#include <stdlib.h>

int main(void){
    // crinando uma nova pilha
    pilha *p = criaPilha();

    // adcionando elemntos

    push(p, 20);
    push(p, 30);
    push(p, 14);
    push(p, 13);
    push(p, 12);
    // imprimindo pilha
    imprimir(p);
    // removendo elemento

    printf("%d\n",pop(p));
    printf("%d\n",pop(p));
    printf("%d\n",pop(p));
    printf("%d\n",pop(p));
    printf("%d\n",pop(p));

    imprimir(p);

    push(p, 200);
    push(p, 300);
    push(p, 140);
    push(p, 130);
    push(p, 120);

    imprimir(p);

    limpaPilha(p);

    imprimir(p);
}