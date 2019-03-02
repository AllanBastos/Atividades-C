#include <stdio.h>

int main(void){
    int n, lista[100], i, n_lista[100];
    scanf("%d", &n);

    for (i = 0; i < n; i++){
        scanf("%d", &lista[i]);

    }
    n_lista[0] =  ((lista[0] + lista[1])/2);
    for (i = 1; i < n; i++){
        if (i != n-1) {
            n_lista[i] = ((lista[i] + lista[i - 1] + lista[i + 1]) / 3);
        }

    }
    n_lista[n-1] = ((lista[n-1] + lista[n-2])/2);
    for (i = 0;i < n; i++){
        printf("%d ", n_lista[i]);
    }
    return 0;
}