//
// Created by allan on 15/05/19.
//

#ifndef ATIVIDADES_C_FILA_PREFERENCIAL_H
#define ATIVIDADES_C_FILA_PREFERENCIAL_H

#endif //ATIVIDADES_C_FILA_PREFERENCIAL_H

#include "fila.h"

typedef struct fila{
    Tfila * fila_normal;
    Tfila * fila_pref;
}Tfila_pref;

Tfila_pref * criarFilaPreferencial();

void add_fila(Tfila_pref * f, TPessoa * p);

int remove_fila(Tfila_pref * f);

void limpar_fila(Tfila_pref * f);

void imprimir_filaP(Tfila_pref * f);