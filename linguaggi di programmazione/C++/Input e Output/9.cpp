// Scrivere un programma che legge 3 parole dall'utente e le stampa.

#include <iostream>
#include <string>

int main() {
    std::string parole[3];
    std::cout << "Inserisci 3 parole:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cin >> parole[i];
    }
    std::cout << "Hai inserito: ";
    for (int i = 0; i < 3; ++i) {
        std::cout << parole[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}