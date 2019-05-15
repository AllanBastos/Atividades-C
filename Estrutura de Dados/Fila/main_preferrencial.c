//
// Created by allan on 14/05/19.
//

#include <stdio.h>
#include "fila_preferencial.h"

int main(void){
    Tfila_pref *fila;
    fila = criarFilaPreferencial();

    TPessoa *p1, *p2, *p3, *p4, *p5, *p6, *p7;

    p1 = criar_Pessoa("Allan", 21);
    p2 = criar_Pessoa("Juberto", 65);
    p3 = criar_Pessoa("Anastacia", 90);
    p4 = criar_Pessoa("joãozinho", 12);
    p5 = criar_Pessoa("Daniel", 35);
    p6 = criar_Pessoa("jaqueline", 100);
    p7 = criar_Pessoa("Emilly", 19);


    add_fila(fila, p1);
    add_fila(fila, p2);
    add_fila(fila, p3);
    imprimir_filaP(fila);
    add_fila(fila, p4);
    add_fila(fila, p5);
    add_fila(fila, p6);
    add_fila(fila, p7);

    imprimir_filaP(fila);

    remove_fila(fila);
    remove_fila(fila);
    remove_fila(fila);
    remove_fila(fila);
    imprimir_filaP(fila);

    limpar_fila(fila);
    imprimir_filaP(fila);

}