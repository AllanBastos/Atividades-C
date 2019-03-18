//
// Created by allan on 17/03/19.
//


//                                 Exercicio - Structs e Alocação dinamica de Memoria

// Questão 1: Qual a saída fornecida por esse programa??
//
//Media de Maria: 92.00
// o a2 ficar sem nome
// e a media dele será 90.00


// Questão 2:
// Na linha 25 a Variavel do a2 está recebendo a variavel a1 completa, e por isso que
// Quando voce mudar os valores do a2 voce estará mudando a variavel do a1 tambem;



// Questão 3:
// Na linha 43 e 44 esta sendo limpo o espaço de memoria alocado anteriomente;
// se você usar esse comando antes de terminar de usar as variaveis, pode ocorrer
// erro de saida; mas se você não ultiliza-la no final do seu programa, a memoria
// alocada por ele, vai permanecer, podendo ocorrer consumo de memoria
// desnecessario no Sistema.


// Questão 4:


//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//typedef struct {
//    int idade;
//    char nome[50];
//    int *notas;
//}aluno;
//
//int main(void){
//    aluno a1, a2;
//
//    a1.idade = 10;
//    stpcpy(a1.nome, "Pedro");
//
//    a2.idade = 12;
//    strcpy(a2.nome, "Maria");
//
//    a1.notas = (int*) malloc(5* sizeof(int));
//    a2.notas = (int*) malloc(4* sizeof(int));
//
//
//    int i;
//
//    for (i=0; i< 5; i++) a1.notas[i] = 100;
//
//
//    for (i=0; i < 4; i++){
//        a2.notas[i] = a1.notas[i];
//    }
//
//    for (i=0; i < 4; i++) a2.notas[i] -= 10;
//
//    double media = 0;
//
//    for (i=0; i<5; i++) media+= a1.notas[i];
//    media = media/5;
//
//    printf("Media de %s: %.2lf\n", a1.nome, media);
//
//    media = 0;
//
//    for (i=0; i<4; i++) media += a2.notas[i];
//
//    media = media/4;
//
//    printf("Media de %s: %.2lf\n", a2.nome, media);
//
//    free(a1.notas);
//    free(a2.notas);
//
//    return 0;
//}

//
//                                         2 Função splitInt
//

#include <stdio.h>

//int verifyListInt(const char *s);
//
//

int main() {
    char ent[100];
    scanf("%[^\n]s", ent);
    int size;
    int *ent_int = split_int(ent, &size);
    if (ent_int == NULL){
        printf("String Inválida");
        return 1;
    }
    printf("Size: %d\n", size);
    int i;
    for  (i = 0; i < size; i++){
        printf("%d ", ent_int[i]);
    }
    return 0;

}

int verifyListInt (char *s){
    int c =0;
    int i;
    for (i=0; s[i] != '\0'; i++){
        if (s[i] != ' ' && !(s[i] >= '0' && s[i] >= '9')){
            return 0;
        }
        else if((s[i] >= '0' && s[i] >= '9')){
            c++;
        }
    }
    return c;
}


int split_int(char *s, int *size){
    int pos =0;
    int cn = 0;
    size = (verifyListInt(s)== 0);



    if (size==0) return NULL;
    int v[10] ={};

    for (int i=0; s[i] != '\0'; i++){
        if (s[i] >= '0' && s[i] <= '9'){
            cn = 1;
            v[pos] = s[i];
        }
        else if (cn == 1 && s[i] == ' '){
            pos++;
            cn = 0;
        }
    }

    for (int i=0; i<pos ; i++){
        printf("%d", v[i]);
    }
    ;

}