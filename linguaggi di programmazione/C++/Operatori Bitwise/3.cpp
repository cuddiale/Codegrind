// Utilizzare l'operatore `^` per eseguire un'operazione XOR bit a bit tra due numeri.

#include <iostream>

int main() {
    int a = 12; // 1100 in binario
    int b = 10; // 1010 in binario
    int risultato = a ^ b; // 0110 in binario
    std::cout << "Risultato di a ^ b: " << risultato << std::endl; // 6 in decimale
    return 0;
}