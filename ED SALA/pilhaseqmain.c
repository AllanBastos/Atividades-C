//
// Created by allan on 24/04/19.
//

#include "pilhaseq.h"
#include <stdio.h>


char entrada(void);

int main(void){
    TPilha pilha;

    char escolha;
    int sair =1;
    while (sair) {
        printf("  Editor de Pilha V1.0\n"
               "=========================\n"
               "1-: Inicializar\n"
               "2-: Empilhar\n"
               "3-: Desempilhar\n"
               "4-: Elemento do topo\n"
               "5-: Imprimir pilha\n"
               "6-: Inverter elementos da pilha\n"
               "7-: Esvaziar a pilha\n"
               "8-: Mudar de pilha\n"
               "9-: Sair\n");

        escolha = entrada();

        switch (escolha){
            case '1':
                criarPilha(&pilha);
                break;

            case '2':
                break;

            case '9':
                sair = 0;
                break;

            default:
                printf("Tente novamente\n");
                break;

        }
    }


    return 0;

}

char entrada(void){
    char escolha = 0;
    printf("Digite sua escolha: \n");
    scanf("%c", &escolha);
    return escolha;
}