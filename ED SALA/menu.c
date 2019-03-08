#include <stdio.h>
#include <conio.h>
#include "listaseq.h"

TLista lista_inicial;


void menu_add_element(void){
    int N_element, posicao;

    printf("Digite o elemento que deseja adcionar a lista [%d]\n",(scanf("%d",N_element)));
    printf("Digite a posicao em que deseja adcionar o elemento [%d]\n",(scanf("%d",posicao)));

    if (inserirElemento(&lista_inicial, posicao, N_element)) printf( "\nSucesso na insercao!" ) ;

}

int main(void){
    int escolha = 0;
    criarLista(&lista_inicial);

    while(1){
        printf("Editor de Listas\n");
        printf("_________________________\n");
        printf("1 - Exibir Listas\n");
        printf("2 - Insirir\n");
        printf("3 - Remover\n");
        printf("4 - Exibir elemento\n");
        printf("5 - Exibir posicao\n");
        printf("6 - Esvasiar lista\n");
        printf("ESC - Sair\n");
        printf("\n");
        printf("Digite sua opcao [%d]\n",escolha);
        scanf("%d", &escolha);
        if ((escolha > 0 && escolha < 7) || getch()== '\x1b') {
            if (escolha == 1) imprimir(&lista_inicial);
            else if (escolha == 2) menu_add_element();
            else if (escolha == 3) removerElemento;
            else if (escolha == 4) elementoNaPosicao;
            else if (escolha == 5) posicaoDoElemento;
            else if (escolha == 6) listaVazia;
            else if (getch() == 27) break;
        }
        else printf("Opcao Invalida, Tente novamente\n");
    }
    return  0;
    
}
