//
// Created by allan on 03/03/2019.
//

#include <stdio.h>

int main(void){
    int n, num[2001] = {0}, i, k;
    scanf("%d", &n);

    while (n--){
        scanf("%d", &i);
        num[i]++;
    }
    for (k = 0; k < 2001; k++){
        if (num[k] > 0) {
            printf("%d aparece %d vez(es)\n", k, num[k]);
        }
    }
    return 0;

}