#include <stdio.h>

int main(void){
    int x, c=0;

    scanf("%d", &x);

    while (c < x) {
        c++;
        int n, i, cont = 0;
        scanf("%d", &n);

        for (i = 1; i <= n; ++i) {
            if (n % i == 0) {
                cont++;
            }
        }
        if (cont == 2) {
            printf("%d eh primo\n", n);
        } else {
            printf("%d nao eh primo\n", n);
        }
    }
    return 0;
}