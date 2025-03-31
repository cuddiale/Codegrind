// Scrivere un programma che legge un numero intero dall'utente e lo stampa.

#include <iostream>

int main() {
    int numero;
    std::cout << "Inserisci un numero intero: ";
    std::cin >> numero;
    std::cout << "Hai inserito: " << numero << std::endl;
    return 0;
}