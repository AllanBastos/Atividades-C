#include <stdio.h>

int main() {

    int a, b, c, maior, medio, menor;

    scanf("%d %d %d", &a, &b, &c);


    if (a > b && a > c) {
        if (b > c){
            maior = a;
            medio = b;
            menor = c;
        }
        else {
            maior = a;
            medio = c;
            menor = b;
        }

    }
    if ((b >= a) && (b >= c)) {
        if (a >= c) {
            maior = b;
            medio = a;
            menor = c;
        }
        else {
            maior = b;
            medio = c;
            menor = a;

        }
    }
    if (c >= a && c >= b) {
        if (a > b){
            maior = c;
            medio = a;
            menor = b;
        }
        else{
            maior = c;
            medio = b;
            menor = a;

        }
    }
    printf("%d\n%d\n%d\n", menor, medio, maior);
    printf("\n");
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;

}