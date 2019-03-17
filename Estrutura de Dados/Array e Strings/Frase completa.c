//
// Created by allan on 09/03/2019.
//

#include <stdio.h>
#include <string.h>

int main(void){

    int n=0, alfabeto[26] = {0};

    scanf("%d", &n);
    char frase[1001];
    getchar();

    for (int i=0; i < n; i++){

        int alfabeto[26] = {0};
        memset(alfabeto,0,26* sizeof(int));

        memset(frase,0,1001* sizeof(char));

        gets(frase);

        for (int i=0; i<1001; i++){
            if (frase[i] == 'a') alfabeto[0] = 1;
            else if (frase[i] == 'b') alfabeto[1] = 1;
            else if (frase[i] == 'c') alfabeto[2] = 1;
            else if (frase[i] == 'd') alfabeto[3] = 1;
            else if (frase[i] == 'e') alfabeto[4] = 1;
            else if (frase[i] == 'f') alfabeto[5] = 1;
            else if (frase[i] == 'g') alfabeto[6] = 1;
            else if (frase[i] == 'h') alfabeto[7] = 1;
            else if (frase[i] == 'i') alfabeto[8] = 1;
            else if (frase[i] == 'j') alfabeto[9] = 1;
            else if (frase[i] == 'k') alfabeto[10] = 1;
            else if (frase[i] == 'l') alfabeto[11] = 1;
            else if (frase[i] == 'm') alfabeto[12] = 1;
            else if (frase[i] == 'n') alfabeto[13] = 1;
            else if (frase[i] == 'o') alfabeto[14] = 1;
            else if (frase[i] == 'p') alfabeto[15] = 1;
            else if (frase[i] == 'q') alfabeto[16] = 1;
            else if (frase[i] == 'r') alfabeto[17] = 1;
            else if (frase[i] == 's') alfabeto[18] = 1;
            else if (frase[i] == 't') alfabeto[19] = 1;
            else if (frase[i] == 'u') alfabeto[20] = 1;
            else if (frase[i] == 'v') alfabeto[21] = 1;
            else if (frase[i] == 'w') alfabeto[22] = 1;
            else if (frase[i] == 'x') alfabeto[23] = 1;
            else if (frase[i] == 'y') alfabeto[24] = 1;
            else if (frase[i] == 'z') alfabeto[25] = 1;

        }
        int cont=0;
        for(int i = 0; i < 26; i++){
            cont+= alfabeto[i];
        }

        if (cont >= 26) printf("frase completa\n");
        else if (cont >= 13) printf("frase quase completa\n");
        else printf("frase mal elaborada\n");

    }
    return 0;

}