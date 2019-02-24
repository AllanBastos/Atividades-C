#include <stdio.h>

int main() {
    int total, h, m, s;

    scanf("%d", &total);

    h = 0;
    m = 0;
    s = 0;

    while (total >= 3600){
        h++;
        total -= 3600;
    }

    while (total >= 60) {
        m++;
        total -= 60;
    }
    while (total >=1){
        s++;
        total -=1;
    }

    printf("%d:%d:%d\n",h, m, s);
    return 0;


}