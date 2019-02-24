#include <stdio.h>

int main(void){
    int n, x, y, cont = 0;

    scanf("%d",&n);

    while (cont < n){
        cont++;
        scanf("%d %d", &x, &y);

        int soma = 0;
        int i;
        int final = x + y *2;

        for (i=x; i < final ; i++){
            if (i%2 != 0){
                soma += i;
            }
        }
        printf("%d\n", soma);
    }
    return 0;

}