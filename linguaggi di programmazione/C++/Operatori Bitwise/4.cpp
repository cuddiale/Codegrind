// Utilizzare l'operatore `~` per eseguire un'operazione NOT bit a bit su un numero.

#include <iostream>

int main() {
    int a = 12; // 1100 in binario
    int risultato = ~a; // 0011 in binario (inverting all bits)
    std::cout << "Risultato di ~a: " << risultato << std::endl; // -13 in decimale (2's complement representation)
    return 0;
}