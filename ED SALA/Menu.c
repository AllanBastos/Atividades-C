
#include <stdio.h>
#include "listaseq.h"
#include <string.h>
#include <ctype.h>

int dado = 0;
TLista lista_inicial;

void menu_add(void);

void menu_remover(void);

void exibir();

void posicao();

void limpar();

char entrada();

int menu_primeira();



int main(void) {

    dado = 0;

    criarLista(&lista_inicial);
    int sair = 1;
    while (sair) {
        int escolha = 0;
        printf("   Editor de Listas\n");
        printf("______________________\n");
        printf("1 - Exibir Listas\n");
        printf("2 - Inserir\n");
        printf("3 - Remover\n");
        printf("4 - Exibir elemento\n");
        printf("5 - Exibir posicao\n");
        printf("6 - Esvasiar lista\n");
        printf("7 - Inserir primeira posicao\n");
        printf("8 - Sair\n");
        printf("\n");

        escolha = entrada();


        switch (escolha)
        {
            case '1':
                imprimir(&lista_inicial);
                break;

            case '2':
                menu_add();
                break;

            case '3':
                menu_remover();
                break;
            case '4':
                exibir();
                break;
            
            case '5':
                posicao();
                break;
            
            case '6':
                limpar();
                break;
            
            case '7':
                menu_primeira();
                break;

            case '8':
                sair = 0;
                break;

                break;
            
        };


    }
    return 0;
}


void menu_add(void){
    while (1){
        int N_element, posicao;

        printf("Digite o elemento que deseja adcionar a lista: \n");
        scanf("%d", &N_element);

        printf("\nDigite a posicao em que deseja adcionar o elemento: \n");
        scanf("%d", &posicao);

        if (inserirElemento(&lista_inicial, posicao, N_element)) {
            printf("\nSucesso na insercao!\n" ) ;
            break;
        }
        else printf("\nTente novamente\n");

    }
}


void menu_remover(void){
    while (1){
        int posicao;
        printf("Digite a posicao que deseja remover o elemento:\n");
        scanf("%d", &posicao);

        if (removerElemento(&lista_inicial,posicao,&dado)) {
            printf("Elemento removido com sucesso.\n");
            break;
        }
        else printf("Tente novamente");
    }

}


void exibir(){
    while (1){
        int posicao;
        printf("Digite a posicao que deseja exibir: \n");
        scanf("%d", &posicao);

        if (elementoNaPosicao(&lista_inicial, posicao, &dado)){
            printf("Elemento na posicao %d: %d\n", posicao, dado);
            break;
        }
        else if (listaVazia(&lista_inicial)){
            printf("Lista vazia\n");
            break;
        }
        else printf("Tente novamente\n");
    }
}


void posicao(){
    while (1){
        int elemento;
        printf("Digite o Elemento que deseja saber a posicao: \n");
        scanf("%d", &elemento);
        if (posicaoDoElemento(&lista_inicial, elemento)){
            printf("A posicao do elemento %d eh %d\n", elemento,posicaoDoElemento(&lista_inicial, elemento));
            break;
        }
        else if (listaVazia(&lista_inicial)){
            printf("Lista vazia\n");
            break;
        }
        else printf("Elemento inexistente, tente novamente!\n");
    }
}


void limpar(){
    while (1){
        char escolha ;
        printf("Tem certeza que deseja limpar a lista? \n(s)sim  (n)nao\n");
        scanf("%s", &escolha);
        if (escolha == 's'){
            (criarLista(&lista_inicial));
            printf("lista esvaziada\n");
            break;
        }
        else break;


    }
}

char entrada(){
    char escolha, lixo;
    printf("Digite sua escolha: \n");
    scanf("%c%c", &escolha, &lixo);
    return escolha;
}


int menu_primeira(){
    int elememento;
    if (listaCheia(&lista_inicial)) {
        printf("A lista esta cheia\n");
        return 0;
    }
    printf("\nDigite o elemento que deseja inserir na primeira posição: ");
    scanf("%d\n", &elememento);
    

    if (inserir_Primeira(&lista_inicial, elememento)==1) {
        printf("sucesso!\n");
        return 1;
    }
    return 0;

}