// Scrivere un programma che legge tre numeri dall'utente e ne stampa la media.

#include <iostream>

int main() {
    double num1, num2, num3;
    std::cout << "Inserisci il primo numero: ";
    std::cin >> num1;
    std::cout << "Inserisci il secondo numero: ";
    std::cin >> num2;
    std::cout << "Inserisci il terzo numero: ";
    std::cin >> num3;
    double media = (num1 + num2 + num3) / 3;
    std::cout << "La media è: " << media << std::endl;
    return 0;
}