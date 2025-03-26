// Dichiarare e utilizzare una variabile globale in diverse funzioni.

#include <iostream>

int globale = 0;

void incrementaGlobale() {
    globale++;
}

void stampaGlobale() {
    std::cout << "Globale: " << globale << std::endl;
}

int main() {
    incrementaGlobale();
    stampaGlobale(); // Globale: 1
    incrementaGlobale();
    stampaGlobale(); // Globale: 2
    return 0;
}