//
// Created by allan on 24/04/19.
//

#include "pilhaseq.h"
#include <stdio.h>

void criarPilha( TPilha* pilha ){
    pilha->topo =-1;
}

int pilhaVazia( TPilha* pilha ){
    return (pilha->topo == -1);
}

int pilhaCheia(TPilha* pilha){
    return pilha->topo +1 == MAX;
}

int elementoTopo(TPilha* pilha, int *Dado){
    if (pilhaVazia(pilha))return 0;

    *Dado = pilha->elementos[pilha->topo];
    return 1;
}

int empilhar( TPilha* pilha, int elemento ){
    // a pilha está cheia?
    if ( pilhaCheia( pilha ) ) return 0;

    pilha->elementos[ pilha->topo++ ] = elemento;
    return 1;
}

int desempilhar( TPilha* pilha, int *dado ){
    // a pilha está vazia?
    if ( pilhaVazia( pilha ) ) return 0;

    *dado = pilha->elementos[ pilha->topo-- ];
    return 1;
}

void imprimir( TPilha* pilha ){

    printf("\nPilha=[ " );

    // varrendo todos os elementos
    for ( int i = 0; i <= pilha->topo ; i++ ) {
        if( i == pilha->topo  )	printf( "*%d", pilha->elementos[ i ] );
        else printf( "%d, ", pilha->elementos[ i ] );
    }
    printf(" ]");
}
