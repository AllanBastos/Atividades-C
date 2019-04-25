//
// Created by allan on 25/04/19.
//

#include <stdio.h>
#include "pilhaestatica.h"

int main(void){
    pilha* p;

    p = criaPilha();

    push(p, 20);

    printPilha(p);

    push(p, 35);

    printPilha(p);

    push(p, 23);

    printPilha(p);

    printf("%d\n",pop(p));

    printf("%d\n",pop(p));

    printf("%d\n",pop(p));

    printPilha(p);

    limpaPilha(p);

    printPilha(p);

    return 0;

}