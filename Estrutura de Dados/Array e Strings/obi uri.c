//
// Created by allan on 14/03/2019.
//

#include <stdio.h>
#include <string.h>


int main(void){
    char palavra[6];
    int  x,i;

    scanf("%d", &x);

    for (i=0; i < x; i++){
        scanf("%s", &palavra);
        int tam = strlen(palavra);
        if (palavra[0] == 'U' && palavra[1] == 'R' && tam < 4) palavra[2] = 'I';

        else if(palavra[0] == 'O' && palavra[1] == 'B' && tam < 4) palavra[2] = 'I';

        if (i != x-1) printf("%s ", palavra);
        else printf("%s", palavra);
    }
    printf("\n");


    return 0;

}