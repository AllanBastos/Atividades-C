#include <stdio.h>

int main() {
    int total, notas100, notas50, notas20, notas10, notas5, notas2, notas1;

    scanf("%d", &total);
    printf("%d\n", total);
    notas100 = 0;
    notas50 = 0;
    notas20 = 0;
    notas10 = 0;
    notas5 = 0;
    notas2 = 0;
    notas1 = 0;

    while (total >= 100) {
        notas100++;
        total -= 100;
    }
    while (total >= 50) {
        notas50++;
        total -= 50;
    }
    while (total >= 20) {
        notas20++;
        total -= 20;
    }
    while (total >= 10) {
        notas10++;
        total -= 10;
    }
    while (total >= 5) {
        notas5++;
        total -= 5;
    }
    while (total >= 2) {
        notas2++;
        total -= 2;
    }
    while (total >= 1) {
        notas1++;
        total -= 1;
    }

    printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00", notas100, notas50, notas20, notas10, notas5, notas2, notas1);
    return 0;

}