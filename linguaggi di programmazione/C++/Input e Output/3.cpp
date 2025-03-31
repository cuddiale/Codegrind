// Scrivere un programma che legge una riga di testo dall'utente e la stampa.

#include <iostream>
#include <string>

int main() {
    std::string riga;
    std::cout << "Inserisci una riga di testo: ";
    std::getline(std::cin, riga);
    std::cout << "Hai inserito: " << riga << std::endl;
    return 0;
}