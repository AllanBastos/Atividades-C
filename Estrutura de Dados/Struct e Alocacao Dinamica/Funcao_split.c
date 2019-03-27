//
// Created by allan on 27/03/19.
//

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int verifyListInt(char * s);
int * split_int(char *s, int *size);

int main(void) {
    char ent[100];
    scanf("%[^\n]s", ent);
    int size;
    int *ent_int = split_int(ent, &size);
    if (ent_int == NULL){
        printf("String Inválida");
        return 1;
    }

    int i;
    for  (i = 0; i < size; i++){
        printf("%d ", ent_int[i]);
    }
    return 0;
}


int verifyListInt (char * s){
    int c = 0;
    int i;

    for (i=0; s[i] != '\0'; i++){
        if (i > 0 && s[i] == ' ' && isdigit(s[i-1]) && s[i+1]){
            c++;
        }else if(s[i+1] == '\0' && isdigit(s[i])){
            c++;
        }
    }

    return c;
}


int* split_int(char *s, int *size){
    int pos =0;
    int cn = 0;
    char aux[50];
    *size = (verifyListInt(s));

    if (*size==0) return 0;

    int *p;
    p = (int*)malloc(*size*sizeof(int));

    for (int i = 0; s[i] != '\0'; i++){
        if(isdigit(s[i])){
            aux[pos] = s[i];
            pos++;

        }
        else if ( (i !=0 &&  s[i] == ' ' && isdigit(s[i-1]))){
            aux[pos] = '\0';
            p[cn] = atoi(aux);
            cn++;
            aux[0]='\0';
            pos = 0;
        }

    }
    if(pos > 0) {
        aux[pos] = '\0';
        p[cn] = atoi(aux);

    }

    return p;
}
