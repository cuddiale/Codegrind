// Utilizzare l'operatore `&` per controllare se il terzo bit di un numero è 1.

#include <iostream>

int main() {
    int a = 12; // 1100 in binario
    int mask = 1 << 2; // 0100 in binario
    bool risultato = a & mask;
    std::cout << "Il terzo bit di a è 1: " << std::boolalpha << risultato << std::endl; // true
    return 0;
}