// Definire una macro per calcolare il quadrato di un numero e usarla in un programma.

#include <iostream>

#define QUADRATO(x) ((x) * (x))

int main() {
    int numero = 4;
    std::cout << "Il quadrato di " << numero << " è " << QUADRATO(numero) << std::endl;
    return 0;
}