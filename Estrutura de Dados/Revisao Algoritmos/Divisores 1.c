#include <stdio.h>

int main(void){
    int n, i, cont;
    scanf("%d", &n);
    cont = 0;
    for (i=0; i <= n; i++ ){
        cont++;
        if (n % cont == 0) {
            printf("%d\n", cont);
        }
    }
    return 0;
}