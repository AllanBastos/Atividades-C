//
// Created by allan on 08/03/2019.
//

/*****************************************************************************
 * Instituto Federal de Educação Ciência e Tecnologia da Paraíba
 * Campus Campina Grande
 * Curso Superior em Engenharia da Computação
 * Professor: Cesar Vasconcelos
 *
 * Copyright - Cesar Vasconcelos
 * Este marerial foi elaborado apenas para ser utilizado pelos alunos da
 * disciplina Estruturas de Dados, do curso de Eng. da Computação do IFPB.
 *
 * Nenhuma parte deste material pode ser reproduzida ou transmitida
 * de qualquer modo ou por qualquer meio sem prévia autorização do
 * autor e sem lhe ser dado o devido crédito.
 * **************************************************************************/

#include <stdio.h>
//#include <stdlib.h>
#include "listaseq.h"

int main(void){

    TLista l;
    criarLista( &l );

    imprimir( &l );

    printf( "\nLista vazia?: %s", listaVazia( &l ) ? "sim" : "nao" );
    printf( "\nO tamanho da lista: %d", tamanhoLista( &l )	);

    if( inserirElemento( &l, 1, 10 ) ) printf( "\nSucesso na insercao!" );
    if( inserirElemento( &l, 2, 20 ) ) printf( "\nSucesso na insercao!" );
    if( inserirElemento( &l, 3, 30 ) ) printf( "\nSucesso na insercao!" );

    if( inserirElemento( &l, 99, 40 ) ) printf( "\nSucesso na insercao!" );

    imprimir( &l );
    printf( "\nLista vazia?: %s", listaVazia( &l ) ? "sim" : "nao" );
    printf( "\nO tamanho da lista: %d", tamanhoLista( &l )	);

    int dado = 0;

    if( elementoNaPosicao( &l, 1, &dado ) )
        printf( "\nElemento na posicao 1: %d", dado	);
    if( elementoNaPosicao( &l, 2, &dado ) )
        printf( "\nElemento na posicao 2: %d", dado	);
    if( elementoNaPosicao( &l, 3, &dado ) )
        printf( "\nElemento na posicao 3: %d", dado	);

    if( elementoNaPosicao( &l, 99, &dado ) )
        printf( "\nElemento na posicao 99: %d", dado	);

    printf( "\nPosicao do elemento 10: %d", posicaoDoElemento( &l, 10 ) );
    printf( "\nPosicao do elemento 20: %d", posicaoDoElemento( &l, 20 ) );
    printf( "\nPosicao do elemento 30: %d", posicaoDoElemento( &l, 30 ) );

    printf( "\nPosicao do elemento 40: %d", posicaoDoElemento( &l, 40 ) );

    if( removerElemento( &l, 2, &dado ) ) printf( "\nSucesso na remocao!" );
    imprimir( &l );

    if( removerElemento( &l, 1, &dado ) ) printf( "\nSucesso na remocao!" );
    imprimir( &l );

    if( removerElemento( &l, 1, &dado ) ) printf( "\nSucesso na remocao!" );

    imprimir( &l );

    return 0;
}