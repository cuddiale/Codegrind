// Utilizzare l'operatore `~` per invertire tutti i bit di un numero.

#include <iostream>

int main() {
    int a = 5; // 0101 in binario
    int risultato = ~a; // 1010 in binario (inverting all bits)
    std::cout << "Risultato di ~a: " << risultato << std::endl; // -6 in decimale (2's complement representation)
    return 0;
}