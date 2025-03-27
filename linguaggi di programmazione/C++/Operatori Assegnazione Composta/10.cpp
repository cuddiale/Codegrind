// Utilizzare l'operatore `>>=` per eseguire uno shift a destra su una variabile.

#include <iostream>

int main() {
    int a = 10; // 1010 in binario
    a >>= 1;
    std::cout << "a >>= 1: " << a << std::endl; // Risultato: 5 (0101 in binario)
    return 0;
}