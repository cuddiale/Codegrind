// Scrivere un programma che legge un carattere dall'utente e lo stampa.

#include <iostream>

int main() {
    char carattere;
    std::cout << "Inserisci un carattere: ";
    std::cin >> carattere;
    std::cout << "Hai inserito: " << carattere << std::endl;
    return 0;
}