#include <stdio.h>

int main(void){
    int pa, pb, cont = 0, n;
    double g1, g2;

    scanf("%d", &n);

    while (cont < n){
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);

        int anos = 0;

        while (pa <= pb){
            pa += (long)((pa*g1)/100);
            pb += (long)((pb*g2)/100);

            anos++;

            if (anos > 100){
                anos = 101;
                break;
            }
        }
        if (anos == 101){
            printf("Mais de 1 seculo.\n");
        }
        else if (anos <= 100){
            printf("%d anos.\n", anos);
        }
        cont++;
    }
    return 0;
}