//
// Created by allan on 26/03/19.
//

#include "pacote.h"
#include <stdio.h>

int main(void){
    packet *pacote_ack;
    packet *pacote_data;
    packet *clone_data;
    packet *clone_ack;

    char dados[6] = {1, 2, 3, 4, 5,'\0'}, *p;
    p = dados;

    pacote_ack = createACKPacket(2, 150, 552);
    printPacketInformation(pacote_ack);
    printf("\n\n");
    pacote_data = createDataPacket(1,552,150,9);
    printPacketInformation(pacote_data);
    printf("\n\n");
    writeData(pacote_data,p,9);
    printPacketInformation(pacote_data);
    printf("\n\n CLONE DATA:\n");
    clone_data = clonePacket(pacote_data);
    printPacketInformation(clone_data);
    printf("\n\n CLONE ACK:\n");
    clone_ack = clonePacket(pacote_ack);
    printPacketInformation(clone_ack);

    printf("\n\n Delete:\n");

    deletePacket(pacote_ack);
    deletePacket(pacote_data);
    deletePacket(clone_ack);
    deletePacket(clone_data);


    return 0;
}