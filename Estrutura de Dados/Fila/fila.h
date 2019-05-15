//
// Created by allan on 14/05/19.
//

#ifndef ATIVIDADES_C_FILA_H
#define ATIVIDADES_C_FILA_H

#endif //ATIVIDADES_C_FILA_H

//criando o tipo estruturado pessoa
typedef struct pessoa{
    char nome[51];
    int idade;
}TPessoa;

//definindo o tipo pessoa como dado para a fila;

typedef TPessoa tipo_dado;

// criando o no para a fila

typedef struct no{
    tipo_dado valor;
    struct no *proximo;
}no;

typedef struct {
    no *inicio;
    no *fim;
}Tfila;


Tfila * criar_fila();

TPessoa * criar_Pessoa( char nome[51], int idade);

void insere (Tfila *f, Tfila *fP, tipo_dado * pes);

int retira(Tfila *f, Tfila *fP);

void limpaFila(Tfila *f, Tfila *fP);

int filaVazia(Tfila f);

void imprimir_fila(Tfila f, Tfila fp);




