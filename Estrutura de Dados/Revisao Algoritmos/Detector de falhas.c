#include <stdio.h>

int main(void){
    int maior, n, verdade;
    verdade = 0;
    maior = 0;

    while (verdade == 0){
        scanf("%d", &n);

        if (n > maior){
            maior = n;
        }
        else {
            printf("%d\n", maior+1);
            verdade = 1;
        }
    }
    return 0;
}