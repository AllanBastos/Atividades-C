//
// Created by allan on 26/03/19.
//

#include "pacote.h"

packet * createDataPacket(int id, int end_org, int end_dest, int tamanho){

    packet *novo;
    novo = (packet*) malloc(sizeof(packet));

    novo->identificacor = id;
    novo->end_origem =  end_org;
    novo->end_destino = end_dest;
    novo->tipo = DATA;
    novo->tamanho = tamanho;

    char *p;
    p = (char*)malloc(tamanho*sizeof(char));

    novo->carga = p;



    return novo;

}

packet * createACKPacket(int id, int end_org, int end_dest) {
    packet *novo;

    novo = (packet*) malloc(sizeof(packet));


    novo->identificacor = id;
    novo->end_origem =  end_org;
    novo->end_destino = end_dest;
    novo->tipo = ACK;
    novo->tamanho = 0;
    novo->carga = NULL;


    return novo;
}




void writeData(packet *pacote, char *carga, int tam) {
    int i;
    int chave = 0;
    for(i=0; i<tam; i++){

        if(carga[i] != '\0' && chave == 0){
            pacote->carga[i] = carga[i];
        }else{
            pacote->carga[i] = 0;
            chave = 1;
        }

    }
}



packet * clonePacket(packet *pacote){
    packet *copia;

    copia = (packet*) malloc(sizeof(packet));



    copia->tipo = pacote->tipo;
    copia->end_origem = pacote->end_origem;
    copia->end_destino = pacote->end_destino;
    copia->tamanho = pacote->tamanho;
    copia->identificacor = pacote->identificacor;

    if (pacote->tipo == 0){
        copia->carga = (char*) malloc(pacote->tamanho* sizeof(char));
        for (int i=0; i<= pacote->tamanho; i++) {
            copia->carga[i] = pacote->carga[i];
        }

    }


    return copia;
}

void printPacketInformation(packet *pacote){

    if (pacote->tipo == 0){

        printf("type : DATA\n");
        printf("ID : %d\n", pacote->identificacor);
        printf("Soucer Address : %d\n", pacote->end_origem);
        printf("Destination Anddress : %d\n", pacote->end_destino);
        printf("Payload Size :  %d\n", pacote->tamanho);
        printf("payload: ");

        for (int i=0; i< pacote->tamanho; i++){
            printf("%d ", pacote->carga[i]);
        }

        printf("\n");

    }
    else{
        printf("type ACK: \n");
        printf("ID : %d\n", pacote->identificacor);
        printf("Soucer Address : %d\n", pacote->end_origem);
        printf("Destination Anddress : %d\n", pacote->end_destino);

    }

}

void deletePacket(packet *pacote){
    free(pacote->carga);
    free(pacote);
    printf("pacote deletado\n");
}