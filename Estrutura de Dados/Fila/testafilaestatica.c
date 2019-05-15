#include "filaestatica.h"
#include <stdio.h>

int main() {
    fila *f = criaFila();
    insere(f,10);
    insere(f,5);
    insere(f,20);
    printf("%d\n",retira(f));
    printf("%d\n",retira(f));
    return 0;
}