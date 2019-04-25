#include <stdlib.h> //malloc

typedef int tipo_elemento; //pilha de int

struct no {
	tipo_elemento valor;
	struct no *prox;
};
typedef struct no no;

typedef struct {
	no *topo;
} pilha;

pilha * criaPilha ();

void push (pilha *p, tipo_elemento v);

tipo_elemento pop(pilha *p);

void limpaPilha(pilha *p);