//
// Created by allan on 02/03/2019.
//

#include <stdio.h>
#include <string.h>

void descodificar(char msn[]){
    int tam = strlen(msn);
    for(int i=0; i < tam; i++){
        if (i == 0 && msn[i] != ' '){
            printf("%c", msn[0]);
        }else if (msn[i-1] == ' ' && msn[i] != ' '){
            printf("%c",msn[i]);
        }

    }

    printf("\n");

}

int main(){

    int i, n;

    scanf("%d", &n);
    getchar();

    for (i=0; i<n; i++){

        char msn[51];

        gets(msn);
        descodificar(msn);
    }
    return 0;
}