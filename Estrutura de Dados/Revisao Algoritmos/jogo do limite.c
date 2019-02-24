//
// Created by allan on 20/02/2019.
//

#include <stdio.h>


int modulo(int x, int y){
    int m = x - y;

    if (m < 0){
        return m*(-1);
    }
    else{
        return m;
    }
}

int main(void){
    int pontos_alice = 0, pontos_bob = 0, carta_alice = 0, carta_bob = 0;
    int carta_atual = 0, i;
    int N, T, L;
    scanf("%d %d %d", &N, &T, &L);

    carta_atual = T;

    for (i=0; i < N-1; ++i){
        if (i == 0 || i % 2 == 0){
            carta_alice = scanf("%d", &carta_alice);
            if (modulo(carta_atual, carta_alice) <= L){
                pontos_alice += (modulo(carta_atual, carta_alice));
                carta_atual = carta_alice;
            }
        }
        else{
            carta_bob = scanf("%d", &carta_bob);
            if (modulo(carta_atual, carta_bob) <= L){
                pontos_bob += (modulo(carta_atual, carta_bob));
                carta_atual = carta_bob;
            }
        }
    }printf("%d %d\n", pontos_alice, pontos_bob);
    return 0;
}

