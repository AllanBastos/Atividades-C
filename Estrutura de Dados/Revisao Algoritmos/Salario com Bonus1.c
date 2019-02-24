#include <stdio.h>

int main() {
    char nome;
    double salario, vendas, slr_final;
    scanf("%s %lf %lf", &nome, &salario, &vendas);
    slr_final = ((vendas * 0.15) + salario);
    printf("TOTAL = R$ %.2f\n", slr_final);
    return 0;

}