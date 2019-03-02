#include <stdio.h>


void verificar(char* s){
    int total = 0, numero = 0;

    for (int i = 0; s[i] != '\0' ; i++){
        if ((s[i] >= '0') && (s[i] <= '9'))
            numero++;
        total++;
    }
    if (total >= 6 && numero >= 2) printf("SIM\n");
    else printf("NAO\n");


}
int main(void){
    char senha[20];
    int i;

    scanf("%20[^\n]", senha);

    verificar(senha);

    return 0;
}