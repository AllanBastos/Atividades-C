#include <stdio.h>

int main() {
    float horas, velo_media, distancia;
    float litros;

    scanf("%f %f", &horas, &velo_media);

    distancia = (horas * velo_media);

    litros = (distancia/12);

    printf("%.3f\n", litros);

    return 0;
}