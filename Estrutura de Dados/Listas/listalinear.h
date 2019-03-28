#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *val;
    int ue;
    int max;
} lista;

lista * criaLista(int n);

int insere(lista *l, int v);

int remove_pos(lista *l, int i);

int size(const lista *l);

int get(const lista *l, int i);

void printLista(const lista *l);

void libera(lista *l);
