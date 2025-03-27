// Utilizzare l'operatore `|` per impostare il secondo bit di un numero a 1.

#include <iostream>

int main() {
    int a = 10; // 1010 in binario
    int mask = 1 << 1; // 0010 in binario
    int risultato = a | mask; // 1010 | 0010 = 1010 in binario
    std::cout << "Risultato di a con il secondo bit impostato: " << risultato << std::endl; // 10 in decimale
    return 0;
}