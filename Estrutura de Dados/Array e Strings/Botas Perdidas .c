//
// Created by allan on 07/03/2019.
//

#include <stdio.h>
#include <string.h>

int main(void){
    int n;


    char lado;
    int esq[61] = {0}, dir[61] = {0};

    while (scanf("%d", &n) != EOF){

        memset(esq,0,61* sizeof(int));
        memset(dir,0,61* sizeof(int));

        int i;
        for (int j=0; j < n; j++) {
            scanf("%d %c", &i, &lado);
            if (lado == 'E') esq[i]++;
            else if (lado == 'D') dir[i]++;
        }

        int cont = 0;
        for(int k=30; k < 61; k++){
            if ((esq[k] > 0) && (dir[k] > 0)) cont++;
        }
        printf("%d\n", cont);

    }
    return 0;
}