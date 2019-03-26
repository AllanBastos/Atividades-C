//
// Created by allan on 26/03/19.
//

#include "pacote.h"

packet * createDataPacket(int8_t id, int end_org, int end_dest, int carga){
    packet novo, *p;

    novo.carga = (int*) malloc(carga* sizeof(int *));

    novo.identificacor = id;
    novo.end_origem =  end_org;
    novo.end_destino = end_dest;
    novo.tipo = (char) 'DATA';
    novo.tamanho = (int8_t) carga;
    p = &novo;

    return p;

}


packet * createACKPacket(int8_t id, int end_org, int end_dest) {
    packet novo, *p;

    novo.identificacor = id;
    novo.end_origem =  end_org;
    novo.end_destino = end_dest;
    novo.tipo = (char) 'ACK';
    novo.tamanho = 0;
    novo.carga = NULL;
    p = &novo;

    return p;
}




void writeData(packet *pacote, int *carga, int tam) {
    int i;

    for(i=0; i<tam; i++){
        if ((i <= pacote->tamanho)){
            pacote->carga[i] = carga[i];
        }
        else ((pacote->carga[i] = 0));
    }
}


packet * clonePacket(packet *pacote){
    packet copia, *p;

    copia.carga = (int *) malloc(pacote->tamanho* sizeof(int));

    copia.tamanho = pacote->tamanho;
    copia.tipo = pacote->tipo;
    copia.end_origem = pacote->end_origem;
    copia.end_destino = pacote->end_destino;

    copia.identificacor = pacote->identificacor;

    for (int i=0; i<= pacote->tamanho; i++){
        copia.carga[i] = pacote->carga[i];
    }

    p = &copia;

    return p;
}

void printPacketInformation(packet *pacote){

    if (strcmp(pacote->tipo, 'DATA')==0){

        printf("type : DATA\n");
        printf("ID : %d\n", pacote->identificacor);
        printf("Soucer Address : %d\n", pacote->end_origem);
        printf("Destination Anddress : %d\n", pacote->end_destino);
        printf("Payload Size :  %d\n", pacote->tamanho);
        printf("payload: ");
        for (int i=0; i<= pacote->tamanho; i++){
            printf("%d ", pacote->carga[i]);
        }

        printf("\n");

    }
    else{
        printf("type : %c\n", pacote->tipo);
        printf("ID : %d\n", pacote->identificacor);
        printf("Soucer Address : %d\n", pacote->end_origem);
        printf("Destination Anddress : %d\n", pacote->end_destino);

    }

}

void deletePacket(packet *pacote){
    free(pacote->carga);
    free(pacote);
    printf("pacote deletado");
}