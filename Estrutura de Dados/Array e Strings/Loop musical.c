//
// Created by allan on 28/02/2019.
//

#include <stdio.h>

int main(){
    int n, rstd, pico1, pico2, v[3];

    while(1){
        scanf("%d", &n);
        if (n == 0)
            break;

        rstd = 0;
        scanf("%d", &v[0]);
        scanf("%d", &v[1]);

        if(n == 2){
            if(v[0] != v[1]){
                rstd = 2;
            }
        }
        else{
            pico1 = v[0];
            pico2 = v[1];

            for (int i = 2; i < n; i++){
                scanf("%d", &v[2]);
                if (((v[1] > v[0]) && (v[1] > v[2])) || ((v[1] < v[0]) && (v[1] < v[2]))){
                    rstd++;
                }
                v[0] = v[1];
                v[1] = v[2];
            }
            if ((pico1 > pico2  && pico1 > v[2]) || (pico1 < pico2 && pico1 < v[2])){
                rstd++;
            }
            if ((v[2] > v[0] && v[2] > pico1) || (v[2] < v[0] && v[2] < pico1)){
                rstd++;
            }
        }
        printf("%d\n", rstd);
    }

    return 0;
}
