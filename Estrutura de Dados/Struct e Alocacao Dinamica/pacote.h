//
// Created by allan on 26/03/19.
//

#include <stdint-gcc.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


#ifndef ATIVIDADES_C_PACOTE_H
#define ATIVIDADES_C_PACOTE_H

#endif //ATIVIDADES_C_PACOTE_H.1.211.61 (não seguro)

#define DATA 0
#define ACK 1

typedef struct pacote {
    int identificacor;
    int tipo;
    int end_origem;
    int end_destino;
    char *carga;
    int tamanho;

}packet;



packet * createDataPacket(int id, int end_org, int end_dest, int tamanho);

packet * createACKPacket(int id, int end_org, int end_dest);

void writeData(packet *pacote, char *carga, int tam);

packet * clonePacket(packet *pacote);

void printPacketInformation(packet *pacote);

void deletePacket(packet *pacote);