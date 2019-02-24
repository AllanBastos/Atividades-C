#include <stdio.h>
#include <string.h>

int main(void) {
    char g1[81], g2[81], tipo[81];
    scanf("%s %s %s", g1, g2, tipo);

    if (strcmp(g1, "vertebrado")==0){
        if (strcmp(g2, "ave")==0) {
            if (strcmp(tipo, "carnivoro")==0){
                printf("aguia\n");
            }
            else if (strcmp(tipo, "onivoro")==0){
                printf("pomba\n");
            }
        }
        else if (strcmp(g2, "mamifero")==0) {
            if (strcmp(tipo, "herbivoro") == 0) {
                printf("vaca\n");
            }
            else if (strcmp(tipo, "onivoro") == 0) {
                printf("homem\n");
            }
        }
    }
    else if (strcmp(g1, "invertebrado") == 0){
        if (strcmp(g2, "inseto") == 0){
            if (strcmp(tipo, "hematofago") == 0){
                printf("pulga\n");
            }
            else if (strcmp(tipo, "herbivoro") == 0){
                printf("lagarta\n");
            }
        }
        else if (strcmp(g2, "anelideo") == 0){
            if (strcmp(tipo, "hematofago") == 0){
                printf("sanguessuga\n");
            }
            else if (strcmp(tipo, "onivoro")==0){
                printf("minhoca\n");
            }
        }
    }

    return 0;

}