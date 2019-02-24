#include <stdio.h>

int main() {
    int hi, hf, mi, mf, horas = 0, minutos = 0, hora_muinutos;
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf );

    hora_muinutos = (hf - hi) * 60 + (mf - mi);

    if (hora_muinutos <= 0) {
        hora_muinutos += 1440;
    }

    while (hora_muinutos >= 60){
        horas +=1;
        hora_muinutos -= 60;

    }
    while (hora_muinutos >= 1) {
        minutos +=1;
        hora_muinutos -= 1;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
    return 0;

}