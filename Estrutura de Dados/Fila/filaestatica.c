#include "filaestatica.h"

fila * criaFila () {
    fila *f = (fila*)malloc(sizeof(fila));
    f->inicio = 0;
    f->n = 0;
    return f;
}

void insere (fila *f, int v) {
    int fim = 0;
    if (f->n < max) { //se tiver espaço na fila
	  fim = (f->inicio + f->n) %max ;
        f->vet[fim] = v;
        f->n = f->n + 1;
    }
}

int retira(fila *f) {
    int ret;
    if (f->n > 0) { //existem elemento na fila
        ret = f->vet[f->inicio];
        f->inicio = ((f->inicio) + 1)%max;
        f->n--;
    }
    return ret;
}

void limpaFila(fila *f) {
    free(f);
}

int size(fila *f) {
    return f->n;
}