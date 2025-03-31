// Definire una macro di guardia per prevenire inclusioni multiple di un file di intestazione.

// file: mio_header.h
#ifndef MIO_HEADER_H
#define MIO_HEADER_H

void funzioneEsempio();

#endif // MIO_HEADER_H

// file: main.cpp
#include <iostream>
#include "mio_header.h"

void funzioneEsempio() {
    std::cout << "Funzione esempio" << std::endl;
}

int main() {
    funzioneEsempio();
    return 0;
}