//
// Created by allan on 24/04/19.
//

#ifndef ATIVIDADES_C_PILHASEQ_H
#define ATIVIDADES_C_PILHASEQ_H

#endif //ATIVIDADES_C_PILHASEQ_H


#define MAX 10

typedef struct pilha{
    int elementos[MAX];
    int topo;
}TPilha;

/* Criar uma pilha vazia */
void criarPilha( TPilha* pilha );

/* Verificar se a pilha está vazia ou não */
int pilhaVazia( TPilha* pilha );

/* Verificar se a pilha está cheia */
int pilhaCheia( TPilha* pilha );

/* Consultar o elemento que está topo da pilha (sem retirá-lo) */
int elementoTopo( TPilha* pilha, int *dado );

/* Empilhar um elemento */
int empilhar( TPilha* pilha, int elemento );

/* Desempilhar um elemento */
int desempilhar( TPilha* pilha, int *dado );

/* Exibir todos os elementos da pilha */
void imprimir( TPilha* pilha );