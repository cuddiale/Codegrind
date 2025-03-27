// Utilizzare l'operatore `^=` per eseguire un'operazione XOR bit a bit su una variabile.

#include <iostream>

int main() {
    int a = 10; // 1010 in binario
    a ^= 6; // 0110 in binario
    std::cout << "a ^= 6: " << a << std::endl; // Risultato: 12 (1100 in binario)
    return 0;
}