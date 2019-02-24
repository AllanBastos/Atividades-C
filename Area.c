#include <stdio.h>
#include <math.h>

int main() {
    double area,raio, quad, n;
    scanf("%lf", &raio);
    n = 3.14159;
    area = pow(raio, 2) * n;
    printf("A=%.4f\n", area);
    return 0;
}