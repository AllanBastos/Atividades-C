//
// Created by allan on 26/03/19.
//

#include <stdint-gcc.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


#ifndef ATIVIDADES_C_PACOTE_H
#define ATIVIDADES_C_PACOTE_H

#endif //ATIVIDADES_C_PACOTE_H

typedef struct pacote {
    int8_t identificacor;
    char tipo;
    int32_t end_origem;
    int32_t end_destino;
    int *carga;
    int8_t tamanho;

}packet;



packet * createDataPacket(int8_t id, int end_org, int end_dest, int carga);

packet * createACKPacket(int8_t id, int end_org, int end_dest);

void writeData(packet *pacote, int *carga, int tam);

packet * clonePacket(packet *pacote);

void printPacketInformation(packet *pacote);

void deletePacket(packet *pacote);