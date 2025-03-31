// Scrivere un programma che legge una stringa dall'utente e la stampa.

#include <iostream>
#include <string>

int main() {
    std::string parola;
    std::cout << "Inserisci una parola: ";
    std::cin >> parola;
    std::cout << "Hai inserito: " << parola << std::endl;
    return 0;
}