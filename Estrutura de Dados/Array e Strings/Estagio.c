//
// Created by allan on 14/03/2019.
//

#include <stdio.h>

int main(void){
    int x, cont=1;


    while (1){
        int maior = 0, codigo, media=0;
        int lista[20000] = {0};

        scanf("%d", &x);
        if (x == 0) {
            printf("\n");
            break;
        }
        if (cont > 1) printf("\nTurma %d\n",cont);
        else  printf("Turma %d\n",cont);

        for (int i=0; i < x; i++){
            scanf("%d %d", &codigo, &media);
            lista[i+i] = codigo;
            lista[i+i+1] = media;
            if (media > maior) {
                maior = media;
            }
        }
        for (int i=0; i < x*2; i++){
            if (i % 2 != 0 && lista[i] == maior){
                printf("%d ", lista[i-1]);
            }
        }

        printf("\n");
        cont++;
    }
    return 0;
}