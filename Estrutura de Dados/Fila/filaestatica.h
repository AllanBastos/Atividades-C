#include <stdlib.h> //malloc

#define max 100
typedef struct{
		int n; //quantidade de elementos
 		int inicio;
		int vet[max];
} fila; 

fila * criaFila ();

void insere (fila *f, int v);

int retira(fila *f);

void limpaFila(fila *f);

int size(fila *f);