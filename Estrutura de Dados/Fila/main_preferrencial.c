//
// Created by allan on 14/05/19.
//

#include <stdio.h>
#include "fila.h"

int main(void){
    Tfila *filaPref, *filaNorm;
    filaPref = criar_fila();
    filaNorm = criar_fila();

    TPessoa *p1, *p2, *p3, *p4, *p5, *p6;

    p1 = criar_Pessoa("Allan", 21);
    p2 = criar_Pessoa("Juberto", 65);
    p3 = criar_Pessoa("Anastacia", 90);
    p4 = criar_Pessoa("joãozinho", 12);
    p5 = criar_Pessoa("Daniel", 35);
    p6 = criar_Pessoa("jaqueline", 100);



    insere(filaNorm, filaPref, p1);
    insere(filaNorm, filaPref, p2);
    insere(filaNorm, filaPref, p3);
    insere(filaNorm, filaPref, p4);
    insere(filaNorm, filaPref, p5);
    insere(filaNorm, filaPref, p6);

    retira(filaNorm, filaPref);
    imprimir_fila(filaNorm, filaPref);
    retira(filaNorm, filaPref);
    retira(filaNorm, filaPref);
    retira(filaNorm, filaPref);
    imprimir_fila(filaNorm, filaPref);
    retira(filaNorm, filaPref);
    retira(filaNorm, filaPref);


}