#include "filadinamica.h"
#include <stdio.h>

int main() {
    fila *f = criaFila();
    insere(f,10);
    insere(f,5);
    insere(f,20);
    int v;
    retira(f,&v);
    printf("%d\n",v);
    retira(f,&v);
    printf("%d\n",v);
    return 0;
}