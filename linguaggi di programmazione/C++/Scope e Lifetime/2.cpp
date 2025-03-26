// Creare una funzione che utilizza una variabile statica e osservare come il suo valore persiste tra chiamate successive alla funzione.

#include <iostream>

void incrementa() {
    static int counter = 0;
    counter++;
    std::cout << "Counter: " << counter << std::endl;
}

int main() {
    incrementa(); // Counter: 1
    incrementa(); // Counter: 2
    incrementa(); // Counter: 3
    return 0;
}