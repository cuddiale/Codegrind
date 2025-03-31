// Scrivere un programma che legge 5 numeri interi dall'utente e li stampa.

#include <iostream>

int main() {
    int numeri[5];
    std::cout << "Inserisci 5 numeri interi:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cin >> numeri[i];
    }
    std::cout << "Hai inserito: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << numeri[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
