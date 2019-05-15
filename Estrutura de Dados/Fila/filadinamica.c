#include "filadinamica.h"

fila * criaFila() {
    fila *f = (fila*)malloc(sizeof(fila));
    f->inicio = NULL;
    f->fim = NULL;
    return f;
}

void insere (fila *f, int valor){
    no *novo = (no*)malloc(sizeof(no));
	novo->valor = valor;
	novo->prox = NULL;
	if(f->fim != NULL) {
		f->fim->prox = novo;
        f->fim = novo;
	}
	else {
		f->inicio = novo;
		f->fim = novo;
	}
}

int retira(fila *f, int *vret) {
	no *temp;
	if(f->inicio == NULL) return -1;
	else {
		temp = f->inicio;
		*vret = temp->valor;
		f->inicio = f->inicio->prox;
		if(f->inicio == NULL) {
			f->fim = NULL;
		}	
		free(temp); //desaloca a memória
		return 0;    
	}
}

void limpaFila (fila *f) {
     no *q, *t;
     q = f->inicio; 
     while (q != NULL) {
        	t = q;
        	q = q->prox;
       		free(t);
     }  
     f->inicio = NULL;
     f->fim = NULL;  
}