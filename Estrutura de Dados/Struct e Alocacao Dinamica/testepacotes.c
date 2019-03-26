//
// Created by allan on 26/03/19.
//

#include "pacote.h"
#include <stdio.h>

int main(void){
    packet *pacote1;

    pacote1 = createACKPacket(2, 150, 552);

    printPacketInformation(pacote1);




    return 0;
}