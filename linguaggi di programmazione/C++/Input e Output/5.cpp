// Scrivere un programma che legge un numero decimale dall'utente e lo stampa.

#include <iostream>

int main() {
    double numero;
    std::cout << "Inserisci un numero decimale: ";
    std::cin >> numero;
    std::cout << "Hai inserito: " << numero << std::endl;
    return 0;
}