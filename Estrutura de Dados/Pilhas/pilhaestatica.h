#include <stdlib.h> //malloc

#define max 100
typedef int tipo_elemento; //pilha de int

typedef struct{
 		int topo;
		tipo_elemento vet[max];
} pilha; 

pilha * criaPilha ();

int push (pilha *p, tipo_elemento v);

tipo_elemento pop(pilha *p);

void limpaPilha(pilha *p);

void printPilha(pilha *p);
