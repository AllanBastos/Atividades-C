//
// Created by allan on 04/04/19.
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void numeros(char *s);
int contar_numero(const char *c);


int main (void){
    char cadeia[50], *pcad;
    pcad = cadeia;
    scanf("%[^\n]s",cadeia);
    numeros(pcad);

    return 0;
}

int contar_numero(const char *c){
    int count = 0;
    int i;
    for (i=0; c[i]!= '\0'; i++){
        if(isdigit(c[i])) count++;
    }
    return count;
}

void numeros(char *s) {
    int count = 0, len_num, *p;

    len_num = contar_numero(s);

    p = (int *) malloc(len_num * sizeof(int));

    for (int i = 0; s[i] != '\0'; i++) {
        if (isdigit(s[i])) {

            p[count] = s[i];
            count++;
        }
    }
    p[count] = '\0';

    for (int i=0; p[i]!= '\0'; i++) {
        printf("%c", p[i]);
    }
    free(p);
}