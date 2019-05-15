#include <stdlib.h> //malloc

struct no {
	int valor;
	struct no *prox;
};

typedef struct no no;

typedef struct {
	no *inicio;
	no *fim;
} fila; 

fila * criaFila ();

void insere (fila *f, int valor);

int retira(fila *f, int *vret);

void limpaFila(fila *f);