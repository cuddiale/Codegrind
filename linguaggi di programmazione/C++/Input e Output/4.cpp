// Scrivere un programma che legge due numeri interi dall'utente e ne stampa la somma.

#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Inserisci il primo numero: ";
    std::cin >> num1;
    std::cout << "Inserisci il secondo numero: ";
    std::cin >> num2;
    std::cout << "La somma è: " << num1 + num2 << std::endl;
    return 0;
}